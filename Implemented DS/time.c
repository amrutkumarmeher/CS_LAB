// WAP to declare a struct time having members hours, minutes & seconds. input current time & display them.
#include <stdio.h>
#include <string.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
};
struct time StrToTim(char *s)
{
    struct time t;
    t.hours = ((((int)s[0]) - 48) * 10) + ((((int)s[1]) - 48) * 1);
    t.minutes = ((((int)s[3]) - 48) * 10) + ((((int)s[4]) - 48) * 1);
    t.seconds = ((((int)s[6]) - 48) * 10) + ((((int)s[7]) - 48) * 1);
    return t;
}
struct time addTime(char *a, char *b)
{
    struct time timeSum;
    timeSum.hours = ((((int)a[0]) - 48) * 10) + ((((int)a[1]) - 48) * 1) + ((((int)b[0]) - 48) * 10) + ((((int)b[1]) - 48) * 1);
    timeSum.minutes = ((((int)a[3]) - 48) * 10) + ((((int)a[4]) - 48) * 1) + ((((int)b[3]) - 48) * 10) + ((((int)b[4]) - 48) * 1);
    timeSum.seconds = ((((int)a[6]) - 48) * 10) + ((((int)a[7]) - 48) * 1) + ((((int)b[6]) - 48) * 10) + ((((int)b[7]) - 48) * 1);
    while (1)
    {
        if (timeSum.seconds < 60 && timeSum.minutes < 60 && timeSum.seconds < 60)
        {
            break;
        }
        if (timeSum.seconds >= 60)
        {
            timeSum.seconds = timeSum.seconds - 60;
            timeSum.minutes++;
        }
        if (timeSum.minutes >= 60)
        {
            timeSum.minutes = timeSum.minutes - 60;
            timeSum.hours++;
        }
    }

    printf("hrs: %d, mins: %d, sec: %d", timeSum.hours, timeSum.minutes, timeSum.seconds);
};

int main()
{
}