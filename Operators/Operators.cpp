// Operators.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    /* Operators calcul :

 + addition
 - soustraction
 * multiplication
 / division
 % modulo retourne reste division euclidienne 0 ou 1
 parenthèse à la priorité

*/

    // Operators calcul :
    int a = 8;
    int b = 4;
    int c = 3;
    int d;
    int e;
    int f;
    int g;
    int h;

    d = a + b;
    e = b - c;
    f = a / b;
    g = b * c;
    h = a % b;

    std::cout << d << '\n';
    std::cout << e << '\n';
    std::cout << f << '\n';
    std::cout << g << '\n';
    std::cout << h << '\n';

    // Operators d'asignation :
    int i = 10;
    i += 2;  // i = i + 2; fonctionne avec toutles operateurs de calculs
    std::cout << i << '\n';

    // Operators incréméntation :
    int j = 10;
    std::cout << ++j << '\n'; // fonctionne pour + et -, incrémente puis affiche 

    // Operators Désincréméntation :
    int k = 10;
    std::cout << k++ << '\n'; // fait d'abord jouer k puis l'incrémente fonctionne pour + et -
    std::cout << k << '\n'; // affiche puis incrémente
    
}

