# SnakeGame

1. Denumirea proiectului:
SnakeGame

2. Ce reprezintă proiectul:
SnakeGame este o implementare clasică a jocului retro "Snake", în care jucătorul controlează un șarpe care trebuie să mănânce obiecte (de obicei sub formă de măr sau altă hrană) pentru a crește în lungime. Jocul se desfășoară pe un grid (grilă) și obiectivul este să crești șarpele cât mai mare posibil, fără să te lovești de pereți sau să te muști singur.

3. Regulile jocului Snake:
Jucătorul controlează direcția șarpelui (sus, jos, stânga, dreapta) folosind tastele direcționale.
Când șarpele mănâncă mâncare, acesta crește în lungime.
Jocul se termină dacă șarpele lovește pereții sau dacă se lovește de propriul corp.
Pe măsură ce șarpele mănâncă mâncare și crește, viteza jocului poate crește treptat, făcând jocul mai dificil.

4. Tipuri de date noi declarate și explicații:

. point.hpp:
Aceasta definește o structură de bază numită Point, care reprezintă coordonatele bidimensionale (x, y) ale oricărui obiect în spațiul de joc.

. snake.hpp:
Clasa Snake gestionează mișcarea șarpelui, mărimea și comportamentul acestuia. Clasa conține un array de Point pentru segmentele șarpelui, un contor pentru numărul de segmente (_nr_segments), și metode pentru mișcarea șarpelui și "mâncatul" unui măr.

. board.hpp:
Aceasta definește tabla de joc (Board), care are o lățime și o înălțime. Clasa oferă metode pentru a obține dimensiunile plăcii de joc.


