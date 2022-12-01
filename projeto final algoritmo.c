#include <stdio.h> //biblioteca
#include <stdlib.h>//biblioteca
#include <locale.h>//biblioteca
#include <string.h>//biblioteca



// usei s1 ou s2 representa as sessoes x1 e x2 usei para o for come�ar a partir do numero 1
int main (){
	
// Foi utilizado o conceito Nomes Pronunci�veis do livro Clean Code. Sendo assim, as vari�veis foram descritas com nomes apropriados de acordo com a utilidade de cada vari�vel.
// Foi utilizado tamb�m o conceito de Indenta��o no qual � usado para indicar a hierarquia do c�digo, evidenciando os acoplamentos entre os m�todos e saber "quem est� dentro de quem".
	
	int tot, fem, masc, crianca, adolesc, adulto, idoso, sessoes, assistirams1, idades1[1000], maiorIdadeF, maiorIdadeM, countCarteirinha, countSemCarteirinha, countMeia, countInteira, assistirams2, idades2[1000], x1, x2, i, ingresso1[300], ingresso2[300], carteirinha1[1000], carteirinha2[1000];
	char generos1[1000], generos2[1000], masculino, feminino, filme[40], maior[8];
	setlocale(LC_ALL, "Portuguese"); //formata linguagem para portugues

	masc = fem = crianca = adolesc = adulto = idoso = maiorIdadeF = maiorIdadeM = countInteira = countMeia = countCarteirinha = countSemCarteirinha = 0;

//Nome dos alunos com respectivos cursos e matr�culas
	printf("Nome Completo: Thiago Oyo Valentim  /  Matr�cula: UC22103238  / Curso: An�lise e Desenvolvimento de Sistemas\n");				
	printf("Nome Completo: Tiago Amorim Esteve  /  Matr�cula: UC22200438  / Curso: An�lise e Desenvolvimento de Sistemas\n");
	printf("Nome Completo: Guilherme Henrique Candido Morais  /  Matr�cula: UC22200490  / Curso: An�lise e Desenvolvimento de Sistemas\n");

//Questiona ao usu�rio qual o nome do filme
	printf("Nome do filme: ");
	fflush(stdin);
	fgets(filme, 40, stdin);


// Questiona ao usu�rio a quantidade de sess�es com valida��o aceitando somente o n�mero 2.
	do{
		printf("digite o numero de sess�es: ");
		scanf ("%d", &sessoes);//quantidade de sessoes
	}while (sessoes != 2);//valida�ao das 2 sessoes


///////////////////SESS�O 1 ////////////////////////
//Questiona ao usu�rio a quantidade de pessoas que assistiram a sess�o com valida��o para no m�nimo 10 pessoas.
	do{
		printf("informe quantas pessoas assistiram ao filme na sess�o 1: "); 
		scanf ("%d", &assistirams1);//quantas pessoas assistiram ao filme da sesssao 1
	}while (assistirams1 < 10);// valida�ao do minimo de pessoas que asssistiram
	x1 = assistirams1 + 1; //para o for come�a do numero 1
	
//la�os de repeti�ao para armazenar o sexo informado pelo usuario dos clientes que assistiram a sess�o. Ocorre a valida��o para os caracteres M, F, m, f.
	for (i=1; i < x1; i++){ 
		do{
			printf("-------------------------------------------------\n");
			printf("Digite o sexo do cliente %d da sess�o 1 (F/M): ",i);
			fflush (stdin);//comando para limpar memoria
			scanf("%c",&generos1[i]);//sexo dos clientes
		}while (generos1[i] != 'm' && generos1[i] != 'f' && generos1[i] != 'M' && generos1[i] != 'F');
		
// contagem de quantos clientes s�o do g�nero masculino e feminino.
		if(generos1[i] == 'F' || generos1[i] == 'f'){
			fem++;
		} else if(generos1[i] == 'M' || generos1[i] =='m'){
			masc++;
		}

// questiona ao usuario o tipo de ingresso comprado pelo cliente podendo ser inteira e meia.	
		printf("Informe o tipo do ingresso do cliente %d (1 - meia | 2 - inteira): ", i);  // TIPO DE INGRESSO
		scanf("%d", &ingresso1[i]); 
		
// contagem de quantos clientes compraram meia e inteira e do total em R$ que foi arrecadado na primeira sess�o.		
		if(ingresso1[i]==1){
			tot += 25;
			countMeia++;
		} else if(ingresso1[i]==2){
			tot += 50;
			countInteira++;
		}
		
// Questiona ao usuario a idade do cliente, ocorrendo a valida��o, aceitando idades entre 3 e 100 anos.		
		do{
			printf("Digite a idade do cliente %d da sess�o 1: ",i);
			fflush (stdin);//limpa memoria
			scanf("%d",&idades1[i]);//idade dos clientes
	  		

// Contagem de acordo com a idade, classificando em crian�a, adolescente, adulto e idoso de acordo com o limite pr� estabelecido de idade.
  			if(idades1[i] >= 3 && idades1[i] <= 13) {
  				crianca++;
			  } else if(idades1[i] >= 14 && idades1[i] <= 17){
			  	adolesc++;
			  } else if(idades1[i] >= 18 && idades1[i] <= 64){
			  	adulto++;
			  } else if(idades1[i] >= 65 && idades1[i] <= 100){
			  	idoso++;
			  }	
		}while (idades1[i] < 3 || idades1[i] > 100 );//valida�ao da iddade

// Contagem de quantos clientes masculinos e femininos s�o maiores de idade.
		if (idades1[i] >= 18 && (generos1[i] == 'f' || generos1[i] == 'F')){
			maiorIdadeF++;
		} else if (idades1[i] >= 18 && (generos1[i] == 'm' || generos1[i] == 'M')){
			maiorIdadeM++;
		}
		
		
// Questiona ao usu�rio se o cliente possui carteirinha estudantil.
		printf("O Cliente possui carteirinha estudantil? (1-Sim / 2-N�o)");
		scanf("%d", &carteirinha1[i]);
		printf("\n");
// Conferencia de ingressos do tipo meia, validando a entrada apenas se o cliente tiver carteirinha estudantil ou for idoso. Contabiliza��o realizada dos clientes que conseguiram entrar ou n�o.
		if (ingresso1[i] == 1)  {
			if (carteirinha1[i] == 1 || idades1[i] > 64){
				countCarteirinha++;
			} else if (carteirinha1[i] == 2 || idades1[i] < 64){
			countSemCarteirinha++;
		}
		} 
	}
		
		
		
	
	
///////////////////SESS�O 2 ////////////////////////	
//------------------------------------------------------------------------------------
//Questiona ao usu�rio a quantidade de pessoas que assistiram a sess�o com valida��o para no m�nimo 10 pessoas.
		do{
			printf("-------------------------------------------------\n");
			printf("informe quantas pessoas assistiram ao filme na sess�o 2: ");
			scanf ("%d", &assistirams2);//quantas pessoas assistiram ao filme da sesssao 1
		}while (assistirams2 < 10);// valida�ao do minimo de pessoas que asssistiram
		x2 = assistirams2 + 1;//para o for come�a do numero 1
	
//la�os de repeti�ao para armazenar o sexo informado pelo usuario dos clientes que assistiram a sess�o. Ocorre a valida��o para os caracteres M, F, m, f.
		for (i=1; i < x2; i++){ //repeti�ao para guardar dados no vetor
		
			do{
				printf("-------------------------------------------------\n");
				printf("Digite o sexo do cliente %d da sess�o 2 (F/M): ",i);
				fflush (stdin);//comando para limpar memoria
				scanf("%c",&generos2[i]);//sexo dos clientes

// contagem de quantos clientes s�o do g�nero masculino e feminino.				
				if(generos2[i] == 'M' || generos2[i] == 'm'){  // Contagem de genero
					masc++;
				} else if(generos2[i] == 'F' || generos2[i] == 'f'){
					fem++;
				}
			}while (generos2[i] != 'm' && generos2[i] != 'f' && generos2[i] != 'M' && generos2[i] != 'F');
		

// questiona ao usuario o tipo de ingresso comprado pelo cliente podendo ser inteira e meia.	
			printf("Informe o tipo do ingresso do cliente %d (1 - meia | 2 - inteira): ", i);  //Tipo de ingresso
			scanf("%d", &ingresso2[i]); 

// contagem de quantos clientes compraram meia e inteira e do total em R$ que foi arrecadado na segunda sess�o.					
			if(ingresso2[i]==1){
				countMeia++;
				tot += 25;
			} else if(ingresso2[i]==2){
				countInteira++;
				tot += 50;
			}

// Questiona ao usuario a idade do cliente, ocorrendo a valida��o, aceitando idades entre 3 e 100 anos.			
			do{
				printf("Digite a idade do cliente %d da sess�o 2: ",i);
				fflush (stdin);//limpa memoria
				scanf("%d",&idades2[i]);//limpa memoria
		  		
// Contagem de acordo com a idade, classificando em crian�a, adolescente, adulto e idoso de acordo com o limite pr� estabelecido de idade.		  		
		  		if(idades2[i] >= 3 && idades2[i] <= 13) {
  				crianca++;
			  	} else if(idades2[i]>= 14 && idades2[i] <= 17){
			  	adolesc++;
			 	} else if(idades2[i]>= 18 && idades2[i] <= 64){
			  	adulto++;
			 	} else if(idades2[i]>= 65 && idades2[i] <= 100){
			  	idoso++;
			  	} 
			}while (idades2[i] < 3 || idades2[i] > 100 );//valida�ao da iddade
			
// Contagem de quantos clientes masculinos e femininos s�o maiores de idade.			
			if (idades2[i] >= 18 && (generos2[i] == 'f' || generos2[i] == 'F')){-
				maiorIdadeF++;
			} else if (idades2[i] >= 18 && (generos2[i] == 'm' || generos2[i] == 'M')){
				maiorIdadeM++;
			}
	
// Questiona ao usu�rio se o cliente possui carteirinha estudantil.		
			printf("O Cliente possui carteirinha estudantil? (1-Sim / 2-N�o)");
			scanf("%d", &carteirinha2[i]);
			printf("\n");
// Conferencia de ingressos do tipo meia, validando a entrada apenas se o cliente tiver carteirinha estudantil ou for idoso. Contabiliza��o realizada dos clientes que conseguiram entrar ou n�o.			
			if (ingresso2[i] == 1)  {
			if (carteirinha2[i] == 1 || idades2[i] > 64){
				countCarteirinha++;
			} else if (carteirinha2[i] == 2 || idades2[i] < 64){
				countSemCarteirinha++;
		}
		} 
	
		
			
}

			printf("-------------------------------------------------------------\n");
// Output com Nome do filme, Quantidade de Homens que assistiram o filme e Quantidade de Mulheres que assistiram o filme.			
			printf(" Nome do filme: %s\n Homens: %d\n Mulheres: %d\n\n", filme, masc, fem);
			
// Output com Quantidade de clientes que assistiram o filme classificado por faixa et�ria.			
			printf(" Quantidade por faixa etaria que assistiu ao filme:\n");
			printf(" Crian�as: %d\n Adolescentes: %d\n Adultos: %d\n Idosos: %d\n\n", crianca, adolesc, adulto, idoso);
			
// Output com Quantidade de clientes maiores de idade do sexo Feminino e Masculino.
			printf(" Quantidade de pessoas maiores de idade do sexo FEMININO: %d\n\n", maiorIdadeF);
			printf(" Quantidade de pessoas maiores de idade do sexo MASCULINO: %d\n\n", maiorIdadeM);
			
// Output com Valor Total Arrecadado.
			printf(" Valor Total Arrecadado: R$%d\n", tot);
			
// Conferencia de que tipo de ingresso foi mais vendido, inteira ou meia.
			if (countInteira > countMeia){
				strcpy(maior, "Inteira");
			} else if (countInteira < countMeia){
				strcpy(maior, "Meia");
			} else if (countInteira == countMeia){
				strcpy(maior, "Empate");
			}
			
// Output de que tipo de ingresso foi mais vendido ou se deu empate.			
			printf(" O tipo de ingresso mais vendido foi: %s\n\n", maior);
			
// Output com quantidade de pessoas que compraram meia e conseguiram ou n�o entrar em fun��o de ter carteira estudantil ou ser idoso. Funcionalidade nova conforme solicitado na Quest�o 9.
			printf( "%d pessoas n�o conseguiram entrar por comprar ingresso meia e n�o ter carteira estudantil ou n�o ser idoso!\n", countSemCarteirinha);
			printf( "%d pessoas conseguiram entrar comprando meia e apresentando carteira estudantil ou sendo idoso!", countCarteirinha);
			
			
}
