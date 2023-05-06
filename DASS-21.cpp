#include <stdio.h>
#include <string.h> //manipular strings
#include <locale.h> // Biblioteca de Linguagens

void Depressao();
void Ansiedade();
void Estresse();

int 
	acalmar, bocaSeca, sentimentoPositivo, dificuldadeAcalmar, iniciativaFazerCoisas, reacaoExagerada, tremor, situacoesPanico, sentirNervoso,
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
	
	printf("\nParecia não conseguir ter nenhum sentimento positivo \n");
	scanf("%d", &sentimentoPositivo);
	printf("Salvo %d\n", sentimentoPositivo);
	
	return 0;
}
