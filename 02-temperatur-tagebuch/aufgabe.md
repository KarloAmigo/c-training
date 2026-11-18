# Aufgabe 02 – Temperatur-Tagebuch

> **Worum geht's?**
> In Aufgabe 01 hast du schon viel geschafft: `do-while`, `get_int`, ein Array und einen richtigen Durchschnitt. 👍
> Jetzt üben wir genau die Teile, die dort noch gefehlt haben:
> **`argv[1]` wirklich benutzen**, **eigene Funktionen mit Arrays** und **Ausgabe exakt nach Vorgabe**.

Datei: **`temperatur.c`** (hier im Ordner)

---

## ⚠️ Spielregeln für diese Aufgabe

1. **Copilot ausschalten** (unten rechts in VS Code auf das Copilot-Symbol → Vorschläge deaktivieren).
2. **Erst planen:** Schreib die Schritte zuerst als `// Kommentare` in die Datei, *bevor* du Code tippst.
3. **Schritt für Schritt:** Nach jedem Schritt kompilieren und ausprobieren.
4. **Vor „Fertig“:** Lass dein Programm mit den Eingaben aus dem Beispiel laufen und vergleich **Zeile für Zeile** mit dem Beispiel unten.

---

## Stufe 1 – Pflicht

Ein Programm, das eine Woche lang Temperaturen für eine Stadt einliest.

1. Aufruf mit **genau einem** Argument, dem Namen der Stadt:
   ```
   ./temperatur.exe hamburg
   ```
   Bei falscher Anzahl gibt es diesen Satz aus und beendet sich mit Exit-Status **1**:
   ```
   Usage: ./temperatur stadt
   ```
2. Frag **7** Temperaturen ab (`Tag 1: `, `Tag 2: `, …, `Tag 7: `) und speichere sie in einem Array.
   Erlaubt sind ganze Zahlen von **-30 bis 45**. Bei einem ungültigen Wert wird **derselbe** Tag erneut abgefragt (ohne extra Meldung).
3. Gib danach aus:
   - eine **Leerzeile**
   - den **Stadtnamen in GROSSBUCHSTABEN**, Zeichen für Zeichen mit `toupper` (aus `ctype.h`)
   - den **Durchschnitt mit 1 Nachkommastelle**
   - die **höchste** und die **tiefste** Temperatur

## Stufe 2 – Funktionen (diesmal Pflicht!)

4. Diese drei Berechnungen machst du in **eigenen Funktionen**. Jede bekommt das Array und die Anzahl:
   - `durchschnitt(...)` gibt einen `float` zurück
   - `hoechste(...)` gibt einen `int` zurück
   - `tiefste(...)` gibt einen `int` zurück
5. Die **Prototypen** stehen oben über `main`, die Funktionen selbst unter `main`.
6. `main` soll die Funktionen nur **aufrufen** und die Ergebnisse ausgeben. Rechnen tut `main` selbst nichts.

## Stufe 3 – Bonus

7. Eine vierte Funktion `frosttage(...)` zählt, an wie vielen Tagen es **unter 0** Grad war. Gib das Ergebnis mit aus.

---

## Beispiel

```
$ ./temperatur.exe hamburg
Tag 1: 12
Tag 2: 15
Tag 3: -2
Tag 4: 8
Tag 5: 50
Tag 5: 10
Tag 6: 9
Tag 7: 11

HAMBURG
Durchschnitt: 9.0
Hoechste: 15
Tiefste: -2
Frosttage: 1
```

```
$ ./temperatur.exe
Usage: ./temperatur stadt
```

*(Die Zeile `Frosttage` kommt nur, wenn du Stufe 3 machst.)*

---

## Kompilieren & Testen

```bash
gcc temperatur.c -o temperatur.exe -lcs50
./temperatur.exe hamburg
```

> **Selbst testen, bevor du „Prüf mal“ sagst:**
> - Alle drei Aufrufe: ohne Argument, mit einem, mit zwei Argumenten (und danach `echo $?`)
> - Die Grenzen: `-30` und `45` müssen gehen, `-31` und `46` nicht
> - Alle Tage gleich warm? Alle Tage unter 0?
> - Ein Stadtname, der schon Großbuchstaben hat, zum Beispiel `NewYork`

## Wenn du fertig bist

Schreib im Chat **„Fertig“** und dazu (**diesmal bitte nicht vergessen** 😉):
- Bis zu welcher Stufe bist du gekommen?
- Wie schwer war es? (1–5)
- Ungefähr wie lange hast du gebraucht?
- Hast du etwas nachgeschaut oder Hilfe benutzt? Was?
