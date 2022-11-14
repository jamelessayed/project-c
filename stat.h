#ifndef STAT_H_INCLUDED
#define STAT_H_INCLUDED
typedef struct
{
    int jour;
    int mois;
    int annee;
} dateObs;
typedef struct
{
    int id;
    char nom[20];
    char prenom[20];
    char nationalite[20];
    char profession[20];
    int sexe;
    dateObs date;
} observateurMG;
typedef struct{
int JourUser;
int MoisUser;
int AnneeUser;}DateUser;
typedef struct{
char UserNom[20];
char UserPrenom[20];
int UserCIN;
int UserNumBV;
int UserRole;
int UserGenre;
int UserVote;
DateUser UserDate ;
char UserLogin[20]; 
char UserPassword[20];}UserMAG;


//Les listes selon l’ordre decroissant de votes
//int L_ordre( char *fichierListeElectorale, Liste t[], char * fichierusers)
int nbe( char * filename, int ou char * id );
void taux ( char * user/observer , float * tn, float * te);
void trier(char * filename);
int nbobserver( char * filename);



#endif // STAT_H_INCLUDED

