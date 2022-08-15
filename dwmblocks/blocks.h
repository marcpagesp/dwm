//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/															/*Update Interval*/	/*Update Signal*/
	{"", "network",																							15,				0},
	{"", "brightness",																					0,				1},
	{"", "volume",			     																		0,				2},
	{"", "battery",																							60,				0},
	{"", "echo ^c#ffb86c^ $(date '+%a %d %b %R')",	  					60,				0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "^c#f8f8f2^ | ";
static unsigned int delimLen = 15;
