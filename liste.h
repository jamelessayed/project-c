#ifndef liste_h_INCLUDED
#define liste_h_INCLUDED
typedef struct{
int j;
int m;
int a;
}Date;


typedef struct
{
int id_liste;
int id_election;
Date d;
int id_electeur2;
int id_electeur3;
char orientation [20];
}liste;

int ajouter(char *, liste );
int modifier( char *, int, liste );
int supprimer(char *, int );
liste chercher(char *, int);

#endif // liste_h_INCLUDED


