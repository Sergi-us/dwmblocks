// Ändere diese Datei, um zu ändern, was die Befehle in deiner Statusleiste ausgeben, und kompiliere sie erneut mit dem Befehl "make".
// SARBS 0.7

static const Block blocks[] = {
	/* Symbol */	/* Befehl */		/* Intervall */		/* Aktualisierungssignal */
	{"",		"sb-backup",		0,			20},
	{"",		"sb-pacpackages",	0,			8},
	/* {"",	"sb-kbselect",		0, 			30}, */
	{"", 		"cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",		"sb-tasks",		10,			26},
	/* {"",		"sb-music",		0,			11}, */
	{"",		"sb-news",		600,			6},
	/* {"",		"sb-price xmr-btc \"Monero to Bitcoin\"  25",	9000,	25}, */
	/* {"",		"sb-price xmr Monero  24",			9000,	24}, */
	/* {"",		"sb-price eth Ethereum  23",			9000,	23}, */
	/* {"",		"sb-price btc Bitcoin  21",			9000,	21}, */
	/*{"",		"sb-torrent",		20,			7}, */
	/* {"",		"sb-memory",		10,			14}, */
	/* {"",		"sb-cpu",		10,			18}, */
	/*{"",		"sb-moonphase",		18000,			17}, */
	/* {"",		"sb-doppler",		0,			13}, */
	/* {"",		"sb-forecast",		18000,			5}, */
	{"",		"sb-mailbox",		180,			12},
	{"",		"sb-nettraf",		1,			16},
	{"",		"sb-volume",		0,			10},
	{"",		"sb-battery",		5,			3},
	{"",		"sb-clock",		60,			1},
	{"",		"sb-internet",		5,			4},
	/* {"",		"sb-iplocate", 		0,			27}, */
	{"",		"sb-help-icon",		0,			15},
};

// Setzt das Trennzeichen zwischen Statusbefehlen. Das NULL-Zeichen ('\0') bedeutet kein Trennzeichen.
static char *delim = " ";

// Lasse dwmblocks automatisch neu kompilieren und ausführen, wenn du diese Datei in
// vim mit der folgenden Zeile in deiner vimrc/init.vim bearbeitest:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

