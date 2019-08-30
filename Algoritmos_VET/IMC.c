#include<stdio.h>
#include<stdlib.h>

//describe: Identifica o indice de massa corporal e o tipo.
//autor: GumblarZ < Jc0d3001@outlook.com >
//version: 0.1
//license: MIT License


int main(){
int idade;
double peso,altura,imc;
peso = 70.00;
altura = 1.70; 
imc = peso/(altura*altura);
printf("%f",imc);
printf("\n");

if(idade >= 60){
	if(imc < 22.00){
	printf("Magreza");
	}
	if(imc >= 22.00 && imc <= 27.00){
	printf("Eutofia");
	}
	if(imc > 27.00){
	printf("Excesso de Peso");
	}
}else{
//classificacao de imc
if(imc < 16.00){
printf("Magreza Grau 3");
}
if(imc >= 16.00 && imc < 17.00){
printf("Magreza Grau 2");
}
if(imc >= 17.00 && imc < 18.50){
printf("Magreza Grau 1");
}
if(imc >= 18.50 && imc < 25.00){
printf("Eutofia");
}
if(imc >= 25.00 && imc < 30.00){
printf("Pre-Obesidade");
}
if(imc >= 30.00 && imc < 35.00){
printf("Obeidade Grau 1");
}
if(imc >= 35.00 && imc < 40.00){
printf("Obeidade Grau 2");
}if(imc > 40.00){
printf("Obeidade Grau 3");
}
return 0;

}
