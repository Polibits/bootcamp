# include <bits/stdc++.h>

using namespace std;

int main() {
    /* ---------------------------------------------------------*/
    /* ------------------ Variáveis tipo int ------------------ */
    /* ---------------------------------------------------------*/
    int idade = 18;
    int pontos = 200;
    int saldo = -107;

    cout << "Variáveis tipo int armazenam valores inteiros.\n";
    cout << "idade: " << idade << "\n";
    cout << "pontos: " << pontos << "\n";
    cout << "saldo: " << saldo << "\n\n";

    /* ---------------------------------------------------------*/
    /* ---------------- Operações com inteiros ---------------- */
    /* ---------------------------------------------------------*/

    /* podemos realizar operações aritméticas com esses inteiros */
    int x = 10, y = 3;
    cout << "considere x = " << x << " e y = " << y << "\n";

    /* operação de soma */
    int soma = x + y;
    cout << "x + y = " << soma << "\n";

    /* operação de subtração */
    int subtracao = x - y;
    cout << "x - y = " << subtracao << "\n";
    
    /* operação de multiplicação */
    int multiplicacao = x*y;
    cout << "x*y = " << multiplicacao << "\n";

    /* operação de divisão */
    int divisao = x/y;
    cout << "x/y = " << divisao << " (divisão é inteira)\n";

    /* resto */
    int resto = x%y;
    cout << "x%y = " << resto << "(resto da divisão de x por y)\n";
}