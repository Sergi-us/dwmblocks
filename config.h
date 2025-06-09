// Ändere diese Datei, um zu ändern, was die Befehle in deiner Statusleiste ausgeben, und kompiliere sie erneut mit dem Befehl "make".
// ## 2025-01-16 Hintergrundbilder sollen sich ändern
// Aktualisierungssignal muss unterschiedlich sein!
//
// test zum bla bla

static const Block blocks[] = {
/* Symbol */ /* Befehl */               /* Intervall */     /* Aktualisierungssignal */
    {"",    "cat /tmp/recordingicon 2>/dev/null",   1,      1},
    {"",    "sb-music",                 1,                  7},
/*  {"",    "sb-price btc Bitcoin  21",    9000,           12},    */
/*  {"",    "sb-yt",                    0,                  28},    */
/*  {"",    "sb-mailbox",               3600,               20},    */
/*  {"",   "sb-news",                  3600,               8},     */
/*  {"",    "sb-backup",                60,                 2},     */
    {" ",  "sb-pacpackages",           3600,               5},
/*  {"",    "sb-tasks",                 10,                 6},     */
/*  {"",    "sb-price xmr-btc \"Monero to Bitcoin\"  25",	9000,	9}, */
/*  {"",    "sb-price xmr Monero  24",     9000,           10},    */
/*  {"",    "sb-price eth Ethereum  23",   9000,           11},    */
/*  {"",    "sb-torrent",               20,                 13},    */
/*  {"",    "sb-disk",                  10,                 16},    */
/*  {"",    "sb-cpubars",               1,                  17},    */
/*  {"",    "sb-doppler",               0,                  18},    */
/*  {"",    "sb-forecast",              18000,              19},    */
    {"",    "sb-volume",                60,                 21},
/*  {"",    "sb-kbselect",              0,                  25},    */
/*  {"",    "sb-iplocate",              120,                27},    */
/*  {"",    "sb-moonphase",             18000,              4},     */
/*  {"",    "sb-xsct",                  3600,               30},    */
/*  {"",    "sb-bluetooth",             0,                  31},    */
    {"",    "sb-hintergrund",           0,                  29},
    {"",    "sb-ram",                   10,                 14},
    {"",    "sb-cpu",                   10,                 15},
    {"",    "sb-battery",               60,                 22},
/*  {"",    "sb-nettraf",               1,                  24},    */
    {"",    "sb-internet",              5,                  23},
    {"",    "sb-clock",                 60,                 26},
    {"",    "sb-help-icon",             0,                  3},
};

// Setzt das Trennzeichen zwischen Statusbefehlen. Das NULL-Zeichen ('\0') bedeutet kein Trennzeichen.
// static char *delim = " | ";
// static char *delim = "  ";
static char *delim = " ";

// Lasse dwmblocks automatisch neu kompilieren und ausführen, wenn du diese Datei in
// vim mit der folgenden Zeile in deiner vimrc/init.vim bearbeitest:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

