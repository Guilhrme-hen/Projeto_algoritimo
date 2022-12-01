#include <stdio.h> //biblioteca
#include <stdlib.h>//biblioteca
#include <locale.h>//biblioteca


// arumar a validaçao do genero 
// usei s1 ou s2 representa as sessoes x1 e x2 usei para o for começar a partir do numero 1
int main (){
int tot, fem, masc, crianca, adolesc, adulto, idoso, sessoes, assistirams1, idades1[assistirams1], assistirams2, idades2[assistirams2], x1, x2, i, ingresso1[300], ingresso2[300];
char generos1[assistirams1], generos2[assistirams2], masculino, feminino, filme[40];
setlocale(LC_ALL, "Portuguese"); //formata linguagem para portugues

printf("Nome do filme: ");
fflush(stdin);
fgets(filme, 40, stdin);

do{

printf("digite o numero de sessões: ");
scanf ("%d", &sessoes);//quantidade de sessoes

}while (sessoes != 2);//validaçao das 2 sessoes

	do{
	printf("informe quantas pessoas assistiram ao filme na sessão 1: "); 
	scanf ("%d", &assistirams1);//quantas pessoas assistiram ao filme da sesssao 1
	}while (assistirams1 < 10);// validaçao do minimo de pessoas que asssistiram
	x1 = assistirams1 + 1; //para o for começa do numero 1
	
		for (i=1; i < x1; i++){ //repetiçao para guardar dados no vetor
	//	do{
		printf("Digite o sexo do cliente %d da sessão 1: ",i);
		fflush (stdin);//comando para limpar memoria
		scanf("%c",&generos1[i]);//sexo dos clientes
		
		if(generos1[i] == 'F'){
			fem = fem++;
		} else if(generos1[i] == 'M'){
			masc = masc++;
		}

		//}while (generos1[i] != "masculino" || generos1[i] != "feminino");
		
		printf("Informe o tipo do ingresso do cliente %d (1 - meia | 2 - inteira): ", i);  // TIPO DE INGRESSO
		scanf("%d", &ingresso1[i]); 
		if(ingresso1[i]==1){
			tot = tot + 25;
		} else if(ingresso1[i]==2){
			tot = tot+ 50;
		}
		
		//arumar validaçao do sexo
		
		do{
		printf("Digite a idade do cliente %d da sessão 1: ",i);
		fflush (stdin);//limpa memoria
		scanf("%d",&idades1[i]);//idade dos clientes
  		printf("\n");
  		
  			if(idades1[i] >= 3 && idades1[i] <= 13) {
  				crianca = crianca++;
			  } else if(idades1[i] >= 14 && idades1[i] <= 17){
			  	adolesc = adolesc++;
			  } else if(idades1[i] >= 18 && idades1[i] <= 64){
			  	adulto = adulto++;
			  } else if (idades1[i] >= 65 && idades1[i] <= 100){
			  	idoso = idoso++;
			  }
			  
		
		}while (idades1[i] < 3 || idades1[i] > 100 );//validaçao da iddade
		
		}
//------------------------------------------------------------------------------------
		do{
	printf("informe quantas pessoas assistiram ao filme na sessão 2: ");
	scanf ("%d", &assistirams2);//quantas pessoas assistiram ao filme da sesssao 1
	}while (assistirams2 < 10);// validaçao do minimo de pessoas que asssistiram
	x2 = assistirams2 + 1;//para o for começa do numero 1
	
		for (i=1; i < x2; i++){ //repetiçao para guardar dados no vetor
		
	//	do{
		printf("Digite o sexo do cliente %d da sessão 2 (F/M): ",i);
		fflush (stdin);//comando para limpar memoria
		scanf("%c",&generos2[i]);//sexo dos clientes
		
		if(generos2[i] == 'F'){  // Contagem de genero
			masc = masc++;
		} else if(generos2[i] == 'M'){
			fem = fem++;
		}
	
	//	}while (generos2[i] != "masculino" && generos2[i] != "feminino");
		
		printf("Informe o tipo do ingresso do cliente %d (1 - meia | 2 - inteira): ", i);  //Tipo de ingresso
		scanf("%d", &ingresso2[i]); 
		if(ingresso2[i]==1){
			tot = tot + 25;
		} else if(ingresso2[i]==2){
			tot = tot+ 50;
		}
		//arumar validaçao do sexo
		
		do{
		printf("Digite a idade do cliente %d da sessão 2: ",i);
		fflush (stdin);//limpa memoria
		scanf("%d",&idades2[i]);//limpa memoria
  		printf("\n");
		
		}while (idades2[i] < 3 || idades2[i] > 100 );//validaçao da iddade
		
		}
		
		printf(" Nome do filme: %s\n Homens: %d\n Mulheres: %d\n", filme, masc, fem);
		printf(" Crianças: %d\n Adolescentes: %d\n Adultos: %d\n Idosos: %d\n", crianca, adolesc, adulto, idoso);
		printf ("%d %c %d %c",idades1[3],generos1[3],idades2[3],generos2[3]);// teste pode ser apagado


}

