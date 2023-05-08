#include <stdio.h>
#include <string.h> //manipular strings
#include <locale.h> // Biblioteca de Linguagens

void Depressao();
void Ansiedade();
void Estresse();

int 
	acalmar, bocaSeca, sentimentoPositivo, dificuldadeRespirar, iniciativaFazerCoisas, reacaoExagerada, tremor, situacoesPanico, sentirNervoso,
	esperancaFuturo, agitacao, dificuldadeRelaxar, desanimo, intolerancia, entrarEmPanico, entusiasmo, valorParaPessoas, sensibilidade, 
	funcionamentoCoracao, assustado, vidaSemSentido
; 
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
	scanf("%d", &acalmar);
	printf("Salvo %d\n", acalmar);
	
	printf("\nEstava consciente que minha boca estava seca? \n");
	scanf("%d", &bocaSeca);
	printf("Salvo %d\n", bocaSeca);
	
	printf("\nParecia não conseguir ter nenhum sentimento positivo? \n");
	scanf("%d", &sentimentoPositivo);
	printf("Salvo %d\n", sentimentoPositivo);
	
	printf("\nSenti dificuldade em respirar (ex. respiração excessivamente rápida, falta de ar, na ausência de atividades física)? \n");
	scanf("%d", &dificuldadeRespirar);
	printf("Salvo %d\n", dificuldadeRespirar);
	
	printf("\nTive dificuldade em tomar iniciativa para fazer as coisas? \n");
	scanf("%d", &iniciativaFazerCoisas);
	printf("Salvo %d\n", iniciativaFazerCoisas);
	
	printf("\nTive a tendência de reagir de forma exagerada a situações \n");
	scanf("%d", &reacaoExagerada);
	printf("Salvo %d\n", reacaoExagerada);
	
	printf("\nSenti tremores (ex. nas mãos)? \n");
	scanf("%d", &tremor);
	printf("Salvo %d \n", tremor);
	
	return 0;
}
