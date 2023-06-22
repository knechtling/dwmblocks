//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sb-music",	0,	11},
	{"", "sb-volume",	0,	10},
	{"", "sb-forecast",	18000,	5},
	{"", "sb-clock",	60,	1},
	{"", "sb-internet",	5,	4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
