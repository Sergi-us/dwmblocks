// Ändere diese Datei, um zu ändern, was die Befehle in deiner Statusleiste ausgeben, und kompiliere sie erneut mit dem Befehl "make".
// ## 2025-01-10
// Aktualisierungssignal muss unterschiedlich sein!
// SARBS 0.7

static const Block blocks[] = {
/* Symbol */ /* Befehl */               /* Intervall */     /* Aktualisierungssignal */
    {"",    "cat /tmp/recordingicon 2>/dev/null",   0,      1},
    {"",    "sb-backup",                60,                 2},
    {"",    "sb-help-icon",             60,                 3},
/*  {"",    "sb-moonphase",             18000,              4},    */
    {"",    "sb-pacpackages",           0,                  5},
    {"",    "sb-tasks",                 10,                 6},
    {"",    "sb-music",                 0,                  7},
    {"",   "sb-news",                  600,                8},
/*  {"",    "sb-price xmr-btc \"Monero to Bitcoin\"  25",	9000,	9}, */
/*  {"",    "sb-price xmr Monero  24",     9000,           10},    */
/*  {"",    "sb-price eth Ethereum  23",   9000,           11},    */
/*  {"",    "sb-price btc Bitcoin  21",    9000,           12},    */
    {"",    "sb-torrent",               20,                 13},
    {"",    "sb-memory",                10,                 14},
/*  {"",    "sb-cpu",                   10,                 15},    */
/*  {"",    "sb-disk",                  10,                 16},    */
/*  {"",    "sb-cpubars",               10,                 17},    */
/*  {"",    "sb-doppler",               0,                  18},    */
/*  {"",    "sb-forecast",              18000,              19},    */
    {"",    "sb-mailbox",               180,                20},
    {"",    "sb-volume",                0,                  21},
    {"",    "sb-battery",               5,                  22},
    {"",    "sb-internet",              5,                  23},
    {"",    "sb-nettraf",               1,                  24},
/*  {"",    "sb-kbselect",              0,                  25},    */
    {" ",   "sb-clock",                 60,                 26},
    {"",    "sb-iplocate",              60,                 27},
};

// Setzt das Trennzeichen zwischen Statusbefehlen. Das NULL-Zeichen ('\0') bedeutet kein Trennzeichen.
static char *delim = " ";

// Lasse dwmblocks automatisch neu kompilieren und ausführen, wenn du diese Datei in
// vim mit der folgenden Zeile in deiner vimrc/init.vim bearbeitest:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

