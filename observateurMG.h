#ifndef observateurMG_H_INCLUDED
#define observateurMG_H_INCLUDED
#include <stdio.h>
typedef struct 
{ 
    int jours;
    int mois;
    int annee;
} date;
typedef struct
{
    int id_obs;
    char nom_obs[20];
    char prenom_obs[20];
    char nationalite_obs[20];
    char profession_obs[20];
    int sexe_obs;
    date date_obs;
} observateurMG;
int ajouter(char *, observateurMG );
int modifier( char *, int, observateurMG );
int supprimer(char *, int );
observateurMG chercher(char *, int);

#endif 
