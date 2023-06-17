#include <stdio.h>
#include <string.h> //manipular strings
#include <locale.h> // Biblioteca de Linguagens

int 
	acalmar, bocaSeca, sentimentoPositivo, dificuldadeRespirar, iniciativaFazerCoisas, reacaoExagerada, tremor, entrarPanico, sentirNervoso,
	esperancaFuturo, agitacao, dificuldadeRelaxar, desanimo, intolerancia, entrarEmPanico, entusiasmo, valorComoPessoas, sensibilidade, 
	funcionamentoCoracao, assustado, vidaSemSentido, sentirRidiculo
; 

void Depressao();
void Ansiedade();
void Estresse();

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf(
		"O algoritimo aceita qualquer numero inteiro, por�m, para a escala funcionar, deve inserir:\n"
		"*0 - N�o se aplicou de maneira alguma.\n"
		"*1 - Aplicou-se em algum grau, ou por algum tempo.\n"
		"*2 - Aplicou-se em um grau consider�vel, ou por uma boa parte do tempo.\n"
		"*3 - Aplicou-se muito, ou na maioria do tempo.\n\n\n"
	);
	
	printf("Tive dificuldade em acalmar-me? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &acalmar);
	printf("Salvo %d\n", acalmar);
	
	printf("\nEstava consciente que minha boca estava seca? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &bocaSeca);
	printf("Salvo %d\n", bocaSeca);
	
	printf("\nParecia n�o conseguir ter nenhum sentimento positivo? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &sentimentoPositivo);
	printf("Salvo %d\n", sentimentoPositivo);
	
	printf("\nSenti dificuldade em respirar (ex. respira��o excessivamente r�pida, falta de ar, na aus�ncia de atividades f�sica)? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &dificuldadeRespirar);
	printf("Salvo %d\n", dificuldadeRespirar);
	
	printf("\nTive dificuldade em tomar iniciativa para fazer as coisas? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &iniciativaFazerCoisas);
	printf("Salvo %d\n", iniciativaFazerCoisas);
	
	printf("\nTive a tend�ncia de reagir de forma exagerada a situa��es \n");
	printf("De 0 a 3 \n");
	scanf("%d", &reacaoExagerada);
	printf("Salvo %d\n", reacaoExagerada);
	
	printf("\nMe senti tremores (ex. nas m�os)? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &tremor);
	printf("Salvo %d \n", tremor);
	
	printf("\nMe senti que estava geralmente muito nervoso? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &sentirNervoso);
	printf("Salvo %d \n", sentirNervoso);
	
	printf("\nPreocupei-me com situa��es em que eu pudesse entrar em p�nico e parecesse rid�culo? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &sentirRidiculo);
	printf("Salvo %d \n", sentirRidiculo);
	
	printf("\nMe senti que n�o tinha nada a esperar do futuro? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &esperancaFuturo);
	printf("Salvo %d \n", esperancaFuturo);
	
	printf("\nMe senti que estava agitado? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &agitacao);
	printf("Salvo %d \n", agitacao);
	
	printf("\nTive dificuldade em relaxar? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &dificuldadeRelaxar);
	printf("Salvo %d \n", dificuldadeRelaxar);
	
	printf("\nSenti-me desanimado e deprimido? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &desanimo);
	printf("Salvo %d \n", desanimo);
	
	printf("\nFui intolerante com as coisas que impediam-me de continuar o que eu estava fazendo? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &intolerancia);
	printf("Salvo %d \n", intolerancia);
	
	printf("\nSenti que ia entrar em p�nico? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &entrarPanico);
	printf("Salvo %d \n", entrarPanico);
	
	printf("\nN�o consegui me entusiasmar com nada? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &entusiasmo);
	printf("Salvo %d \n", entusiasmo);
	
	printf("\nSenti que n�o tinha muito valor como pessoa? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &valorComoPessoas);
	printf("Salvo %d \n", valorComoPessoas);
	
	printf("\nSenti que estava sens�vel? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &sensibilidade);
	printf("Salvo %d \n", sensibilidade);
		
	printf("\nEu estava consciente do funcionamento/batimento do meu cora��o na aus�ncia de esfor�o f�sico? (ex. sensa��o de aumento da frequ�ncia card�aca, disritmia card�aca)\n");
	printf("De 0 a 3 \n");
	scanf("%d", &funcionamentoCoracao);
	printf("Salvo %d \n", funcionamentoCoracao);
	
	printf("\nSenti-me assustado sem ter uma boa raz�o? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &assustado);
	printf("Salvo %d \n", assustado);
	
	printf("\nSenti que a vida estava sem sentido? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &vidaSemSentido);
	printf("Salvo %d \n", vidaSemSentido);
	
//	void Ansiedade(int ansiedade);
	int ansiedade = bocaSeca + dificuldadeRespirar + tremor + sentirRidiculo + entrarPanico + funcionamentoCoracao + assustado;
	ansiedade = ansiedade*2;
	
	int depressao = sentimentoPositivo + iniciativaFazerCoisas + esperancaFuturo + desanimo + entusiasmo + valorComoPessoas + vidaSemSentido;
	depressao = depressao*2;
	
	int estresse = acalmar + reacaoExagerada + sentirNervoso + agitacao + dificuldadeRelaxar + intolerancia + sensibilidade;
	estresse = estresse*2;
	
	printf("\nPontos em ansiedade: %d \n", ansiedade);
	if(ansiedade < 7){
		printf("Normal ou leve. \n");
	}
	if(ansiedade >= 8 && ansiedade <= 9){
		printf("\nAnsiedade em n�vel m�nimo \n");
	}
	if(ansiedade >= 10 && ansiedade <= 14){
		printf("\nAnsiedade em n�vel moderado \n");
	}
	if(ansiedade >= 15 && ansiedade <= 19){
		printf("\nAnsiedade em n�vel grave \n");
	}
	if(ansiedade >= 20){
		printf("\nAnsiedade em n�vel muito grave \n");
	}
	
	printf("\nPontos em depress�o: %d \n", depressao);
	if(depressao < 9){
		printf("Normal ou leve. \n");
	}
	if(depressao >= 10 && depressao <= 13){
		printf("\nDepress�o em n�vel m�nimo \n");
	}
	if(depressao >= 14 && depressao <= 20){
		printf("\nDepress�o em n�vel moderado \n");
	}
	if(depressao >= 21 && depressao <= 27){
		printf("\nDepress�o em n�vel grave \n");
	}
	if(depressao >= 28){
		printf("\nDepress�o em n�vel muito grave \n");
	}
	
	printf("\nPontos em estresse: %d \n", estresse);
	if(estresse < 14){
		printf("Normal ou leve. \n");
	}
	if(estresse >= 15 && estresse <= 18){
		printf("\nEstresse em n�vel m�nimo \n");
	}
	if(estresse >= 19 && estresse <= 25){
		printf("\nEstresse em n�vel moderado \n");
	}
	if(estresse >= 26 && estresse <= 33){
		printf("\nEstresse em n�vel grave \n");
	}
	if(estresse >= 34){
		printf("\nEstresse em n�vel muito grave \n");
	}
	
	return 0;
}

//void Ansiedade(
//	int bocaSeca, 
//	int dificuldadeRespirar, 
//	int tremor, 
//	int sentirRidiculo, 
//	int entrarPanico, 
//	int funcionamentoCoracao, 
//	int assustado 
//) {
//	int ansiedade;
//	
//	ansiedade =  bocaSeca + dificuldadeRespirar + tremor + sentirRidiculo + entrarPanico + funcionamentoCoracao + assustado;
//	printf("%d", ansiedade);
//	
//	return  ansiedade;
//	
//}
