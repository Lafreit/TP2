#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed para gerar numeros aleatorios
    string choices[5] = {"Pedra", "Papel", "Tesoura", "Lagartixa", "Spork"};
    int userChoice, computerChoice;

    cout << "Bem-vindo ao Jokenpo!" << endl;
    cout << "Escolha uma opcao: " << endl;
    cout << "0 - Pedra" << endl;
    cout << "1 - Papel" << endl;
    cout << "2 - Tesoura" << endl;
    cout << "3 - Lagartixa" << endl;
    cout << "4 - Spork" << endl;
    cout << "Sua escolha: ";
    cin >> userChoice;

    computerChoice = rand() % 5; // Gera um numero aleatorio entre 0 e 4
    cout << "Voce escolheu: " << choices[userChoice] << endl;
    cout << "Computador escolheu: " << choices[computerChoice] << endl;

    if (userChoice == computerChoice) {
        cout << "Empate!" << endl;
    } else if ((userChoice == 0 && (computerChoice == 2 || computerChoice == 3)) ||
               (userChoice == 1 && (computerChoice == 0 || computerChoice == 4)) ||
               (userChoice == 2 && (computerChoice == 1 || computerChoice == 3)) ||
               (userChoice == 3 && (computerChoice == 1 || computerChoice == 4)) ||
               (userChoice == 4 && (computerChoice == 0 || computerChoice == 2))) {
        cout << "Voce ganhou!" << endl;
    } else {
        cout << "Voce perdeu!" << endl;
    }

    return 0;
}