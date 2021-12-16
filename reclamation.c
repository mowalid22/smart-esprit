#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#include"fonction.h"

int rech (int Numrech) //fonction_de_recherche
{
FILE*f;
f=fopen("reclamation.txt","r");
do
{
fscanf(f,%d;%s;%s \n",&Rec.id,&Rec.obj,&Rec.rec);
fflush(stdin);
if(Rec.id==Numrech)
{
fclose(f);
return 1;
}
}
while(!feof(f));
fclose(f);
return -1;
void AjoutReclam()
{
FILE*f;
int num; 
f=fopen("reclamation.txt","a");
printf("\n entre le id :");
scanf("%d",&id);
fflush(stdin);
while (rech(num)==1)
{
printf("\n cettre reclamation execite");
printf("\n entrer le numero ");
scanf("%d",&num);
}
Rec.id=num;
printf("\n entre l' objet");
gets(Rec.obj);
fflush(stdin);
printf("\n entre la reclamation");
gets(Rec.rec);
fflush(stdin);
fprintf(f,"%d ;%s ;%s  \n",Rec.id,Rec.obj,Rec.rec);
close(f);
}
void Recherche()
{
int NumR;
printf("entre votre id \n");
scanf("%d",&NumR);
FILE*f
f=fopen("reclamation.txt","r");
do
{

fscanf(f,%d ;%s ;%s  \n ",&Rec.id,&Rec.obj,&Rec.rec);
if (NumR==Rec.id)
{
printf("---- information de reclamation ----\n\n");
printf("numero %d ",Etud.Num);
printf("nom %d ",Etud.Nom);
printf("prenom %d ",Etud.Prenom);
printf("filiere %d ",Etud.Filiere);
}
}
while(!feof(f));
fclose(f);
}
void SupprimerReclamation()
{
char rep;
int NumRech;
printf("entrer le id de reclamation laquelle vous voulez supprimer:");
scanf("%d",&NumRech);
fflush(stdin);
if (rech(NumRech)==1)
{
	printf("voler vous supprimer o/n ");
	scanf("%c",&rep);
	fflush(stdin);
	if (rep =='o' || rep =='O')
	{
	FILE*Fich,*f
	f=fopen("reclamation.txt","r");
	Fich = fopen("Tempreclamation.txt","a");
	do
	{
	fscanf(f,%d ;%s ;%s \n ",&Rec.id,&Rec.obj,&Rec.rec);
	if (NumRech!=Rec.rec)
	{
	fprintf(Fich,"%d ;%s ;%s  \n",Rec.id,Rec.obj,Rec.rec);
	}
}
while(!feof(f));
fclose(Fich);
fclose(f);
remove("reclamation.txt");
rename("Tempreclamation.txt","reclamation.txt");
printf("suppersion effectue avec succes");
}
}
esle
{
printf("\n ce numero d'etudiant n'exsite pas");
}
}
void ModifierReclamation()
{
FILE*f,*Fich; int num,i;
char rep='n';
printf("\n entre l'id de reclamation laquelle vous voulez modifier");
scanf("%d",&num);
fflush(stdin);
if (rech(num)==1)
{
printf("\n voulez vous vraimment modifier");
scanf("%c",&rep);
fflush(stdin);
printf("%c",rep);
if (rep == 'o'|| rep == 'O')
{
f=fopen("reclamation.txt","r");
Fich=fopen("Tempreclamation.txt","a");
do
{
fscanf(f,%d ;%s ;%s  \n ",&Rec.id,&Rec.obj,&Rec.rec);
if(num==Rec.id)
{
Rec.id=Num
printf("\n entre le nov objet");
gets(Rec.obj);
printf("\n entre la novelle reclamation");
gets(Rec.rec);
printf("\n la modification a ressui");
}
fprintf(Fich,"%d ;%s ;%s  \n",Rec.id,Rec.obj,Rec.rec);
}
while (!feof(f));
fclose(f);
fclose(Fich);
remove("reclamation.txt");
rename("Tempreclamation.txt","reclamation.txt");
printf("\n modification effectue avec succes");
}
else
{
printf("\n modification annulle");
}
}
else
{
printf(" \n ce Numéro d 'etudiant n'esxiste pas\n");
}
}
void AfficherTt()
{
FILE*f;
f=fopen("reclamation.txt","r");
printf("\n la liste");
do
{
fscanf(f,%d ;%s ;%s \n ",&Rec.id,&Rec.obj,&Rec.rec);
fflush(srdin);
printf("id %d ",Rec.id);
printf("objet %s ",Rec.obj);
printf("reclamation %s ",Rec.rec);
}
while(!feof(F));
fclose(f);
}
