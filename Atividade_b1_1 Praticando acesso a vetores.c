/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float rl[4];
    float cgp[5];
    float li[4];
    float cma[6];
    float java[5];
    int i;
    float maior, menor,soma, total_rl, total_cgp, total_li, total_cma, total_java, nota_final;
    
   
    for(i=0; i<4; i++) {
        
        printf("Entre como a %i nota do candidato em Raciocínio lógico:", i+1);
        scanf("%f", &rl[i]);
             if(rl[i]<0){
             printf("Entre como a nota igual ou maior que zero do candidato em Raciocínio lógico:");
        }
    }
    
    maior = rl[0];
    for (i=0; i<4; i++){
        if(rl[i]>maior){
            maior = rl[i];
        }
    }
    
    menor = rl[0];
    for (i=0;i<4; i++){
        if(rl[i]< menor)
        menor = rl[i];
    }
    
    soma=0;
    for(i=0; i<4; i++){
        soma = soma + rl[i];
    }
    
    total_rl = soma - (maior + menor);
    
    // fim de rl
        
            for(i=0; i<5; i++) {
        
        printf("Entre como a %i nota do candidato em conceitos de gerenciamento de projetos:", i+1);
        scanf("%f", &cgp[i]);
             if(cgp[i]<0){
             printf("Entre como a nota igual ou maior que zero do candidato em conceitos de gerenciamento de projetos:");
        }
    }
    
    maior = cgp[0];
    for (i=0; i<5; i++){
        if(cgp[i]>maior){
            maior = cgp[i];
        }
    }
    
    menor = cgp[0];
    for (i=0;i<5; i++){
        if(cgp[i]< menor)
        menor = cgp[i];
    }
    
    soma=0;
    for(i=0; i<5; i++){
        soma = soma + cgp[i];
    }
    
    total_cgp = soma - (maior + menor);
    // fim de cgp
    
    
        for(i=0; i<4; i++) {
        
        printf("Entre como a %i nota do candidato em lingua inglesa:", i+1);
        scanf("%f", &li[i]);
             if(li[i]<0){
             printf("Entre como a nota igual ou maior que zero do candidato em lingua inglesa:");
        }
    }
    
    maior = li[0];
    for (i=0; i<4; i++){
        if(li[i]>maior){
            maior = li[i];
        }
    }
    
    menor = li[0];
    for (i=0;i<4; i++){
        if(li[i]< menor)
        menor = li[i];
    }
    
    soma=0;
    for(i=0; i<4; i++){
        soma = soma + li[i];
    }
   
    total_li = soma - (maior + menor);
    
    // fim de lingua inglesa
    
        for(i=0; i<6; i++) {
        
        printf("Entre como a %i nota do candidato em conceitos de metodologia ágil:", i+1);
        scanf("%f", &cma[i]);
             if(cma[i]<0){
             printf("Entre como a nota igual ou maior que zero do candidato em conceitos de metodologia ágil:");
        }
    }
    
    maior = cma[0];
    for (i=0; i<6; i++){
        if(cma[i]>maior){
            maior = cma[i];
        }
    }
    
    menor = cma[0];
    for (i=0;i<6; i++){
        if(cma[i]< menor)
        menor = cma[i];
    }
    
    soma=0;
    for(i=0; i<6; i++){
        soma = soma + cma[i];
    }
    
    total_cma = soma - (maior + menor);
    
    // fim de cma
    
        for(i=0; i<5; i++) {
        
        printf("Entre como a %i nota do candidato em java:", i+1);
        scanf("%f", &java[i]);
             if(java[i]<0){
             printf("Entre como a nota igual ou maior que zero do candidato em java:");
        }
    }
    
    maior = java[0];
    for (i=0; i<5; i++){
        if(java[i]>maior){
            maior = java[i];
        }
    }
    
    menor = java[0];
    for (i=0;i<5; i++){
        if(java[i]< menor)
        menor = java[i];
    }
    
    soma=0;
    for(i=0; i<5; i++){
        soma = soma + java[i];
    }
    
    total_java = soma - (maior + menor);
    
    nota_final = total_rl + total_cgp + total_li + total_cma + total_java;
    
        printf("nota Raciocínio lógico = %2.f\n", total_rl);
        printf("nota Raciocínio lógico = %2.f\n", total_cgp);
        printf("nota Raciocínio lógico = %2.f\n", total_li);
        printf("nota Raciocínio lógico = %2.f\n", total_cma);
        printf("nota Raciocínio lógico = %2.f\n", total_java);
        printf("nota Raciocínio lógico = %2.f\n", nota_final);
    
    
    return 0;
}
