# AISD_wskazniki_1_zrobione
Zadanie z Algorytmow i Struktur Danych
Wskaźniki 1
Napisz program, który wypisze co drugi znak wyrazu.

Zasady
W zadaniu należy wykorzystać wskaźniki, dlatego jedynymi dozwolonymi typami danych są char oraz char * (oraz ich tablice). Użycie w kodzie nazw innych typów jest niedozwolone. Dodatkowo, nie można korzystać z pliku nagłówkowego "string.h" ani "string". Nie można także korzystać z funkcji scanf, read, fread, getchar i fgetc - wejście należy czytać całymi liniami (funkcja fgets).

Wejście
Na wejście podane zostaną wyrazy do przetworzenia. Każdy z nich znajduje się w osobnej linii. Wyrazy mogą mieć co najwyżej 100000 znaków i składają się wyłącznie z liter i cyfr.

Wyjście
Na wyjście należy wypisać co drugi znak każdego wyrazu. Znaki z różnych wyrazów należy rozdzielić znakiem nowej linii, zaś znaki należące do tego samego wyrazu nie powinny być niczym rozdzielone.

Przykład
Wejście:
a
ab
abc
abcd
1234567

Wyjście:
a
a
ac
ac
1357
