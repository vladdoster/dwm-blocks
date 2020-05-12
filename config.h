static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"pacpackages",			0,	8},
	{"",	"network_traffic",		1,	16},
	{"",	"battery | tr \'\n\' \' \'",	5,	3},
	{"",	"memory",			10,	14},
	{"",	"cpu",				10,	13},
	{"",	"internet_connection",		5,	4},
	{"",	"volume",			0,	10},
	{"",	"clock",			60,	1},
};

//sets delimeter
static char delim = '|';
