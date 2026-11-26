//badge.cpp, PETITON Nathan, 25 Novembre 2026, créer un badge avec le nom, la formation et la salle 


#include <iostream>

int main() {
	// Haut du badge
	std::cout << "+------------------------------+" << std::endl;
	std::cout << "|        BADGE VISITEUR        |" << std::endl;
	std::cout << "+------------------------------+" << std::endl;
	//Nom et prénom
	std::cout << "| Nom       : PETITON Nathan   |" << std::endl;
	//Formation
	std::cout << "| Formation : BTS CIEL 1       |" << std::endl;
	//Salle
	std::cout << "| Salle     : Labo Info        |" << std::endl;
	//Bas du badge
	std::cout << "+------------------------------+\n";

	return 0;


	// Pour le compiler voici les commandes que j'ai utilisé : 
	// 1 -   cd C:\Users\npetiton\Documents\Eval\TP_C++\Evaluation\badge
	// 2 -   cl /EHsc badge/badge.cpp
	// 3 -   cd badge
	// 4 -   badge.exe
	/* 5 -   +-------------------------------+
	         |         BADGE VISITEUR        |
	         +------------------------------ +
	    	 | Nom       : PETITON Nathan    |
		     | Formation : BTS CIEL 1        |
		     | Salle     : Labo Info         |
		     +------------------------------ +
    */
}

