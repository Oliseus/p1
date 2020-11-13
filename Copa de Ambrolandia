#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
	char pais, sexo;
	int idade;
	double preco, desconto = 0; // inicializo o desconto com zero e sobrescrevo caso atenda alguma das condicoes

	scanf(" %c %d %c %lf", &pais, &idade, &sexo, &preco);
	if (idade < 1 || idade > 120)
	{
		printf("idade invalida!");
		return 0; // meu programa já produziu a resposta então já posso para-lo, metodo otimo para evitar que ele faça outra coisa.
	}
	if ( (pais == 'F' || pais == 'C') && idade < 21 )
	{
		printf("nao pode comprar");
		return 0;
	}
	
	if (sexo == 'F')
	{
		desconto = 0.1; // caso o sexo seja feminino tenho um desconto de 10% então sobrescrevo aquele 0
		if (pais == 'A')
		{
			desconto = 0.2;
			preco *= 1 - desconto;
	        printf("R$ %.2lf", preco);
	        return 0;
		}
	}
	if (pais == 'A' && idade < 18)
	{
		desconto = 0.2;
		preco *= 1 - desconto;
	    printf("R$ %.2lf", preco);
	    return 0;
	}
	else if (pais == 'F' || pais == 'C')
	{
		desconto = 0.3;
		preco *= 1 - desconto;
	    printf("R$ %.2lf", preco);
	    return 0;
	}
	else if (pais == 'I' || pais == 'R')
	{
		desconto = 0.3;
		if (idade < 16)
		{
			desconto = 0.4;
		}
		preco *= 1 - desconto;
	    printf("R$ %.2lf", preco);
	    return 0;
	}
	else if (pais == 'B')
	{
		desconto = 0.5;
		preco *= 1 - desconto;
	    printf("R$ %.2lf", preco);
	    return 0;
	}
	preco *= 1 - desconto; // como o enunciado diz, a entrada pode ter todas as iniciais da tabela ascii então terei q calcular mesmo se não tiver desconto
	printf("R$ %.2lf", preco);
	return 0;
}
