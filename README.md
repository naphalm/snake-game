<body >
<ol>
       
 <li> Denumirea proiectului: </li>
SnakeGame

 <li>Ce reprezintă proiectul: </li>
SnakeGame este o implementare clasică a jocului retro "Snake", în care jucătorul controlează un șarpe 

 <li>Regulile jocului Snake:Snake este un joc clasic în care jucătorul controlează un șarpe într-un spațiu limitat. Scopul jocului este ca șarpele să mănânce "mere" (sau alte obiecte) care apar în mod aleatoriu pe tablă. Cu fiecare măr mâncat, șarpele crește în lungime, iar jocul devine mai dificil deoarece șarpele nu trebuie să se lovească de pereți sau să se auto-colizioneze. Jocul continuă până când jucătorul face o greșeală, moment în care șarpele moare. </li>

 </ol>
Funcția fișierelor board.hpp, snake.hpp, și point.hpp:
<body >
    <ol>
 <li>point.hpp: </li>
           <ul>
<li> Scop: Definește o structură de bază, Point, care reprezintă un punct în spațiu, cu coordonate x și y.Reprezintă locația pe tablă a șarpelui, a mărului sau a oricărui alt obiect.
Este folosit pentru a stoca poziții și pentru a gestiona mișcarea șarpelui în funcție de coordonate.</il>
           </ul>
            <ul>
<li> Structura Point: Această structură reprezintă o pereche de coordonate (x, y), folosite pentru a specifica poziția în spațiul bidimensional al tablei de joc.</il>
<li>Constructor implicit: Inițializează coordonatele x și y la valoarea 0.</il>
<li>Constructor cu parametri: Permite inițializarea unui punct cu valori specifice pentru x și y.</il>
</ul>
           

          
<li>snake.hpp: </li>
           <ul>
<li>Scop: Reprezintă șarpele și comportamentul său.Stochează segmentul șarpelui într-un array de tip Point, fiecare element reprezentând o parte din corpul șarpelui.
Gestionează mișcarea șarpelui, creșterea acestuia atunci când mănâncă un măr și detectarea coliziunilor.
</ul>
<ul>
<li>Clasa Snake: Această clasă gestionează comportamentul șarpelui în joc, incluzând poziția segmentelor și mișcarea.</il>
<li>segments[100]: Un array de 100 de segmente, fiecare reprezentat printr-un Point. Segmentele definesc pozițiile pe care le ocupă șarpele pe tablă.</il>
<li>length: Reține lungimea actuală a șarpelui, adică numărul de segmente active.</il>
<li>Constructorul Snake: Inițializează șarpele cu un singur segment plasat la o poziție fixă (de exemplu, coordonatele (10, 10)).</il>
<li>Move(Point direction): Mișcă șarpele într-o direcție specificată (ex.: stânga, dreapta, sus, jos) prin actualizarea poziției fiecărui segment, astfel încât capul șarpelui să fie mutat în direcția indicată, iar celelalte segmente să urmeze.</il>
<li>Grow(): Crește lungimea șarpelui adăugând un segment suplimentar la coadă, copiat din ultima poziție cunoscută a cozii.</il>
<li>GetHeadPosition(): Returnează poziția capului șarpelui (segmentul de la indexul 0 din array-ul segments).</il>
</ul>




 <li>board.hpp: </li>
 <ul>
<li>Scop: Reprezintă tabla de joc (zona în care se mișcă șarpele și apar merele).Stochează dimensiunea tablei de joc (lățime și înălțime).
Gestionează desenarea tablei și a elementelor din interior (șarpele, merele, etc.).</li>
 </ul>
 <ul>
<li> Clasa Board: Reprezintă tabla de joc pe care se desfășoară acțiunea jocului.</li>
<li>width și height: Variabile care definesc dimensiunile tablei (lățime și înălțime).</li>
<li>Constructorul Board: Inițializează tabla de joc cu dimensiunile specificate (de exemplu, o tablă de 20x20 sau alte dimensiuni definite de utilizator).</li>
<li>GetWidth(): Returnează lățimea tablei, util pentru a stabili limitele mișcării șarpelui.</li>
<li>GetHeight(): Returnează înălțimea tablei, similar cu lățimea, folosit pentru a verifica limitele superioare și inferioare ale tablei.</li>
</ul>
</ol>
</body>
