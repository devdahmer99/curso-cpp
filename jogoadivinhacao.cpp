    /* Inclusão da Biblioteca responspavel pela entrada e saida de dados */
#include <iostream>

    /* Indicando o nome da função que iremos usar */
using namespace std;

    /* função main responspasável por reter todo o código do nosso programa*/
int main () {
    cout << "***************************************" <<endl;
    cout << "* Boas vindas ao Jogo da Adivinhação! *" <<endl;
    cout << "***************************************" <<endl;

    const int NUMERO_SECRETO = 42; 
    bool nao_acertou = true;
    int tentativas = 0;

    while(nao_acertou) {
        tentativas++;
        int chute;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual o seu chute ?" << endl;
        cin >> chute;

        cout << "O valor do seu chute é: " << chute << endl;
        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou) {
            cout << "Parabéns! você acertou" << endl;
            nao_acertou = false;
        } else if (maior) {
            cout << "Que pena! você chutou um número maior que o secreto!" <<endl;
        } else {
            cout << "Que pena! você chutou um número menor que o secreto!" << endl;
        }

        } 
        cout << "Fim de Jogo!" << endl;
        cout << "Você acertou o numero secreto em " << tentativas << " Tentativas" << endl;
}
