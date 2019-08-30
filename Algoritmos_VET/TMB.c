#include<stdio.h>

//describe: calcula a taxa metabolica basal.
//autor: GumblarZ < Jc0d3001@outlook.com >
//version: 0.1
//license: MIT License


int main(){
int idade = 11;
float tmb;
float peso = 30.00;
char sexo = 'masculino';


// Taxa metabolica Basal
if(sexo == 'masculino'){
	if(idade >= 10 && idade < 18){
	tmb = (17.5 * peso)+651;
	}
	if(idade >= 18 && idade < 30){
	tmb = (15.3 * peso) + 679;
	}
	if(idade >= 30 && idade < 60){
	tmb = (11.6 * peso) + 879;
	}
	if(idade >= 60){
	tmb = (13.5 * peso) + 487;
	}
}
if(sexo == 'feminino'){
	if(idade >= 10 && idade < 18){
	tmb = (12.2 * peso)+746;
	}
	if(idade >= 18 && idade < 30){
	tmb = (14.7 * peso) + 496;
	}
	if(idade >= 30 && idade < 60){
	tmb = (8.5 * peso) + 829;
	}
	if(idade >= 60){
	tmb = (10.5 * peso) + 596;
	}
	
}
return 0;
}
