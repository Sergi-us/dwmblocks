# dwmblocks

Modulare Statusbar für dwm (geschrieben in C)

## Blöcke modifizieren

Die Statusbar wird aus Textausgaben von Kommandozeilen-Programmen erstellt. Blöcke werden durch Bearbeitung der `config.h` Datei hinzugefügt und entfernt.

### Blöcke aktivieren/deaktivieren

Um einzelne Module zu aktivieren oder zu deaktivieren, bearbeite die `config.h` Datei:

**Aktivieren:** Entferne die `/*` und `*/` Kommentarzeichen vor und nach der entsprechenden Zeile:
```c
// Deaktiviert:
/*  {"",    "sb-mailbox",               3600,               20},    */

// Aktiviert:
    {"",    "sb-mailbox",               3600,               20},
```

**Deaktivieren:** Füge `/*` am Anfang und `*/` am Ende der Zeile hinzu:
```c
// Aktiviert:
    {"",    "sb-bluetooth",             0,                  31},

// Deaktiviert:
/*  {"",    "sb-bluetooth",             0,                  31},    */
```

Nach jeder Änderung muss dwmblocks neu kompiliert werden:
```bash
sudo make install && { killall -q dwmblocks; setsid dwmblocks & }
```

## Sergi's Build

Ich verwende dwmblocks mit meinen eigenen Skripten aus meinem [dotfiles Repository](https://github.com/Sergi-us/dotfiles/tree/main/.local/bin/statusbar). Wenn du mein Setup verwenden möchtest, lade diese Skripte herunter und platziere sie in deinem `$PATH`. Dies vermeidet Redundanz - sowohl i3 als auch dwm verwenden dieselben Statusbar-Skripte.

## Signale für Aktualisierungen

Die meisten Statusbars führen alle paar Sekunden alle Skripte erneut aus. Das ist hier möglich, aber besser ist es, deinen Modulen ein Signal zu geben, um sie bei relevanten Ereignissen zu aktualisieren, anstatt sie ständig laufen zu lassen.

Beispiel: Das Audio-Modul hat standardmäßig das Update-Signal 21. Durch Ausführung von `pkill -RTMIN+21 dwmblocks` wird es aktualisiert.

Du kannst auch `kill -55 $(pidof dwmblocks)` ausführen, was denselben Effekt hat, aber schneller ist. Addiere einfach 34 zu deiner üblichen Signalnummer.

Mein Volume-Modul aktualisiert sich *niemals* von selbst. Stattdessen führe ich diesen Befehl zusammen mit meinen Lautstärke-Shortcuts in dwm aus, um es nur bei Bedarf zu aktualisieren.

**Wichtig:** Alle Module müssen unterschiedliche Signalnummern haben.

## Klickbare Module

Wie bei i3blocks ermöglicht dieser Build zusätzliche Aktionen in deinen Skripten als Reaktion auf Klick-Ereignisse. Siehe die oben verlinkten Skripte für Beispiele mit der `$BLOCK_BUTTON` Variable.

Damit diese Funktion funktioniert, benötigst du den entsprechenden Patch in dwm. Siehe [hier](https://dwm.suckless.org/patches/statuscmd/).

## Fehlerbehebung

**Problem:** Die gesamte Statusbar wird nicht angezeigt
**Ursache:** Ein einzelnes Modul funktioniert nicht korrekt oder das entsprechende Programm ist nicht installiert

**Lösung:**
1. Deaktiviere verdächtige Module (besonders Hardware-spezifische wie Bluetooth, wenn keine Hardware vorhanden)
2. Teste Module einzeln durch temporäres Deaktivieren anderer
3. Überprüfe, ob alle benötigten Programme installiert sind
4. Kontrolliere die Logs mit `journalctl -f` während dwmblocks läuft

**Häufige Problemverursacher:**
- `sb-bluetooth` - wenn keine Bluetooth-Hardware vorhanden (standardmäßig deaktiviert)
- `sb-battery` - bei Desktop-Systemen ohne Akku
- `sb-internet` - bei fehlender Netzwerkverbindung
- `sb-mailbox` - wenn E-Mail-Konfiguration fehlt

**Tipp:** Beginne mit einer minimalen Konfiguration und füge Module schrittweise hinzu.

## Automatische Neukompilierung

Für automatische Neukompilierung bei Änderungen an der `config.h` füge diese Zeile in deine vimrc/init.vim ein:

```vim
autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
```

## Credits

Basiert auf dwmblocks mit Anpassungen.
Clickable modules Patches von Daniel Bylinka (daniel.bylinka@gmail.com).
