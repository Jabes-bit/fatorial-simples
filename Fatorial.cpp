#include<iostream>
using namespace std;
int main()
{   
    setlocale(LC_ALL,"ptb");
    int numf,cont,num,res=1;
      cout<<"Informe um número para o cálculo do fatorial!";
      cin>>numf;
    for(cont=1;cont<=numf;cont++)
    {
    
	 res*=cont;
    
    }
	  cout<<"O fatorial de "<<numf<<" é: "<<res<<"!";
    
}
