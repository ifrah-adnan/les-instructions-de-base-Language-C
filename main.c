#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {
	printf("Programme qui Calcule l'age \n");
	printf("Entrer l'anne de naissance \n ");
	
	int thisyear=2024;
	int yearbirth;
	scanf("%d",&yearbirth);
	int age;
	age=thisyear-yearbirth;
	printf("votre age est : %d ans \n",age);
	
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
	
	printf("Un programme qui affiche X à la puissance Y \n");
	float x;
	float y;
	printf("entrer x \n");
	scanf("%f",&x);
	printf("entrer y \n");
	scanf("%f",&y);
	printf("x a la puissance y = %.2f \n", pow(x,y));
//	 /////////////////////////////////////////////////////
//	 
	 printf("Un programme qui calcule la somme, le produit, la différence et la division de deux nombre réels. \n");
	 float a;
	 float b;
	 printf("entrer les deux nombrer pour calculer la somme et le produit et la difference... \n");
	 scanf("%f%f",&a,&b);
	 float somme;
	 float division;
	 float difference;
	 float produit;
	 somme=a+b;
	 division=a/b;
	 difference=a-b;
	 produit=a*b;
	 printf("la somme de a %.1f et b %.1f est %.1f \n", a,b,somme);
	 	 printf("le produit  est %.1f \n",produit );
	 printf("la difference est %.1f \n",difference);
	 printf("la division est %.1f \n",division);
	 
//	 //////////////////////////////////////////////////
	 printf("Un programme qui affiche la somme et la moyenne des notes.\n");
	printf("entrer les 5 notes.\n");
	float n1,n2,n3,n4,n5;
	
	scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
	float S=n1+n2+n3+n4+n5;
	float M=S/5;
	printf("la somme estt %f \n",S);
	printf("la moyenne est %f \n",M);
	float note[5];
	float initial=0;
	int i;
	for (i = 0; i < 5; i++) {
		printf("entrer les note %d \n ",i+1);
		scanf("%f",&note[i]);
		initial+=note[i];
		
	}
	printf("la somme avec boucle %f \n",initial);
	 
//////////////////////////////////////////////////////////////
//printf("Un programme puis calcule et affiche le volume d’une sphère.\n");
printf("entrer le rayon de la sphere\n");
float r;
scanf("%f",&r);
const float pi =3.14;
float volume=0;
volume=(4*pi*pow(r,3))/3;
printf("le volume de la sphere avec le rayon %f est %f \n:",r,volume);
	/////////////////////////////////////////////////////////////////////////
	 	 printf("Un programme qui échange le contenu des variables A et B.\n");
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
	 	 
//	 	 ///////////////////////////////////////
	 printf("Un programme qui convertit en heures, minutes, secondes un temps T (entier) exprimé en secondes.\n");
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
///////////////////////////////////////////////////////////////////
printf("Un programme qui calcule et affiche la distance entre deux points A et B.\n");
printf("entrer les corddone de a\n ");
int xa,xb,ya,yb;
scanf("%d%d",&xa,&ya);
printf("entrer les corddone de b \n ");
scanf("%d%d",&xb,&yb);
float distance;
distance=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
printf("La distance entre A et B est : %.2f\n", distance);
//
/////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////
printf("Un programme qui retourne si deux nombres entiers donnés sont de même signe ou non. \n");
printf("entre le 1 er nombre \n");
int entier1;
int entier2;
scanf("%d",&entier1);
printf("entre le 2eme nombre \n");
scanf("%d",&entier2);
if(entier1>0 && entier2>0){
	printf("les deux nombres sont de meme signe \n ");

}
else{
	printf("les deux nombrer ont different signe \n");
}

////////////////////////////////////////////////////////////////////
printf("Un programme qui échange les contenus de deux données numérique si elles sont de même signe, sinon il met la somme des deux dans la première donnée et leur produit dans la seconde.\n");

printf("entre le 1 er nombre \n");
int entier1;
int entier2;
int echange;
int sm;
scanf("%d",&entier1);
printf("entre le 2eme nombre \n");
scanf("%d",&entier2);
if(entier1>0 && entier2>0){
	printf("les deux nombres sont de meme signe \n ");
	echange=entier1;
	entier1=entier2;
	entier2=echange;
	printf("le 1 er nombre %d  et le 2 eme nombre %d \n",entier1,entier2);
	

}
else{
	printf("les deux nombrer ont different signe \n");
	
	sm=entier2+entier2;
	printf("les deux nombrer ont different signe donc la somme est %d \n",sm);

}

///////////////////////////////////////////////////////////////////
printf("Un programme qui demande à l’utilisateur le nombre de photocopies effectuées et qui affiche la facture correspondante.");
 printf(" entrer le nombre  de photocopie ?\n");
 int nb;
 float totalPrice;
 
 scanf("%d",&nb);
 if(nb<10){
 	totalPrice=nb*0.30;
 	printf("le prix est %.2f dh",totalPrice);
 }
  else if(nb<20){
 	totalPrice=nb*0.25;
 	printf("le prix est %.2f dh",totalPrice);
 }
   else if(nb>=20){
 	totalPrice=nb*0.20;
 	printf("le prix est %.2f dh",totalPrice);
 }
 
/////////////////////////////////////////////////////////////
printf("Un programme qui demande l’âge d’un enfant à l’utilisateur. Ensuite, il l’informe de sa catégorie : Poussin de 6 à 7 ans, Pupille de 8 à 9 ans, Minime de 10 à 11 ans, Cadet après 12 ans\n");
 printf("entrer votre age \n");
 int age;
 scanf("%d",&age);
 if(age<=7 && age>=6){
 	printf("Poussin");
 }
if(age<=9 && age>=8){
 	printf("Pupille");
 } 
 if(age<=11 && age>=10){
 	printf("Minime");
 }

 if(age>=12){
 	printf("cadet");

}
//////////////////////////////////////////////
printf("Un programme permettant de saisir trois notes (sur 20) d'un étudiant, calculant sa moyenne et affichant cette moyenne avec la mention (Très bien à partir de 16, Bien entre 14 et 16, Assez bien entre 12 et 14, Passable entre 10 et 12, Insuffisant en dessous de 10).\n");
int i;
int note[3];
float moyenne;
int somme=0;

for(i=0;i<3;i++){
printf("Entre la note numero %d\n",i+1);
scanf("%d",&note[i]);
somme+=note[i];
}
moyenne=somme/3;
if(moyenne>=18){
	printf("tres bien ");
}
if(moyenne>=16 && moyenne<18){
	printf("bien");
}
if(moyenne>=14 && moyenne<16){
	printf("assez bien");
}
if(moyenne>=12 && moyenne<14){
	printf("passable");
}
if(moyenne<12){
	printf("Insuffisant");
}

/////////////////////////////
printf("Un programme qui affiche la ou les solutions d’une équation du second degré de la forme ax2 + bx + c.\n");
int a,b,c;
int delta;
printf("entre a \n");
scanf("%d",&a);
printf("entre b \n");
scanf("%d",&b);
printf("entre c \n");
scanf("%d",&c);
delta=pow(b,2)-4*a*c;
	float x1,x2,x0;
	printf("delta %d",delta);

if(delta>0){
	x1=(-b-sqrt(delta))/2*a;
    x2=(-b+sqrt(delta))/2*a;
    printf("la solution est %.2f et %.2f",x1,x2);

}
else if(delta=0){
	x0=-b/(2*a);
	printf(" l'équation admet une solution réelle double notée x0 %d",x0);	
}
else{
	printf("aucune solution");
}
////////////////////////////////////////////////////////////
float prixht,prixttc;
int categorie;
float tauxTVA;


printf("Entrez le prix hors taxe (HT) du produit : \n");
scanf("%f",&prixht);
printf("Entrez la categorie entre 1 et 3 : \n");
scanf("%d",&categorie);
switch (categorie) {
        case 1:
            tauxTVA = 0.05; // TVA de 5%
            break;
        case 2:
            tauxTVA = 0.10; // TVA de 10%
            break;
        case 3:
            tauxTVA = 0.20; // TVA de 20%
            break;
        default:
            printf("Erreur : catégorie non reconnue. Veuillez entrer une catégorie valide (1, 2 ou 3).\n");
            return 1; // Sortie du programme avec une erreur
    }
    
	prixttc=prixht*(tauxTVA+1);
	    printf("Le prix TTC du produit est : %.2f\n", prixttc);

return 0;
	
///////////////////////////////////////////////////////
printf("Un programme qui demande deux nombres entiers et l’une des opérateurs suivant : + , - , * , / puis effectue l’opération correspond et affiche le résultat de cette opération.\n");
int a,b;
char signe;
float result;
printf("entre les 2 nombre \n");
scanf("%d%d",&a,&b);
printf("entre la signe \n");

scanf(" %c",&signe);
if(signe=='+'){
	printf("%d%d \n",a,b);
	result=a+b;
	printf("la somme %f",result);
}
else if(signe=='-'){
	result=a-b;
	printf("%d et %d \n",a,b);

	printf("la diference est %.2f",result);
}
/////////////////////////////////////////////////////
printf("un programme qui demande  a l utilisateur  de saisir un nombre puis\n");
printf("en fonction du nombre affiche un message ");
printf("Veuillez entrer un nombre");
int nb;
scanf("%d",&nb);
	switch (nb){
		case 6:
			printf("le personnage va a droite\n");
			break;
		case 4:
			printf("le personnange va a gauche\n");
			break;
		case 8:
			printf("le personnage va en haut\n");
			break;
		case 2:
			printf("le personnage va en bas \n");
			break;
		default:
			printf("errerur de saisie , le personnage ne bouge pas\n");
			return 1;
			
				
	}
/////////////////////////////////////////////////////////
printf("un programme quii verifie si un nombre est pair ou impaire \n");
printf("Veuillez entrer un nombre\n");
int nb;
scanf("%d",&nb);
if(nb%2==0){
	printf("le nombre est pair\n");
}
else{
	printf("le nombre est impaire\n");
}

////////////////////////////////
printf("programme Pour savoir si une année est bissextile\n");
printf("un programme quii verifie si un nombre est pair ou impaire \n");
printf("Veuillez entrer une annee\n");
int annee;
scanf("%d",&annee);
if((annee%4==0 && annee%100!=0)|| annee%400==0 ){
	printf("l'annee est bissextile'\n");
}
else{
	printf("l'annee nest pas bissextile'\n");
}



}




