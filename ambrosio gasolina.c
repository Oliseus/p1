#include <stdio.h>

int main(){
    int d, r, l, p, g;
    scanf("%d %d %d %d %d", &d, &r, &l, &p, &g);
    if(l*10>=d){ // o tanque comeca cheio caso a distancia seja suficiente pra n ter q abastecer entao nao vai gastar nada
        printf("Pode viajar.\nR$: %d", r);
    }
    else if(l*10>=d/(p+1)){ // formula para garantir se o carro consegue chegar a um posto de combustivel, vc pode ter o dinheiro que for, mas se o combustivel n durar até o posto n vai adiantar de nada
        d-=l*10;
        r-=g*(d/10); r++; // r++ é equivalente a r = r + 1, isso é para ajustar a quantidade de litros, ex: para d = 15, d/10 = 1, so q 1 litro n é suficiente então boto 1 litro a mais 
        if(d%10==0){
            r--;    // r-- é equivalente a r = r - 1, caso a divisao for exata então não era pra eu ter somado 1 litro entao eu ajusto de volta
        }
        if(r<0){ // 
            puts("Nao pode viajar."); // puts é um printf mais simples
        }
        else{
            printf("Pode viajar.\nR$: %d", r); 
        }
    }
    else{
        puts("Nao pode viajar."); // caso nao consiga chegar no posto  nao pode viajar tambem
    } 
    return 0;
}
