**Nu stii ce e aici si te intrebi ce plm se intampla?**

Foarte simplu, folder al tau unde putem vedea toti totul

## De ce?

1. Pentru ca uneori trebuie sa ne dam cod de la unul la altul fara sa modificam **main-ul**
2. Pentru ca poate uneori vrei sa ne dai o bucata de cod si e mai simplu decat upload undeva dupa copy pase etc...

## Chestii care te pot ajuta

## Clonare repository
  In caz de ai uitat. Dai pe source si ai un cod la care dai paste in git bash

## Utilizare GIT din Atom
  Partea blana de am gasit-o, poti face absolut tot din Atom.

  Dreapta jos in Atom ai o chestiuta numita *Git*. Vezi sa **nu** fie *GitHub*, nu avem treaba cu aia

  Dupa ce modifici ceva prin fisiere, dreapta sus ai un buton **Stage All**. Dai pe ala, mai jos scrii mesajul (cum faceam in bash) apoi ai un mare buton **Commit to master**. Il apesi. Apoi tot jos prin zona pe unde ai Git si GitHub o sa ai **Push**. Apasa si aia

  Boom. Ai reusit

  Pentru **Pull** dai vezi ca o sa ai acolo jos *in loc de Push* buton numit **Fetch**. No bun, ala e un fel de *git status*. Dupa ce apesi pe ala in cazul in care exista ceva modificat o sa apara in locul ala butonul de **Pull**
  Uau. Adio si cu asta

  Cam astea tre sa le stii pentru *GIT din Atom*

## Compilare C++ din Atom (Adio C::B)
  Mi-a spart creierii faza asta.

  Deci. Cand ai instalat CodeBlocks ai fost nevoit sa iei si un MinGW daca iti amintesti. Trebuie sa stii unde e folderul lui. Daca nu stii intrii in CodeBlocks, dai pe **Settings** -> **Compiler...**. Ai o groaza de tab-uri, tu dai pe **Toolchain Executables** si vezi acolo folderul din adancuri unde e bagat MinGW. **Tine-l minte**  

  Acum ca stii unde e bagat faci in felu urmator:  
    1. **Tasta Windows** -> **Advanced System Settings** -> **Environment Variables...**  
    2. In partea de jos e un tabel **System Variables**. In ala cauti **Path**, dai dublu click pe el si se deschide o fereastra noua. Acolo dai pe **Browse** si cauti folderu ala de la MinGW. Insa cand il adaugi sa intrii in folderul **bin** din el (o sa arate gen *C:/MinGW/bin*)  
    3. Daca nu s-a pus ultimul, dai si tu click pe el in tabel acolo si spamezi **Move Down** pana e ultimul  
    4. Gata si cu asta, dai OK peste tot si ai terminat aici  

  Amu inapoi in Atom
  Te duci in stanga sus la **File** -> **Settings** -> **Install** si cauti *gpp-compiler* (are poza cu un fel de F)
  Dai Install
  Dupa ce se instaleaza cand esti intr-un fisier *.cpp* apesi **F5** si ti-l compileaza/ruleaza

## Pulentiu

  **Daca te mananca in cur si vrei sa folosesti Git Bash**

  Aici is comenzile

  $ git status

  $ git add .

  $ git status

  $ git commit -m 'mesaj'

  $ git push

  $ git status

  $ git pull
