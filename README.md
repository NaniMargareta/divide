# ALGORITMUL - Divide
Proiectul creat in luna august la Tekwill in fiecare scoala in C/C++

Pentru a rula proiectul accesati acest link:

# 1.SCOPUL
(ce problema solutioneoaza acest program)

Metoda se foloseşte în problemele care pot fi descompuse în subprobleme similare cu problema iniţială 
(care se rezolvă prin aceeaşi metodă) şi care prelucrează mulţimi de date de dimensiuni mai mici, independente unele de
altele (care folosesc mulţimi de intrare disjuncte).

# 2.DESCRIEREA ALGORITMULUI
(cum lucreaza din punct de vedere a algoritmului)

În general implementarea metodei Divide et Impera se face prin funcţii recursive. De regulă vom avea o singură funcţie care primeşte ca parametri informaţiile necesare pentru a rezolva o subproblemă şi returnează rezultatele pentru subproblema respectivă.
Funcţia va determina dacă subproblema este una trivială, caz în care va calcula direct soluţia pentru ea. Dacă subproblema nu este una trivială, atunci funcţia va împărţi subproblema în subsubprobleme şi se va auto-apela în mod recursiv pentru fiecare din ele. Pe urmă va combina rezultate obţinute pentru subsubprobleme şi va găsi soluţia pentru subproblemă.

![image](https://user-images.githubusercontent.com/75802120/103306276-def07000-4a15-11eb-9b94-58edba94492c.png)

# 3.SCREENSHOTURI
(cum ruleaza aplicatia)

![image](https://user-images.githubusercontent.com/75802120/103305414-c0897500-4a13-11eb-9a81-294ab99d5661.png)

# 4.CONCLUZII

- Algoritmii divide et impera sunt în general rapizi, deoarece prin descompunere, de cele mai multe ori, se obţin probleme pentru care rezolvarea şi combinarea soluţiilor au un grad de complexitate mai mic decât problema iniţială.
- Algoritmii divide et impera se implementează, de obicei, într-un subprogram recursiv.
- Nu toate problemele pot fi rezolvate prin utilizarea acestei tehnici. Numărul problemelor rezolvabile prin divide et impera este relativ mic, tocmai datorită cerinței ca problema să admită o descompunere repetată.
