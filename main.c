#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {
//	printf("Programme qui Calcule l'age \n");
//	printf("Entrer l'anne de naissance \n ");
//	
//	int thisyear=2024;
//	int yearbirth;
//	scanf("%d",&yearbirth);
//	int age;
//	age=thisyear-yearbirth;
//	printf("votre age est : %d ans \n",age);
//	
//	//////////////////////////////////////
//	printf("Programme qui calcule le perimetre et la surface d'un rectangle");
//	float largeur;
//	float longeur;
//	float surface;
//	printf("Entre la largeur et la longeur de triangle \n");
//	scanf("%f%f",&largeur,&longeur);
//	
//	
//	surface= largeur*longeur;
//	float perimetre=(largeur+longeur)*2;
//	
//	printf("la surface de triangle %.2f cm \n",surface);
//	printf("le perimete de triangle %.2f cm \n",perimetre);
//
//	///////////////////////////////////////////
//	
//	printf("Un programme qui affiche X � la puissance Y \n");
//	float x;
//	float y;
//	printf("entrer x \n");
//	scanf("%f",&x);
//	printf("entrer y \n");
//	scanf("%f",&y);
//	printf("x a la puissance y = %.2f \n", pow(x,y));
//	 /////////////////////////////////////////////////////
//	 
//	 printf("Un programme qui calcule la somme, le produit, la diff�rence et la division de deux nombre r�els. \n");
//	 float a;
//	 float b;
//	 printf("entrer les deux nombrer pour calculer la somme et le produit et la difference... \n");
//	 scanf("%f%f",&a,&b);
//	 float somme;
//	 float division;
//	 float difference;
//	 float produit;
//	 somme=a+b;
//	 division=a/b;
//	 difference=a-b;
//	 produit=a*b;
//	 printf("la somme de a %.1f et b %.1f est %.1f \n", a,b,somme);
//	 	 printf("le produit  est %.1f \n",produit );
//	 printf("la difference est %.1f \n",difference);
//	 printf("la division est %.1f \n",division);
//	 
//	 //////////////////////////////////////////////////
//	 printf("Un programme qui affiche la somme et la moyenne des notes.\n");
//	printf("entrer les 5 notes.\n");
//	float n1,n2,n3,n4,n5;
//	
//	scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
//	float S=n1+n2+n3+n4+n5;
//	float M=S/5;
//	printf("la somme estt %f \n",S);
//	printf("la moyenne est %f \n",M);
//	float note[5];
//	float initial=0;
//	int i;
//	for (i = 0; i < 5; i++) {
//		printf("entrer les note %d \n ",i+1);
//		scanf("%f",&note[i]);
//		initial+=note[i];
//		
//	}
//	printf("la somme avec boucle %f \n",initial);
//	 
//////////////////////////////////////////////////////////////
//printf("Un programme puis calcule et affiche le volume d�une sph�re.\n");
//printf("entrer le rayon de la sphere\n");
//float r;
//scanf("%f",&r);
//const float pi =3.14;
//float volume=0;
//volume=(4*pi*pow(r,3))/3;
//printf("le volume de la sphere avec le rayon %f est %f \n:",r,volume);
	/////////////////////////////////////////////////////////////////////////
	 	 printf("Un programme qui �change le contenu des variables A et B.\n");
	 	 printf("entrer a \n");
	 	 int a1 ,b1;
	 	 scanf("%d",&a1);
	 	 printf("entrer b \n");
	 	 scanf("%d",&b1);
	 	 int t=a1;
	 	 a1=b1;
	 	 b1=a1;
	 	 b1=t;
	 	 
	 	 
	 	 printf("donc a est %d et b est %d ",a1,b1);
	 	 
	 	 ///////////////////////////////////////
	 printf("Un programme qui convertit en heures, minutes, secondes un temps T (entier) exprim� en secondes.\n");
	  printf("entres les secondes ...\n");
	  int seconde;
	  scanf("%d",&seconde);
	  int heure;
	  int minute;
	  int scd;
	  heure=seconde/3600;
	  minute=(seconde%3600)/60;
	  scd=seconde%60;
	  
	printf("%d secondes = %d heures, %d minutes, %d secondes\n", seconde, heure, minute, scd);
/////////////////////////////////////////////////////////////////
printf("Un programme qui calcule et affiche la distance entre deux points A et B.\n");
printf("entrer les corddone de a\n ");
int xa,xb,ya,yb;
scanf("%d%d",&xa,&ya);
printf("entrer les corddone de b \n ");
scanf("%d%d",&xb,&yb);
float distance;
distance=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
printf("La distance entre A et B est : %.2f\n", distance);

///////////////////////////////////////////////////////////////
printf("entrer un nombre entre 1 et 7 \n");
int day;
scanf("%d",&day);
switch (day){
	case 1 : printf("lundi");
	break;
		case 2 : printf("mardi");
	break;
		case 3 : printf("mercredi");
	break;
		case 4 : printf("jeudi");
	break;
		case 5 : printf("vendredi");
	break;
		case 6 : printf("samedi");
	break;
		case 7 : printf("dimance");
	break;
		default  : printf("error");
	break;
}
	
}




