# include <bits/stdc++.h>

using namespace std;

int main() {
    /* ---------------------------------------------------------*/
    /* ---------------------- Variáveis ----------------------- */
    /* ---------------------------------------------------------*/

    /* variáveis são reservas na memória do computador, que armazenam 
    valores e podem ser referenciadas por seus nomes. 
    
    Por exemplo, imagine que eu queira guardar as informações de um
    ser humano, como nome, idade, etc., na memória */

    /* podermos armazenar o nome como texto */
    string nome = "Henrique S. Souza";

    /* sua inicial como um caracter */
    char inicial_do_nome = 'h';

    /* seu ano de nascimento como um número inteiro */
    int ano_de_nascimento = 2001;
    
    /* seu salário como um número real */
    float salario = 8753.14;

    /* em seguida, podemos nos referenciar a estas quantidades a partir de
    seus nomes. Sempre que escrevemos o nome de uma variável, nos referenciamos
    ao valor que elas armazenam. */
    cout << "Meu nome é: " << nome << "\n";
    cout << "Inicial do nome: " << inicial_do_nome << "\n";
    cout << "Nasci em " << ano_de_nascimento << "\n";
    cout << "Salario: " << salario << "\n";

    /* podemos operar e modificar essas variáveis à vontade */
    int ano_atual = 2023;

    /* calculando minha idade */
    int idade = ano_atual - ano_de_nascimento;
    cout << "Minha idade é: " << idade << "\n\n";

    /* ---------------------------------------------------------*/
    /* --------------------- Declaração ----------------------- */
    /* ---------------------------------------------------------*/

    /* de forma geral, declaramos uma variável da seguinte forma
                                                                
                      int nota_redacao_enem = 1000;                        
                       ^          ^             ^                         
                     tipo        nome         valor;            */
    int nota = 9;
    cout << "declaração: int nota = 9;\n";
    cout << "tipo de variável: int (número inteiro)\n";
    cout << "nome da variável: nota\n";
    cout << "valor atribuído: 9\n\n";

    /* podemos também declarar várias variáveis numa mesma linha */
    int x = 7, y = 8, z = 6;
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";
    cout << "z = " << z << "\n\n";

    /* além disso, podemos declarar a variável sem um valor definido,
    a princípio, e definí-lo somente depois */
}