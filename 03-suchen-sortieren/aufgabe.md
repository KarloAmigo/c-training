# Aufgabe 03 – Suchen & Sortieren

> **Worum geht's?**
> Aufgabe 02 hast du komplett gelöst, inklusive Bonus! 🎉 Eigene Funktionen mit Arrays kannst du jetzt.
> Jetzt geht's an **Lecture 3**: Wir **suchen** in einem Array und **sortieren** es, mit genau den Algorithmen, die David in der Vorlesung zeigt.
> Neu dabei: **verschachtelte Schleifen** und eine Funktion, die ein Array **verändert**, statt nur etwas zurückzugeben.

Datei: **`sortieren.c`** (hier im Ordner)

---

## Spielregeln (wie immer)

1. Copilot bleibt **aus**.
2. **Erst planen:** Schritte als `// Kommentare` aufschreiben.
3. **Schritt für Schritt:** nach jedem Schritt kompilieren und testen.
4. **Vor „Fertig“:** Deine Ausgabe Zeile für Zeile mit dem Beispiel vergleichen. **Auch die Usage-Meldung!** 😉

---

## Stufe 1 – Einlesen & Linear Search

Diesmal ohne Kommandozeilen-Argument: `int main(void)`.

1. Frag nach der Anzahl (`Anzahl: `). Erlaubt sind **2 bis 10**, sonst wird erneut gefragt.
2. Frag die Zahlen ab (`Zahl 1: `, `Zahl 2: `, …) und speichere sie in einem Array. Alle ganzen Zahlen sind erlaubt.
3. Frag nach einer gesuchten Zahl (`Gesucht: `).
4. Schreib eine Funktion **`finde_position`**, die das Array, die Anzahl und die gesuchte Zahl bekommt und Folgendes **zurückgibt**:
   - den **Index**, an dem die Zahl **zum ersten Mal** vorkommt
   - **`-1`**, wenn die Zahl nicht im Array ist
5. `main` gibt dann aus (Position für Menschen gezählt, also ab **1**!):
   ```
   19 gefunden an Position 3
   ```
   oder
   ```
   5 nicht gefunden
   ```

## Stufe 2 – Bubble Sort

6. Schreib eine Funktion **`sortiere`**, die das Array **aufsteigend sortiert** (kleinste Zahl zuerst), mit **Bubble Sort** aus Lecture 3:
   Geh immer wieder durch das Array, vergleiche jeweils **zwei Nachbarn**, und wenn sie in der falschen Reihenfolge sind, **tausche** sie.
   - Die Funktion gibt **nichts** zurück (`void`). Sie verändert das Array direkt.
7. Schreib eine Funktion **`zeige`**, die das Array in einer Zeile ausgibt, die Zahlen durch Leerzeichen getrennt.
8. Gib nach der Suche aus: `Sortiert: ` gefolgt von den sortierten Zahlen.

> 💡 **Denkfrage vor dem Tippen:** Wie tauscht man die Werte von zwei Variablen? Probier es zuerst auf Papier mit zwei Gläsern Wasser 🥛🧃. Was brauchst du zusätzlich?

## Stufe 3 – Bonus: Binary Search

9. Schreib eine Funktion **`binaere_suche`**, die im **sortierten** Array mit Binary Search nach der gesuchten Zahl sucht und `true` oder `false` zurückgibt (`bool`, aus `cs50.h`).
10. Gib danach aus: `Binaere Suche: gefunden` oder `Binaere Suche: nicht gefunden`.
11. Schreib als Kommentar über die Funktionen `finde_position`, `sortiere` und `binaere_suche`, welche **Laufzeit (Big O)** sie haben.

---

## Beispiele

```
$ ./sortieren.exe
Anzahl: 1
Anzahl: 6
Zahl 1: 42
Zahl 2: 7
Zahl 3: 19
Zahl 4: 3
Zahl 5: 25
Zahl 6: 7
Gesucht: 19
19 gefunden an Position 3
Sortiert: 3 7 7 19 25 42
Binaere Suche: gefunden
```

```
$ ./sortieren.exe
Anzahl: 3
Zahl 1: 5
Zahl 2: -1
Zahl 3: 0
Gesucht: 4
4 nicht gefunden
Sortiert: -1 0 5
Binaere Suche: nicht gefunden
```

*(Die letzte Zeile kommt nur bei Stufe 3. Ein Leerzeichen am Ende der „Sortiert“-Zeile ist okay.)*

---

## Kompilieren & Testen

```bash
gcc sortieren.c -o sortieren.exe -lcs50
./sortieren.exe
```

> **Selbst testen:**
> - Die gesuchte Zahl steht **ganz vorne** / **ganz hinten** / **doppelt** im Array (welche Position muss kommen?)
> - Das Array ist **schon sortiert**, oder **genau falsch herum** sortiert (`5 4 3 2 1`)
> - Negative Zahlen, gleiche Zahlen
> - Nur 2 Zahlen

## Wenn du fertig bist

Schreib **„Fertig“** und dazu, **bitte diesmal wirklich** 🙏:
- Bis zu welcher Stufe bist du gekommen?
- Wie schwer war es? (1–5)
- Ungefähr wie lange hast du gebraucht?
- Hast du etwas nachgeschaut oder Hilfe benutzt? Was?
