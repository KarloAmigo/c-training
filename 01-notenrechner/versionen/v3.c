// Aufgabe 01 – Notenrechner
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./notenrechner\n");
        return 1;
    }
    
    int noten_anzahl = 0;

    do {
        printf("Anzahl Noten: ");
        scanf("%d", &noten_anzahl);
        
    }
    while (noten_anzahl <= 0 || noten_anzahl > 10);

   
   for (int i = 0; i < noten_anzahl; i++)
    {
        int note;
        scanf("Note %d: %d", &i, &note);
    }
}

