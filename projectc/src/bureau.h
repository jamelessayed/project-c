#ifndef BUREAU_H_INCLUDED
#define BUREAU_H_INCLUDED

#include <gtk/gtk.h>


typedef struct{
    int id_bureau;
    char municipalite[50];
    char ecole[50];
    int num_salle;
    int id_agent;
    int capacite_des_observateurs;
    int capacite_des_electeurs;
    
    
}bureau; 

int ajouter(bureau b , char filename []);
int modifier(int id, bureau nouv , char * filename);
int supprimer(int id, char * filename);
bureau chercher(int id, char * filename);
void afficher_bureau(GtkWidget *pListView);


#endif // BUREAU_H_INCLUDED

