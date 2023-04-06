/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 5000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "---";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
    /* {netspeed_rx, "⏬%s", "wlp6s0"}, */
    /* {netspeed_tx, "🔀%s", "wlp6s0"}, */
    {run_command, "🎵%s", "mpc current"},
    {run_command, "🌡️%s", "sensors | awk '/^Tctl/ {print $2}'"},
    {cpu_perc, "💻%s"},
    /* {disk_perc, "💾%s", "/"}, */
    {run_command, "%s", "cat /tmp/wttr"},
    {run_command, "👾%s  ", "cat /tmp/ip"},
    {datetime, "🗓️%s", "%B %d %A %R"},
    {keymap, "⌨️ %s"}};
    /* {battery_perc, "🔋%s", "BAT0"}, */
    /* {wifi_essid, "📡%s", "wlp6s0"}, */
    /* {wifi_perc, "📶%s", "wlp6s0"}}; */
