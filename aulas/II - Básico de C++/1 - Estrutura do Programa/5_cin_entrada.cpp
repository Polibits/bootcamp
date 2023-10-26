# include <bits/stdc++.h>

using namespace std;

int main() {
    /* ---------------------------------------------------------*/
    /* ------------------------- cin -------------------------- */
    /* ---------------------------------------------------------*/

    /* o cin é uma forma de receber informação do usuário. Podemos pegar 
    o que ele digita com o teclado, para usar dentro do noss programa */

    int x;
    cout << "Por favor, digite um número:\n";
    cin >> x;
    
    int y;
    cout << "Agora, digite outro número:\n";
    cin >> y;

    cout << "você escolheu " << x << " e " << y << " \n";
    cout << "A soma desses números é: " << x + y << "\n";

    /* na linha 15, cin >> x significa "leia o que o usuário digitar no
    terminal e guarde o resultado na variável x". A linha 19 faz a mesma coisa,
    mas com a variável y */
}