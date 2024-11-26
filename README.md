<body >
<ol>
       
 <li><b> Denumirea proiectului</b>: </li>
SnakeGame

 <li><b>Ce reprezintă proiectul</b>: </li>
SnakeGame este o implementare clasică a jocului retro "Snake", în care jucătorul controlează un șarpe 

 <li><b>Regulile jocului Snake</b>:Snake este un joc clasic în care jucătorul controlează un șarpe într-un spațiu limitat. Scopul jocului este ca șarpele să mănânce "mere" (sau alte obiecte) care apar în mod aleatoriu pe tablă. Cu fiecare măr mâncat, șarpele crește în lungime, iar jocul devine mai dificil deoarece șarpele nu trebuie să se lovească de pereți sau să se auto-colizioneze. Jocul continuă până când jucătorul face o greșeală, moment în care șarpele moare. </li>

 </ol>
<b>Funcția fișierelor board.hpp, board.cpp, snake.cpp, snake.hpp, point.hpp, point.cpp, .gitignore, MakeFile, abstract_painter.hpp, painter.cpp, spainter.hpp si main.cpp</b>:
<body >
    <ol>       

<li><b>src/snake.cpp și include/snake.hpp</b> </li>
     <ul>     
            
<b>Schimbări:</b> 
     <li>  Fără modificări directe, dar este compilat într-o bibliotecă statică, libsnake.a.</li>
     
<ul>
     
<b>Rolul:</b>
       <li>Controlează logica șarpelui, inclusiv mișcarea, creșterea și poziționarea acestuia pe tablă.</il>
</ul>





<li><b>src/painter.cpp și include/painter.hpp:</b> </li>
     <ul>     
            
<b>Schimbări:</b> 
     <li> Servește drept legătură între logica jocului și elementele grafice (e.g., desenarea șarpelui sau afișarea textului).</li>
</ul>
<ul>
     
<b>Metodele Painter:</b>
       <li>Este compilat într-o bibliotecă statică, libpainter.a.</il>
     <li>Acest modul este responsabil de redarea graficii pe ecran (text și imagini), folosind metode virtuale din AbstractPainter.</il>
</ul>



<li><b>.gitignore:</b> </li>

<ul>
<li><b>Schimbări:</b>Adăugarea unor reguli pentru a ignora fișiere generate automat, cum ar fi:</il>
<li>Fișiere obiect (*.o).</il>
<li>Biblioteci statice și dinamice (*.a, *.so).</il>
<li>Executabile (*.exe, *.out)..</il>
<li><b>Rolul:</b>Evită includerea în versiunea de control a fișierelor inutile sau temporare generate în timpul construirii.</il>

</ul>









<li><b>src/point.cpp și include/point.hpp</b> </li>
     <ul>     
            
<b>Schimbări:</b>
       <li>Fără modificări directe, dar codul acestei clase este folosit pentru a genera o bibliotecă statică, libpoint.a.</il>
</ul>
<ul>
     
<b>Rolul:</b>
       <li>Gestionează coordonatele (punctele) în joc, fiind utilizată în diverse module (e.g., poziția șarpelui, limitele tablei de joc).</il>
    
</ul>





<li><b>src/board.cpp și include/board.hpp</b> </li>
     <ul>     
            
<b>Schimbări:</b>
       <li>Similar cu point.cpp, este compilat într-o bibliotecă statică, libboard.a.</il>
</ul>
<ul>
     
<b>Rolul:</b>
       <li>Definește dimensiunile tablei de joc, oferind un cadru pentru poziționarea elementelor din joc.</il>
     

   
</ul>











<li><b>main.cpp:</b> </li>
     <ul>     
            
<b>Constructori:</b>
       <li>Exemplu de script principal care integrează funcționalitățile claselor Board, Snake și Painter. Este punctul de intrare al aplicației.</il>
       
<b>Descriere cod:</b> 
 <li>Permite utilizatorului să testeze modulele compilate și să construiască logica jocului. </li>
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
        <li> Am modularizat procesul de construire, astfel încât fiecare clasă (Point, Board, Painter, Snake) să fie compilată într-o bibliotecă statică (.a).</li>
        <li>    Am adăugat reguli pentru crearea bibliotecilor și pentru legarea acestora cu fișierul principal.</li> 
        <li> Curățarea (clean) șterge acum și fișierele .a și obiectele individuale. </li> 
<b>Descriere cod:</b> 
       <li>Controlează procesul de construire a aplicației, compiland fiecare modul separat și integrându-le într-un executabil final.</li>        
     </ol>              
</ul>

</body>
