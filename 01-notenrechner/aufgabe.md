# Aufgabe 01 – Notenrechner (Einstufung)

> **Worum geht's?**
> Diese erste Aufgabe ist ein **Einstufungstest**. Sie mischt Themen aus Lecture 1–3, damit ich sehe, was schon sitzt.
> Es ist **völlig okay**, wenn nicht alles klappt. Genau das will ich ja herausfinden.
> Versuch es zuerst **ohne** in deine Notizen zu schauen. Wenn du doch nachschaust: kein Problem, sag es mir nur bei „Fertig“.

Datei: **`noten.c`** (hier im Ordner)

---

## Stufe 1 – Pflicht

Schreib ein Programm, das Schulnoten (1 bis 6) für ein Fach einliest und den Durchschnitt ausgibt.

1. Das Programm wird mit **genau einem** Argument aufgerufen: dem Namen des Fachs.
   ```
   ./noten.exe mathe
   ```
   Wird es mit falscher Anzahl an Argumenten aufgerufen, gibt es diesen Satz aus und beendet sich mit Exit-Status **1**:
   ```
   Usage: ./noten fach
   ```
2. Frag nach der **Anzahl der Noten** (`Anzahl Noten: `). Erlaubt sind **1 bis 10**. Bei allem anderen wird erneut gefragt.
3. Frag jede Note einzeln ab (`Note 1: `, `Note 2: `, …). Erlaubt sind **1 bis 6**. Bei einer ungültigen Note wird **dieselbe** Note erneut abgefragt.
4. Gib danach eine Leerzeile, den **Fachnamen in GROSSBUCHSTABEN** und den **Durchschnitt mit 2 Nachkommastellen** aus.

## Stufe 2 – Funktionen

5. Berechne den Durchschnitt in einer **eigenen Funktion**, die das Array und die Anzahl bekommt und den Durchschnitt zurückgibt.
6. Gib zusätzlich die **beste** und die **schlechteste** Note aus.
   ⚠️ Achtung: In Deutschland ist **1** die **beste** Note!

## Stufe 3 – Bonus

7. Gib am Ende ein kleines **Balkendiagramm** aus: Für jede Note von 1 bis 6 eine Zeile mit so vielen `#`, wie oft diese Note vorkommt.

---

## Beispiel

```
$ ./noten.exe mathe
Anzahl Noten: 12
Anzahl Noten: 4
Note 1: 2
Note 2: 7
Note 2: 3
Note 3: 1
Note 4: 3

MATHE
Durchschnitt: 2.25
Beste Note: 1
Schlechteste Note: 3

1: #
2: #
3: ##
4:
5:
6:
```

```
$ ./noten.exe
Usage: ./noten fach
```

---

## Kompilieren & Testen

```bash
gcc noten.c -o noten.exe -lcs50
./noten.exe mathe
```

> **Tipp: Selbst testen, bevor du „Prüf mal“ sagst**
> Überleg dir, welche Eingaben dein Programm **kaputt machen** könnten: zu viele Argumente? Eine Note `0`? Nur eine einzige Note? Ein Durchschnitt wie `7 / 3`?
