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
		"O algoritimo aceita qualquer numero inteiro, porém, para a escala funcionar, deve inserir:\n"
		"*0 - Não se aplicou de maneira alguma.\n"
		"*1 - Aplicou-se em algum grau, ou por algum tempo.\n"
		"*2 - Aplicou-se em um grau considerável, ou por uma boa parte do tempo.\n"
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
	
	printf("\nParecia não conseguir ter nenhum sentimento positivo? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &sentimentoPositivo);
	printf("Salvo %d\n", sentimentoPositivo);
	
	printf("\nSenti dificuldade em respirar (ex. respiração excessivamente rápida, falta de ar, na ausência de atividades física)? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &dificuldadeRespirar);
	printf("Salvo %d\n", dificuldadeRespirar);
	
	printf("\nTive dificuldade em tomar iniciativa para fazer as coisas? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &iniciativaFazerCoisas);
	printf("Salvo %d\n", iniciativaFazerCoisas);
	
	printf("\nTive a tendência de reagir de forma exagerada a situações \n");
	printf("De 0 a 3 \n");
	scanf("%d", &reacaoExagerada);
	printf("Salvo %d\n", reacaoExagerada);
	
	printf("\nMe senti tremores (ex. nas mãos)? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &tremor);
	printf("Salvo %d \n", tremor);
	
	printf("\nMe senti que estava geralmente muito nervoso? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &sentirNervoso);
	printf("Salvo %d \n", sentirNervoso);
	
	printf("\nPreocupei-me com situações em que eu pudesse entrar em pânico e parecesse ridículo? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &sentirRidiculo);
	printf("Salvo %d \n", sentirRidiculo);
	
	printf("\nMe senti que não tinha nada a esperar do futuro? \n");
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
	
	printf("\nSenti que ia entrar em pânico? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &entrarPanico);
	printf("Salvo %d \n", entrarPanico);
	
	printf("\nNão consegui me entusiasmar com nada? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &entusiasmo);
	printf("Salvo %d \n", entusiasmo);
	
	printf("\nSenti que não tinha muito valor como pessoa? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &valorComoPessoas);
	printf("Salvo %d \n", valorComoPessoas);
	
	printf("\nSenti que estava sensível? \n");
	printf("De 0 a 3 \n");
	scanf("%d", &sensibilidade);
	printf("Salvo %d \n", sensibilidade);
		
	printf("\nEu estava consciente do funcionamento/batimento do meu coração na ausência de esforço físico? (ex. sensação de aumento da frequência cardíaca, disritmia cardíaca)\n");
	printf("De 0 a 3 \n");
	scanf("%d", &funcionamentoCoracao);
	printf("Salvo %d \n", funcionamentoCoracao);
	
	printf("\nSenti-me assustado sem ter uma boa razão? \n");
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
		printf("\nAnsiedade em nível mínimo \n");
	}
	if(ansiedade >= 10 && ansiedade <= 14){
		printf("\nAnsiedade em nível moderado \n");
	}
	if(ansiedade >= 15 && ansiedade <= 19){
		printf("\nAnsiedade em nível grave \n");
	}
	if(ansiedade >= 20){
		printf("\nAnsiedade em nível muito grave \n");
	}
	
	printf("\nPontos em depressão: %d \n", depressao);
	if(depressao < 9){
		printf("Normal ou leve. \n");
	}
	if(depressao >= 10 && depressao <= 13){
		printf("\nDepressão em nível mínimo \n");
	}
	if(depressao >= 14 && depressao <= 20){
		printf("\nDepressão em nível moderado \n");
	}
	if(depressao >= 21 && depressao <= 27){
		printf("\nDepressão em nível grave \n");
	}
	if(depressao >= 28){
		printf("\nDepressão em nível muito grave \n");
	}
	
	printf("\nPontos em estresse: %d \n", estresse);
	if(estresse < 14){
		printf("Normal ou leve. \n");
	}
	if(estresse >= 15 && estresse <= 18){
		printf("\nEstresse em nível mínimo \n");
	}
	if(estresse >= 19 && estresse <= 25){
		printf("\nEstresse em nível moderado \n");
	}
	if(estresse >= 26 && estresse <= 33){
		printf("\nEstresse em nível grave \n");
	}
	if(estresse >= 34){
		printf("\nEstresse em nível muito grave \n");
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
