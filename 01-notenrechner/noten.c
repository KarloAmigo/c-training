// Aufgabe 01 – Notenrechner
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // Überprüfen, ob genau ein Argument übergeben wurde
    if (argc != 2)
    {
        printf("Usage: ./noten fach\n");
        return 1;
    }
    
    int noten_anzahl = 0;
    // Schleife, um die Anzahl der Noten zu erhalten und sicherzustellen, dass sie zwischen 1 und 10 liegt
    do {
        noten_anzahl = get_int("Anzahl Noten: ");
    }
    while (noten_anzahl <= 0 || noten_anzahl > 10);

   // Schleife, um die Noten zu erhalten und sicherzustellen, dass sie zwischen 1 und 6 liegen
   int noten[noten_anzahl];
   for (int i = 0; i < noten_anzahl; i++)
    {
        noten[i] = get_int("Noten %d: ", i + 1);
        if (noten[i] < 1 || noten[i] > 6)
        {
            i--; // Wiederhole die Eingabe für diese Note
        }

    }
    // Berechnung des Durchschnitts
float durchschnitt = 0.0;
   for (int i = 0; i < noten_anzahl; i++)
   {
        durchschnitt += noten[i];
   }
   durchschnitt /= noten_anzahl;

    printf("\n%s Durchschnitt: %.2f\n", argv[1]+32, durchschnitt);
    return 0;

}

