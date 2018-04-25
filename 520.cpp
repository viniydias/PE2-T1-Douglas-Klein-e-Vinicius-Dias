/*
Douglas Klein e Vinicius Dias
Programação para Engenharia II

Exercício 5.20:
Um triângulo retângulo pode ter lados que são todos inteiros. Um conjunto de três valores inteiros para os lados de um triângulo retângulo é chamado de triplo de Pitágoras. Esses três lados devem satisfazer o relacionamento de que a soma dos quadrados de dois dos lados seja igual ao quadrado da hipotenusa. Localize todos os triplos de Pitágoras para side1, side2, e hipotenusa, todos não maiores que 500. Utilize um loop "for" triplamente aninhado que tente todas as possibilidades. Esse é um exemplo de computação baseada na força bruta. Você aprenderá em cursos mais avançados de ciência da computação que há muitos problemas interessantes para os quais não há nenhuma abordagem algorítmica conhecida diferente da pua foça bruta.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int side1, side2, hip;
    float k;
    
    for (hip=1; hip<=500; hip++)
    {
        for (int side1=1; side1<=500; side1++)
        {
            for (int side2=1; side2<=500; side2++)
            {
                k = sqrt(pow(side1,2) + pow(side2,2));
                if (k==hip) // se hipotenusa também inteiro, 
                {    
                    cout << "side1 = " << "  " << side1 << " side2 =" << "  " << side2 << " hip =" << "  " << hip << endl;
                }
            }
        }
    }
}
