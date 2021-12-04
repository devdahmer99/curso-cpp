#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    cout << "***************************************" <<endl;
    cout << "* Boas vindas ao Jogo da Adivinhação! *" <<endl;
    cout << "***************************************" <<endl;

    cout << "Escolha o seu nível de dificuldade: " << endl;
    cout << "Fácil (F), Médio (M), Difícil (D)" << endl;

    char dificuldade;
    cin >> dificuldade;
    int numero_de_tentativas;

    if (dificuldade == 'F') {
        numero_de_tentativas = 15;
    } else if (dificuldade == 'M') {
        numero_de_tentativas = 10;
    } else {
        numero_de_tentativas =  5;
    }

    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100; 
    bool nao_acertou = true;
    int tentativas = 0;
    double pontos = 1000.0;

 for (tentativas = 1;tentativas <= numero_de_tentativas; tentativas++) {
      int chute;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual o seu chute ?" << endl;
        cin >> chute;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
        pontos = pontos - pontos_perdidos;

        cout << "O valor do seu chute é: " << chute << endl;
        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou) {
            cout << "Parabéns! você acertou" << endl;
            nao_acertou = false;
            break;
        } else if (maior) {
            cout << "Que pena! você chutou um número maior que o secreto!" <<endl;
        } else {
            cout << "Que pena! você chutou um número menor que o secreto!" << endl;
        }

        } 
        cout << "Fim de Jogo!" << endl;

        if (nao_acertou) {
            cout << "Você perdeu! tente novamente" << endl;
        } else {
            cout << "Você acertou o numero secreto em " << tentativas << " Tentativas" << endl;
            cout.precision(2);
            cout << fixed;
            cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
        }
        
 }
       

