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






<li><b>snake.cpp și snake.hpp:</b> </li>
     <ul>     
            
<b>Modificări aduse:</b> 
     <li>  În locul array-ului static de Point, acum folosim un container STL std::vector pentru a stoca segmentele șarpelui. Acest lucru face codul mai flexibil, permițând extinderea automată a vectorului atunci când șarpele crește.</li>
     <li>Am înlocuit pointerii și alocările dinamice de memorie cu referințe și STL, eliminând necesitatea unui management manual al memoriei.</il>
     <li>std::vector permite manipularea ușoară a segmentelor folosind algoritmi STL pentru căutare și manipulare.</il>
</ul>
<ul>
     
<b>Descriere cod: </b>
       <li>Clasa Snake reprezintă un șarpe cu o poziție și o direcție. Aceasta include metode pentru a muta (Move) și a crește (Grow) șarpele, precum și pentru a obține poziția capului (GetHeadPosition). Metodele folosesc referințe pentru parametri, asigurându-se că resursele sunt manipulate eficient.</il>
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





<li><b>abstract_painter.hpp:</b> </li>
           <ul>
                  
<b>Modificări aduse:</b> 
       <li>În interfața AbstractPainter, char* a fost înlocuit cu std::string, iar char** cu std::vector<std::string>, respectând noile convenții de utilizare a STL.</li>
       
<b>Descriere cod:</b> 
       <li>AbstractPainter definește o interfață abstractă pentru desenarea imaginii și textului. Clasele derivate, cum ar fi Painter, trebuie să implementeze aceste metode. Schimbarea către std::string și std::vector asigură compatibilitatea cu alte componente refăcute din joc.</li>
        
</ul>





<li><b>painter.cpp și painter.hpp</b> </li>
           <ul>
                  
<b>Modificări aduse:</b> 
       <li>Am înlocuit char* pentru text cu std::string, permițând o manipulare mai sigură și mai convenabilă a șirurilor.</li>
        <li>În metoda DrawImage, am înlocuit char** cu un std::vector<std::string>, făcându-l mai ușor de lucrat cu imagini și eliminând nevoia de management manual al memoriei pentru un array bidimensional de caractere.</li>
       
<b>Descriere cod:</b> 
       <li>Clasa Painter este responsabilă pentru desenarea elementelor jocului și pentru afișarea textului pe tablă. DrawImage afișează coordonatele pentru marginea stângă-sus și dreapta-jos a imaginii, iar WriteText afișează textul la coordonatele date. std::vector<std::string> este folosit pentru imagini, asigurând ușurința și siguranța manipulării datelor.</li>
 
</ul>




<li><b>Makefile:</b> </li>
           <ul>
                  
<b>Modificări aduse:</b> 
        <li> Makefile este actualizat pentru a include fișierul snake.cpp și pentru a compila cu setările corespunzătoare pentru standardul C++17, necesar pentru utilizarea STL și smart pointers.</li>
        
<b>Descriere cod:</b> 
       <li>MMakefile definește reguli pentru compilarea și generarea executabilului final. Comanda make all compilează și leagă toate fișierele sursă, iar comanda make clean șterge fișierele temporare .o și executabilul.</li>        
                   
</ul>
</ol>
</body>
