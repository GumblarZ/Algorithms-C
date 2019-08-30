#include<stdio.h>
#include<stdlib.h>

//describe: Identifica se o tipo do triangulo
//autor: GumblarZ < Jc0d3001@outlook.com >
//version: 0.1
//license: MIT License

int main(){
int x;
int face[3];

for(int i=0;i<3;i++){
printf("digite o º%d",i+1);
printf(" valor \n");
scanf("\n %i", &x);
face[i] = x;
}

if(face[0] == face[1] && face[0] == face[2]){
printf("EQUILATERAL ");
return 0;
}
if(face[0] != face[1] && face[0] != face[2]){
printf("SCALENE");
}
if(face[0] == face[1] || face[0] == face[2]){
printf("ISOSCELES");
}

return 0;
} 
