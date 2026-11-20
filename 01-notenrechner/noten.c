// Aufgabe 01 – Notenrechner
#include <stdio.h>
#include <string.h>
#include <cs50.h>

float durchschnitt(int noten[], int noten_anzahl);
int beste_note(int noten[], int noten_anzahl);
int schlechteste_note(int noten[], int noten_anzahl);
void balkendiagramm(int noten[], int noten_anzahl);

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
        noten[i] = get_int("Note %d: ", i + 1);
        if (noten[i] < 1 || noten[i] > 6)
        {
            i--; // Wiederhole die Eingabe für diese Note
        }

    }
    // Print des Durchschnitts
    printf("\nDurchschnitt: %.2f\n", durchschnitt(noten, noten_anzahl));
    //Print der Besten Note
    printf("Beste Note: %d\n", beste_note(noten, noten_anzahl));
    //Print der Schlechtesten Note
    printf("Schlechteste Note: %d\n", schlechteste_note(noten, noten_anzahl));

    balkendiagramm(noten, noten_anzahl);

    return 0;
}

float durchschnitt(int noten[], int noten_anzahl)
{
    float durchschnitt = 0.0;
    
    for (int i = 0; i < noten_anzahl; i++)
    {
        durchschnitt += noten[i];
    }
    durchschnitt /= noten_anzahl;
   
   return durchschnitt;
}

int beste_note(int noten[], int noten_anzahl)
{
    int beste_itm = 6; //itm = in the moment
    for (int i = 0; i < noten_anzahl; i++)
    {
        if (noten[i] < beste_itm)
        {
            beste_itm = noten[i];
        }
    }
    return beste_itm;
}

int schlechteste_note(int noten[], int noten_anzahl)
{
    int schlechteste_itm = 1;
    for (int i = 0; i < noten_anzahl; i++)
    {
        if (noten[i] > schlechteste_itm)
        {
            schlechteste_itm = noten[i];
        }
    }
    return schlechteste_itm;
}

void balkendiagramm(int noten[], int noten_anzahl)
{
    printf("\n");
    // Für jede mögliche Note von 1 bis 6 eine Zeile ausgeben
    for (int note = 1; note <= 6; note++)
    {
        printf("%d: ", note);
        // Für jedes Vorkommen dieser Note ein # ausgeben
        for (int i = 0; i < noten_anzahl; i++)
        {
            if (noten[i] == note)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}

