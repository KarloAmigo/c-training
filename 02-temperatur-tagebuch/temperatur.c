#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

float durchschnitt(int weather_on_day[], int days_count);
int highes_point(int weather_on_day[], int days_count);
int lowest_point(int weather_on_day[], int days_count);
int frosting(int weather_on_day[], int days_count);

int main(int argc, string argv[])
{
    if (argc != 2)
    //Argument Check
    {
        printf("Usage: ./temperatur stadt");
        return 1;
    }

    int days_count = 7;
    int weather_on_day[days_count];
    //eingabe der temperaturen
    for (int i = 0; i < days_count; i++)
    {
      weather_on_day[i] = get_int("Tag %d: ",i + 1);

      if (weather_on_day[i] > 45 || weather_on_day[i] < -30)
      {
        i--;
      }
    }
   

    //printout
    printf("\n");
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        printf("%c", toupper(argv[1][i]));
    }
    printf("\n");

    //print durchschnitt
    printf("Durchschnitt: %.1f\n",  durchschnitt(weather_on_day, days_count));
    //print höchste temperature
    printf("Hoechste: %d\n",highes_point(weather_on_day, days_count));
    //print Lowest Temperature
    printf("Tiefste: %d\n", lowest_point(weather_on_day, days_count));
    //printing frosting days
    printf("Frosttage: %d\n",frosting(weather_on_day,days_count));


}

float durchschnitt(int weather_on_day[], int days_count)
{
    float durchschnitt_rechner = 0.0;
    for (int i = 0; i < days_count; i++)
    {
        durchschnitt_rechner += weather_on_day[i];
    }
    durchschnitt_rechner /= days_count;
    return durchschnitt_rechner;
}

int highes_point(int weather_on_day[], int days_count)
{
    int highest_temp = -30;
    for (int i = 0; i < days_count; i++)
    {
       if (weather_on_day[i] > highest_temp)
       {
        highest_temp = weather_on_day[i];
       }
    }
    return highest_temp;
}

int lowest_point(int weather_on_day[], int  days_count)
{
    int lowest_temp = 45;
    for (int i = 0; i < days_count; i++)
    {
        if (weather_on_day[i] < lowest_temp)
        {
            lowest_temp = weather_on_day[i];
        }
    }
    return lowest_temp;
}

int frosting(int weather_on_day[], int days_count)
{
    int frosting_days = 0;
    for (int i = 0; i < days_count; i++)
    {
        if (weather_on_day[i] < 0)
        {
        frosting_days++;
        }
    }
    return frosting_days;
}