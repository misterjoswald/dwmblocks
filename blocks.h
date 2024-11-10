//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
 	{" ", "curl -s 'https://api.binance.com/api/v1/ticker/price?symbol=BTCUSDT' | cut -d: -f3 | sed 's/\"//g; s/}//g' | awk '{print int($1+0.5)}'", 600, 0},
	{" ", "df -h  /dev/nvme0n1p3 --output=used | grep G | awk '{ print $1 }'", 600, 0},
	{" ", "echo \"$(cat /proc/acpi/ibm/thermal| awk '{print $2}')C\"", 30, 0},
	{" ", "echo \"$(top -b -n1 | grep 'Cpu(s)' | awk '{print $2 + $4}')%\"", 30, 0},
	{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{" ", "echo \"$(cat /sys/class/power_supply/BAT0/capacity)%\"",          15,             0},
	{"", "curl -s 'wttr.in/Petersburg?format='%t+%f+%m+%M''", 300, 0},
	{"", "xset -q|grep LED| awk '{ if (substr ($10,5,1) == 1) print \"Z\"; else print \"\"; }'", 0, 1},
	{"", "date '+%a %d %b %R'",				        	60,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;




