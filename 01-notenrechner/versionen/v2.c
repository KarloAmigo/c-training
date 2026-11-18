// Aufgabe 01 – Notenrechner
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 1)
    {
        return 1;
    }
    
    int noten_anzahl = 1;

   for (int i = 0; i < noten_anzahl; i++)
   {
    printf("Anzahl Noten: ");
    scanf("%d", &noten_anzahl);
   
    if (noten_anzahl > 10 || noten_anzahl <= 0)
    {
        printf("Ungültige Anzahl an Noten. Bitte geben Sie eine positive Zahl ein.\n");
        return 1;
    }
    
   }
    
   
   for (int i = 0; i < noten_anzahl; i++)
    {
        int note;
        scanf("Note %d: %d", &i, &note);
    }
}

