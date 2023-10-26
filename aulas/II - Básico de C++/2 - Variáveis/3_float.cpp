# include <bits/stdc++.h>

using namespace std;

int main() {
    /* ---------------------------------------------------------*/
    /* ----------------- Variáveis tipo float ----------------- */
    /* ---------------------------------------------------------*/
    float distância = 23.76;
    float pi = 3.1415;
    float posicao = -154.97;

    cout << "Variáveis tipo float armazenam número 'reais'\n";
    cout << "distância: " << distância << "\n";
    cout << "pi: " << pi << "\n";
    cout << "posicao: " << posicao << "\n\n";

    /* ---------------------------------------------------------*/
    /* ----------------- Operações com float ------------------ */
    /* ---------------------------------------------------------*/

    /* podemos realizar operações aritméticas com os floats */
    float x = 11.56, y = 6.23;
    cout << "considere x = " << x << " e y = " << y << "\n";

    /* operação de soma */
    float soma = x + y;
    cout << "x + y = " << soma << "\n";

    /* operação de subtração */
    float subtracao = x - y;
    cout << "x - y = " << subtracao << "\n";
    
    /* operação de multiplicação */
    float multiplicacao = x*y;
    cout << "x*y = " << multiplicacao << "\n";

    /* operação de divisão */
    float divisao = x/y;
    cout << "x/y = " << divisao << " (divisão é exata)\n";
}