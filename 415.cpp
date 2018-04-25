/* 
Programação para Engenharia II

Douglas e Vinícius

Exercicio 4.15

Uma grande industria química paga sua equipe de vendas por comissão.
Os vendedores recebem $200 por semana mais 9% de suas vendas brutas por semana
desenvolva usando while para inserir as vendas brutas de cada vendedor durante a ultima semana,calcular e exibir rendimentos do vendedor.
processe os numeros de um vendedor por vez
*/

#include <iostream>


using namespace std;

int main ()
{
	float venda=0,salario;
	
	while (venda != -1)
	{
		cout<<"Entre com as vendas em dolar(-1 para terminar):";
		cin>>venda;
		cout<<endl;
				
		if (venda==-1)
		{
			break;
		}
		else
		{
		//cout<<"Entre com as vendas em dolar(-1 para terminar):";
		//cin>>venda;
		//cout<<endl;
		salario=200.00+((venda*9)/100);
	
		cout << fixed;
    		cout.precision(2);
		cout<<"salario:  $"<<salario<<endl;
		}
	}
	
	cout<<"FIM"<<endl;


return 0;
}
