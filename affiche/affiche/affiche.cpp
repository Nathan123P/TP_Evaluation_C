/*
    Le but ici est de préparer le forum des metiers en faisant la carte mais en n'utilisant pas std::endl a la fin de la commande mais \n pour la mise en page.
    L'auteur est PETITON Nathan (moi-meme)
    On est le 25 Novembre 2026
    Les commandes pourle compiler et l'executer sont : 
        1- J'ai tapper Developer Command Prompt for VS dans la barre de recherche windows et je l'ai ouvert 
        2- Ensuite j'y ai ecris         : cd C:\Users\npetiton\Documents\Eval\TP_C++\Evaluation\affiche\affiche
        3- j'ai attendu puis j'ai ecris : cl /EHsc affiche.cpp
        4- et pour finir j'ai ecris     : affiche.exe
        5- Puis j'ai eu ce resultat     :   +--------------------------------------+
                                            |        FORUM DES METIERS 2026        |
                                            +--------------------------------------+
                                            |                                      |
                                            |            _____________             |
                                            |           /             \            |
                                            |           |   BTS CIEL  |            |
                                            |           \_____________/            |
                                            |                                      |
                                            |  Reseaux - Programmation - Securite  |
                                            |                                      |
                                            +--------------------------------------+


*/


#include <iostream>

int main(){

    // la différence entre le \n et le std::endl c'est que le \n lui s'ecrit a l'interieur de la chaine de caractere. Le std::endl
    std::cout << "+--------------------------------------+\n" <<
        "|        FORUM DES METIERS 2026        |\n"
        "+--------------------------------------+\n"
        "|                                      |\n"
        "|            _____________             |\n"
        "|           /             \\            |\n"
        "|           |   BTS CIEL  |            |\n"
        "|           \\_____________/            |\n"
        "|                                      |\n"
        "|  Reseaux - Programmation - Securite  |\n"
        "|                                      |\n"
        "+--------------------------------------+\n";

    return 0;
                 

}