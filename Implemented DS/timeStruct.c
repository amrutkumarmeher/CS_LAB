// WAP to declare a struct time having members hours, minutes & seconds. input current time & display them.
#include <stdio.h>
#include <string.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
};
struct time rectify(struct time t)
{
    while (1)
    {
        if (t.seconds < 60 && t.minutes < 60)
        {
            break;
        }
        if (t.seconds >= 60)
        {
            t.seconds = t.seconds - 60;
            t.minutes++;
        }
        if (t.minutes >= 60)
        {
            t.minutes = t.minutes - 60;
            t.hours++;
        }
    }
    return t;
}
int StrToInt(char *s)
{
    strrev(s);
    int sum = 0;
    int i;
    int pwr = 1;
    for (i = 0; i < strlen(s); i++)
    {
        sum = (((int)s[i] - 48) * pwr) + sum;
        pwr = pwr * 10;
    }
    return sum;
}
struct time StrToTim(char *s)
{
    char hrs[100];
    int h = 0;
    char mins[100];
    int m = 0;
    char secs[100];
    int se = 0;
    char control = 'h';
    int i;

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9')
        {
            if (control == 'h')
            {
                control = 'm';
            }
            else if (control == 'm')
            {
                control = 's';
            }
            else
            {
                printf("\nInvalid format!\n");
                break;
            }
        }
        else if (control == 'h')
        {
            hrs[h] = s[i];
            h++;
        }
        else if (control == 'm')
        {
            mins[m] = s[i];
            m++;
        }
        else if (control == 's')
        {
            secs[se] = s[i];
            se++;
        }
        if (h == 0)
        {
            hrs[0] = '\0';
        }
        else
        {
            hrs[h + 1] = '\0';
        }
        if (m == 0)
        {
            mins[0] = '\0';
        }
        else
        {
            mins[m + 1] = '\0';
        }
        if (se == 0)
        {
            secs[0] = '\0';
        }
        else
        {
            secs[se + 1] = '\0';
        }
    }
    struct time t;
    t.hours = StrToInt(hrs);
    t.minutes = StrToInt(mins);
    t.seconds = StrToInt(secs);
    return rectify(t);
}
struct time addTime(char *a, char *b)
{
    struct time timeA = StrToTim(a);
    struct time timeB = StrToTim(b);
    struct time timeSum;
    timeSum.hours = timeA.hours + timeB.hours;
    timeSum.minutes = timeA.minutes + timeB.minutes;
    timeSum.seconds = timeA.seconds + timeB.seconds;
    return rectify(timeSum);
};

int main()
{
    char opn[]=" ";
    char time[300];
    char timeA[300];
    char timeB[300];
    struct time t;
    struct time tSum;
    while(1){
        printf("Choose your option\n[1]: Show time\n[2]: Add two times\n\n>: ");
        gets(opn);
        if(opn[0]=='1'){
            printf("Enter a time you wanna breakdown:\n");
            gets(time);
            t = StrToTim(time);
            printf("Hours: %d & Minutes: %d & Seconds: %d\n",t.hours,t.minutes,t.seconds);
        }
        else if (opn[0]=='2'){
            printf("Enter first timeing \n");
            gets(timeA);
            printf("Enter second timming \n");
            gets(timeB);
            tSum = addTime(timeA,timeB);
            printf("The sum is:- Hours: %d & Minutes: %d & Seconds: %d\n\n",tSum.hours,tSum.minutes,tSum.seconds);
        } else {
            printf("Choose a valid option!!!\n");
        }
    }
}