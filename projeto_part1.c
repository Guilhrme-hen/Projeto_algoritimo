#include <stdio.h> //biblioteca
#include <stdlib.h>//biblioteca
#include <locale.h>//biblioteca


// arumar a valida?ao do genero 
// usei s1 ou s2 representa as sessoes x1 e x2 usei para o for come?ar a partir do numero 1
int main (){
int sessoes,assistirams1,idades1[assistirams1],assistirams2,idades2[assistirams2],x1,x2,i;
char generos1[assistirams1],generos2[assistirams2],masculino,feminino;
setlocale(LC_ALL, "Portuguese"); //formata linguagem para portugues

do{

printf("digite o numero de sessães: ");
scanf ("%d", &sessoes);//quantidade de sessoes

}while (sessoes != 2);//valida?ao das 2 sessoes

	do{
	printf("informe quantas pessoas assistiram ao filme na sessão 1: "); 
	scanf ("%d", &assistirams1);//quantas pessoas assistiram ao filme da sesssao 1
	}while (assistirams1 < 10);// valida?ao do minimo de pessoas que asssistiram
x1 = assistirams1 + 1; //para o for come?a do numero 1
	
		for (i=1; i < x1; i++){ //repeti?ao para guardar dados no vetor
	//	do{
		printf("Digite o sexo do cliente %d da sessão 1: ",i);
		fflush (stdin);//comando para limpar memoria
		scanf("%c",&generos1[i]);//sexo dos clientes
		//}while (generos1[i] != "masculino" || generos1[i] != "feminino");
		
		//arumar valida?ao do sexo
		
		do{
		printf("Digite a idade do cliente %d da sessão 1: ",i);
		fflush (stdin);//limpa memoria
		scanf("%d",&idades1[i]);//idade dos clientes
  		printf("\n");
		
		}while (idades1[i] < 3 || idades1[i] > 100 );//valida?ao da iddade
		
		}
//--------------------------------------------------------------------------------------------
		do{
	printf("informe quantas pessoas assistiram ao filme na sessão 2: ");
	scanf ("%d", &assistirams2);//quantas pessoas assistiram ao filme da sesssao 1
	}while (assistirams2 < 10);// valida?ao do minimo de pessoas que asssistiram
x2 = assistirams2 + 1;//para o for come?a do numero 1
	
		for (i=1; i < x2; i++){ //repeti?ao para guardar dados no vetor
		
	//	do{
		printf("Digite o sexo do cliente %d da sessão 1: ",i);
		fflush (stdin);//comando para limpar memoria
		scanf("%c",&generos2[i]);//sexo dos clientes
	//	}while (generos2[i] != "masculino" && generos2[i] != "feminino");
		
		//arumar valida?ao do sexo
		
		do{
		printf("Digite a idade do cliente %d da sessão 1: ",i);
		fflush (stdin);//limpa memoria
		scanf("%d",&idades2[i]);//limpa memoria
  		printf("\n");
		
		}while (idades2[i] < 3 || idades2[i] > 100 );//valida?ao da iddade
		
		}
printf ("%d %c %d %c",idades1[3],generos1[3],idades2[3],generos2[3]);// teste pode ser apagado

}


