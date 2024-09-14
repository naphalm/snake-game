# SnakeGame

1. Denumirea proiectului:
SnakeGame

2. Ce reprezintă proiectul:
SnakeGame este o implementare clasică a jocului retro "Snake", în care jucătorul controlează un șarpe 

3.Regulile jocului Snake:Snake este un joc clasic în care jucătorul controlează un șarpe într-un spațiu limitat. Scopul jocului este ca șarpele să mănânce "mere" (sau alte obiecte) care apar în mod aleatoriu pe tablă. Cu fiecare măr mâncat, șarpele crește în lungime, iar jocul devine mai dificil deoarece șarpele nu trebuie să se lovească de pereți sau să se auto-colizioneze. Jocul continuă până când jucătorul face o greșeală, moment în care șarpele moare.

Funcția fișierelor board.hpp, snake.hpp, și point.hpp:

point.hpp:
Scop: Definește o structură de bază, Point, care reprezintă un punct în spațiu, cu coordonate x și y.Reprezintă locația pe tablă a șarpelui, a mărului sau a oricărui alt obiect.
Este folosit pentru a stoca poziții și pentru a gestiona mișcarea șarpelui în funcție de coordonate.

snake.hpp:
Scop: Reprezintă șarpele și comportamentul său.Stochează segmentul șarpelui într-un array de tip Point, fiecare element reprezentând o parte din corpul șarpelui.
Gestionează mișcarea șarpelui, creșterea acestuia atunci când mănâncă un măr și detectarea coliziunilor.

board.hpp:
Scop: Reprezintă tabla de joc (zona în care se mișcă șarpele și apar merele).Stochează dimensiunea tablei de joc (lățime și înălțime).
Gestionează desenarea tablei și a elementelor din interior (șarpele, merele, etc.).

