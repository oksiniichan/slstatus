const unsigned int interval = 1000;

static const char unknown_str[] = "n/a";

#define MAXLEN 2048

static const struct arg args[] = {
        /* function format          argument */
        // { datetime, "%s",           "%F %T" },
  { cpu_perc, " [   %s%% ]", NULL },
  { datetime, " [   %s", "%b %d %a ] [   %I:%M ]" },
  { run_command, " [   %s%]", "pamixer --get-volume" },
  { run_command, " [ 󰇺  %s% ]", "cat /sys/class/power_supply/BAT0/capacity" },	
};


