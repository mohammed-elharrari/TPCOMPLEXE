// COMPLEXE.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Complex.h"
#include <iostream>
using namespace std;


int main()
{
	Complex* C1 = new Complex(3, 4);
	Complex* C2 = new Complex(1, 2);
	Complex C3 = *C1 - *C2;
	C3.afficher();
	Complex C4 = *C1 * *C2;
	C4.afficher();
	Complex C5 = *C2 / *C1;
	C5.afficher();
	double b = 2;
	Complex C6 = *C2 / b;
	C6.afficher();
	double c = 2;
	Complex C7 = *C2 * c;
	C7.afficher();
	Complex C9(2.0 , 2.0);
	Complex C8(2.0, 2.0);
	if (C9 == C8) 
			cout << "egaux" << endl;
	else 
		cout << "differents" << endl;
	
	if (C9 != C8)
		cout << "differents" << endl;
	else
		cout << "egaux" << endl;
	if (*C1 > *C2)
		cout << "C1 est sup a C2" << endl;
	else
		cout << "C1 est inf ou egale à C2" << endl;

	if (*C1 < *C2)
		cout << "C1 est inf a C2" << endl;
	else
		cout << "C1 est sup ou egale à C2" << endl;
	double s = 2;
	if (*C1 < s)
		cout << "C1 est inf a s" << endl;
	else
		cout << "C1 est sup ou egale à s" << endl;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
