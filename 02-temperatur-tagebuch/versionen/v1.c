#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    //Argument Check
    {
        printf("   Usage: ./temperatur stadt");
        return 1;
    }

    int days_count = 7;
    int wether_on_day[days_count];
    //eingabe der temperaturen
    for (int i = 0; i < days_count; i++)
    {
      wether_on_day[i] = get_int("Tag %d:",i + 1);

      if (wether_on_day[i] > 45 || wether_on_day[i] < -30)
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

    // durchschnitt
    float durchschnitt = 0.0;
    for (int j = 0; j < days_count; j++)
    {
        durchschnitt += wether_on_day[j];
    }
     durchschnitt /= days_count;
     printf("%.2f", durchschnitt);

     

}

