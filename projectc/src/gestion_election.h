
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>

typedef struct{
int jour,mois,annee;
}date;
typedef struct{
int id_election;
int nb_habitant;
char region[20];
char municipalite[20];
date date_election;
}election;


int ajouter_election(election e );
int modifier_election( int id,election nouv);
int supprimer_election(int id );
election chercher_election(int id);
void afficher_election(GtkWidget *pListView);



