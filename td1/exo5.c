#include<stdio.h>
int main(){
int h,heur,minute,seconde;

printf("entrer votre temps en seconde ");
scanf("%d",&h);
heur=h/3600;
minute=(h%3600)/60;
seconde=(h%3600)%60;

printf("le nombre de secondes:");
printf("%d",h);
printf("corespond a %d heur ",heur);
if(heur>1) printf("s");
printf("%d minute ",minute);
if(heur>1) printf("s");
printf("%d seconde ",seconde);
if(seconde>1) printf("s");


return 0;
}
