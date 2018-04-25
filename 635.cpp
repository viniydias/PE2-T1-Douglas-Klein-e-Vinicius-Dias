/*
Douglas Klein e Vinicius Dias
Programação para Engenharia II

6.35 Os computadores estão desempenhando um papel crescente na educação. Escreva um programa que ajuda um aluno da escola primária a aprender multiplicação. Utilize rand para produzir dois inteiros a partir de um algarismo positivo. Então ele deve digitar uma pergunta como:
			Quanto é 6 vezes 7?
Em seguida, o aluno digita  a resposta. Seu programa verifica a resposta do aluno. Se estiver correto, imprima “Muito bem!” e então faça outra pergunta de multiplicação. Se a resposta estiver errada, imprima “Não. Tente novamente.” e então deixe o aluno tentar a mesma pergunta repetidamente até que, por fim, ele consiga acertar o número.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x, y, valor, z;
    
    while(z!= -1)
    {
    	x = rand() % 10;
    	y = rand() % 10;
    	valor = x*y;
    
    	do
    	{ 
    		cout << "Quanto é " << x << " vezes " << y << "?" << endl;
    		cin >> z;
            
        	if (z==valor)
        	{
            		cout << "Muito bem!" << endl;    
        	}
			else if (z==-1)
			{
				break;
			}
            			else 
            			{
                			cout << "Não. Tente novamente." << endl;
            			}
    	}
    	while(z!=valor);
    }
    return 0;
}
