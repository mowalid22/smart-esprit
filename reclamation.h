#ifndef _FONCTION_H_INCLUDED
#define _FONCTION_H_INCLUDED
struct reclamation
{
int id;
char obj[100];
char rec[100];
};
struct reclamation Rec;

int rech (int Numrech);
void AjoutReclam();
void Recherche();
void SupprimerReclamation();
void ModifierReclamation();
void AfficherTt();
#endif
