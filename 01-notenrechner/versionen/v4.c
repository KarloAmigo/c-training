// Aufgabe 01 – Notenrechner
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, char *argv[])
{
    // Überprüfen, ob genau ein Argument übergeben wurde
    if (argc != 2)
    {
        printf("Exit-Status 1:\n");
        return 1;
    }
    
    int noten_anzahl = 0;
    // Schleife, um die Anzahl der Noten zu erhalten und sicherzustellen, dass sie zwischen 1 und 10 liegt
    do {
        noten_anzahl = get_int("Geben Sie die Anzahl der Noten ein (1-10): ");
    }
    while (noten_anzahl <= 0 || noten_anzahl > 10);

   // Schleife, um die Noten zu erhalten und sicherzustellen, dass sie zwischen 1 und 6 liegen
   for (int i = 0; i < noten_anzahl; i++)
    {
        int note;
        note = get_int("Note %d: ", i + 1);
        if (note < 1 || note > 6)
        {
            printf("Ungültige Note. Bitte geben Sie eine Note zwischen 1 und 6 ein.\n");
            i--; // Wiederhole die Eingabe für diese Note
            continue;
        }

    }

    
}

