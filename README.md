<body >
<ol>
       
 <li><b> Denumirea proiectului</b>: </li>
SnakeGame

 <li><b>Ce reprezintă proiectul</b>: </li>
SnakeGame este o implementare clasică a jocului retro "Snake", în care jucătorul controlează un șarpe 

 <li><b>Regulile jocului Snake</b>:Snake este un joc clasic în care jucătorul controlează un șarpe într-un spațiu limitat. Scopul jocului este ca șarpele să mănânce "mere" (sau alte obiecte) care apar în mod aleatoriu pe tablă. Cu fiecare măr mâncat, șarpele crește în lungime, iar jocul devine mai dificil deoarece șarpele nu trebuie să se lovească de pereți sau să se auto-colizioneze. Jocul continuă până când jucătorul face o greșeală, moment în care șarpele moare. </li>

 </ol>
<b>Funcția fișierelor board.hpp, board.cpp, snake.cpp, snake.hpp, point.hpp, point.cpp, .gitignore, MakeFile, abstract_painter.hpp, painter.cpp, si painter.hpp</b>:
<body >
    <ol>       
<li><b>snake.hpp:</b> </li>
     <ul>     
            
<b>Clasa Snake:</b> 
     <li>  Reprezintă o structură care conține două coordonate întregi: x și y, folosită pentru a reprezenta un punct în plan bidimensional.</li>
</ul>
<ul>
     
<b>Atribute:</b>
       <li>Point segments[100] - Reprezintă segmentele corpului șarpelui, fiecare fiind un obiect Point cu coordonatele x și y.</il>
     <li> int length - Reprezintă lungimea curentă a șarpelui, adică câte segmente are acesta</il>

<b>Constructor:</b> 
       <li>Snake() - Constructor implicit care inițializează șarpele cu lungimea de 1 și poziționează primul segment la coordonatele (10, 10).</il>
          
<b>Metode:</b>
       <li>void Move(Point direction) - Metodă pentru mutarea șarpelui. Fiecare segment preia poziția segmentului anterior, iar primul segment (capul) se deplasează într-o anumită direcție specificată de un obiect Point.</il>
       <li> void Grow() - Metodă pentru creșterea șarpelui. Adaugă un segment nou la finalul șarpelui, dacă lungimea este mai mică de 100.</il>
        <li> Point GetHeadPosition() const - Metodă care returnează poziția capului șarpelui (primul segment) sub formă de obiect Point.</il>
           
</ul>





<li><b>snake.cpp:</b> </li>
     <ul>     
            
<b>Constructorul Snake:</b> 
     <li>  Inițializează lungimea șarpelui la 1 și setează poziția primului segment (capul) la coordonatele (10, 10).</li>
</ul>
<ul>
     
<b>Metoda Move.Pentru mutarea șarpelui, metoda face următoarele:</b>
       <li>Actualizează fiecare segment, mutându-l la poziția segmentului anterior (de la coadă spre cap).</il>
     <li>Modifică coordonatele capului (primul segment) conform direcției primite ca parametru, adăugând valorile lui x și y din obiectul Point corespunzător direcției.</il>

<b>Metoda Grow:</b> 
       <li>Dacă lungimea șarpelui este mai mică de 100, adaugă un nou segment la finalul șarpelui, cu aceeași poziție ca ultimul segment existent (în esență, lărgirea șarpelui fără mișcarea lui imediată).</il>
          
<b>Metoda GetHeadPosition:</b>
       <li>Returnează poziția capului șarpelui (primul segment) ca un obiect Point.</il>
</ul>





<li><b>painter.hpp și painter.cpp:</b> </li>
     <ul>     
            
<b>Clasa Painter:</b> 
     <li>  Moștenește clasa AbstractPainter și implementează funcționalitatea pentru desenarea imaginilor și afișarea textului.</li>
</ul>
<ul>
     
<b>Metodele Painter:</b>
       <li>void DrawImage(Point topLeft, Point bottomRight, char** image):Desenează o imagine între punctele topLeft (stânga-sus) și bottomRight (dreapta-jos). Imaginea este reprezentată de un tablou bidimensional de caractere.</il>
     <li>void WriteText(Point position, char* text):Afișează un text la coordonatele specificate de obiectul Point position.</il>
</ul>





<li><b>abstract_painter.hpp:</b> </li>
     <ul>     
            
<b>Clasa AbstractPainter:</b> 
     <li>  Este o clasă abstractă ce definește interfața pentru clasele care vor implementa funcționalități de desenare și scriere.</li>
</ul>
<ul>
     
<b>Metode abstracte (pure virtuale):</b>
       <li>virtual void DrawImage(Point topLeft, Point bottomRight, char** image) = 0 - O metodă care va fi implementată de clasele derivate, responsabilă pentru desenarea unei imagini într-o regiune definită de punctele topLeft și bottomRight.</il>
     <li>virtual void WriteText(Point position, char* text) = 0 - O metodă care va fi implementată pentru a scrie un text la coordonatele specificate de position.</il>
     <li>Aceasta este o interfață care obligă orice clasă derivată să implementeze aceste două metode.</li>
</ul>





<li><b>abstract_painter.hpp:</b> </li>
     <ul>     
            
<b>Clasa AbstractPainter:</b> 
     <li>  Este o clasă abstractă ce definește interfața pentru clasele care vor implementa funcționalități de desenare și scriere.</li>
</ul>
<ul>
     
<b>Metode abstracte (pure virtuale):</b>
       <li>virtual void DrawImage(Point topLeft, Point bottomRight, char** image) = 0 - O metodă care va fi implementată de clasele derivate, responsabilă pentru desenarea unei imagini într-o regiune definită de punctele topLeft și bottomRight.</il>
     <li>virtual void WriteText(Point position, char* text) = 0 - O metodă care va fi implementată pentru a scrie un text la coordonatele specificate de position.</il>
     <li>Aceasta este o interfață care obligă orice clasă derivată să implementeze aceste două metode.</li>

</ul>




<li><b>.gitignore:</b> </li>
           <ul>
<li><b>CXX:</b>: definește compilatorul folosit, în acest caz g++.</li>
</ul>
<ul>
<li><b>CXXFLAGS:</b>: definește opțiunile de compilare, cum ar fi -Wall (pentru a afișa toate avertismentele) și -std=c++17 (pentru a folosi standardul C++17).</il>
<li><b>EXEC:</b>: numele fișierului executabil rezultat.</il>
<li><b>SRC:</b>: fișierele sursă .cpp care trebuie compilate. Trebuie să adăugați un fișier main.cpp, care va conține punctul de intrare (funcția main).</il>
<li><b>OBJ:</b>: fișierele obiect rezultate din compilarea fișierelor sursă.</il>
<li><b>all:</b>: regula implicită care creează programul final prin legarea fișierelor obiect.</il>
<li><b>Grow</b>: Crește lungimea șarpelui adăugând un segment suplimentar la coadă, copiat din ultima poziție cunoscută a cozii.</il>
<li><b>clean:</b>: o regulă pentru a șterge fișierele obiect și executabilul.</il>
</ul>




<li><b>point.hpp:</b> </li>
     <ul>     
            
<b>Structura Point:</b> 
     <li>  Reprezintă o structură care conține două coordonate întregi: x și y, folosită pentru a reprezenta un punct în plan bidimensional.</li>
</ul>
<ul>
     
<b>Constructori:</b>
       <li>Point(int _x = 0, int _y = 0) - Constructor implicit care inițializează punctul la valorile (0, 0) sau la valorile date de parametrii _x și _y.</il>
     <li>  Point(const Point& other) - Constructor de copiere care inițializează un punct prin copierea valorilor unui alt punct</il>

<b>Operatori:</b> 
       <li>operator= - Suprascrie operatorul de atribuire (=) pentru a copia valorile de la un alt obiect Point.</il>
       <li>  operator== - Suprascrie operatorul de comparație (==) pentru a verifica dacă două puncte sunt egale (au aceleași valori ale coordonatelor x și y).</il>
          
<b>Operatori de intrare și ieșire:</b>
       <li>operator>> - Suprascrie operatorul de citire din flux (>>) pentru a citi valorile coordonatelor x și y dintr-un flux de intrare (cum ar fi un fișier sau tastatura).</il>
       <li> operator<< - Suprascrie operatorul de afișare în flux (<<) pentru a afișa coordonatele unui punct într-un flux de ieșire (cum ar fi consola).</il>
           
</ul>





<li><b>point.cpp:</b> </li>
     <ul>     
            
<b>Constructori:</b>
       <li>Point(int _x, int _y) - Inițializează obiectul Point cu valorile primite pentru coordonatele x și y.</il>
     <li>  Point(const Point& other) - Copiază valorile coordonatelor x și y dintr-un alt obiect Point.</il>
</ul>
<ul>
     
<b>Operatori:</b>
       <li>operator= - Copiază valorile coordonatelor dintr-un alt obiect Point. Returnează referința la obiectul curent pentru a permite atribuirea în lanț (e.g., p1 = p2 = p3).</il>
     <li>  operator== - Compară coordonatele x și y ale obiectului curent cu cele ale unui alt punct. Returnează true dacă ambele coordonate sunt egale.</il>

<b>Operatori de flux:</b> 
       <li>operator>> - Permite citirea coordonatelor unui punct dintr-un flux de intrare, atribuind valorile respective obiectului Point.</il>
       <li>  operator<< - Afișează coordonatele unui punct într-un flux de ieșire.</il>       
</ul>





<li><b>board.hpp:</b> </li>
     <ul>     
            
<b>Clasa Board:</b>
       <li>Reprezintă o tablă de joc cu două dimensiuni, width (lățime) și height (înălțime).</il>
</ul>
<ul>
     
<b>Constructori:</b>
       <li>Board(int width = 20, int height = 20) - Inițializează obiectul cu lățimea și înălțimea specificată sau cu valorile implicite (20x20).</il>
     <li> Board(const Board& other) - Constructor de copiere, copiază dimensiunile unui alt obiect Board.</il>

<b>Metode:</b> 
       <li>GetWidth() - Returnează lățimea tabloului.</il>
       <li> GetHeight() - Returnează înălțimea tabloului.</il>     

 <b>Operatori:</b> 
        <li>operator= - Suprascrie operatorul de atribuire pentru a copia dimensiunile unui alt obiect Board.</il>
       <li> operator== - Compară dimensiunile a două obiecte Board pentru a verifica dacă sunt egale.</il>  
       
<b>Operatori de flux:</b> 
        <li>operator>> - Citirea lățimii și înălțimii tabloului dintr-un flux de intrare.</il>
       <li> operator<< - Afișarea lățimii și înălțimii tabloului într-un flux de ieșire.</il>    
</ul>





<li><b>board.cpp:</b> </li>
     <ul>     
            
<b>Constructori:</b>
       <li>Board(int width, int height) - Inițializează obiectul Board cu valorile primite pentru lățime și înălțime.</il>
     <li>  Board(const Board& other) - Copiază dimensiunile unui alt obiect Board.</li>
</ul>
<ul>
     
<b>Metode:</b>
       <li>GetWidth() - Returnează lățimea tabloului.</il>
     <li> GetHeight() - Returnează înălțimea tabloului.</il>

<b>Operatori:</b> 
       <li>operator= - Copiază lățimea și înălțimea unui alt obiect Board. Returnează referința la obiectul curent pentru a permite atribuirea în lanț.</il>
       <li> operator== - Compară lățimea și înălțimea a două obiecte Board. Returnează true dacă dimensiunile sunt egale.</il>     

 <b>Operatori de flux:</b> 
        <li>operator>> - Citirea dimensiunilor tabloului dintr-un flux de intrare.</il>
       <li> operator<< - Afișarea dimensiunilor tabloului într-un flux de ieșire.</il>      
</ul>





<li>abstract_painter.hpp:</b> </li>
           <ul>
                  
<b>Clasa AbstractPainter:</b> 
       <li>Este o clasă abstractă care definește interfața pentru clasele care vor fi utilizate pentru desenarea imaginii și scrierea textului.</li>
</ul>





<li>painter.hpp:</b> </li>
           <ul>
                  
<b>Clasa Painter:</b> 
       <li>Moștenește clasa AbstractPainter și implementează funcționalitățile de desenare a imaginii și scrierea textului.</li>
       
<b>Metode:</b> 
       <li>DrawImage(Point topLeft, Point bottomRight, char** image) - Desenează o imagine definită de un tablou bidimensional image între punctele topLeft și bottomRight.</li>
        <li>WriteText(Point position, char* text) - Afișează textul în poziția specificată de Point.</li>
</ul>





<li>painter.cpp:</b> </li>
           <ul>
                  
<b>Metoda DrawImage:</b> 
       <li>Primește două puncte, topLeft (colțul stânga-sus) și bottomRight (colțul dreapta-jos), precum și un tablou bidimensional de caractere care reprezintă imaginea. Afișează în consola coordonatele imaginii.</li>
                  
<b>Metoda WriteText:</b> 
       <li>Primește un punct și un text. Afișează textul la coordonatele specificate de punctul position.</li>
</ul>





<li>Makefile:</b> </li>
           <ul>
                  
<b>CXX și CXXFLAGS:</b> 
       <li>CXX = g++ definește compilatorul utilizat.</li>
        <li> CXXFLAGS = -Wall -Wextra -std=c++17 specifică opțiunile de compilare, inclusiv afișarea avertismentelor și utilizarea standardului C++17.</li>
        
<b>SRC și OBJ:</b> 
       <li>SRC = point.cpp board.cpp painter.cpp definește fișierele sursă din proiect. </li>        
       <li>OBJ = $(SRC:.cpp=.o) generează numele fișierelor obiect..</li>
       
 <b>all:</b>     
     <li>Regula implicită care compilează proiectul.</li>    
     
 <b>clean:</b>     
     <li>Regula pentru ștergerea fișierelor obiect și executabilului.</li>                 
</ul>
</ol>
</body>
