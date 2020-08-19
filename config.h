/*
 * Author: Vlad Doster <mvdoster@gmail.com>
 * Date: 2020-07-02 10:53:04
 * Last Modified by: Vlad Doster <mvdoster@gmail.com>
 * Last Modified time: 2020-07-02 11:06:15
 */

static char delim = '|';
static const Block blocks[] = {
/*icon,         command,                   interval   signal*/
  {"", "cat /tmp/recordingicon 2>/dev/null",  0,        9},
  {"", "upgradeable_pkgs",                    0,        8},
  {"", "network_usage",                       1,       16},
//  {"", "internet_connection",                 5,        4},
  {"", "ram_usage",                           10,      14},
  {"", "cpu_temperature",                     10,      13},
  {"", "cpu_per_core_usage",                  2,       13},
  {"", "battery | tr \'\n\' \' \'",           5,        3},
 // {"", "volume",                              0,       10},
  {"", "clock",                               60,       1},
};

