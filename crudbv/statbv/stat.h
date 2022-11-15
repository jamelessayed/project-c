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



int nbe( char * filename, int  id );
float TVB (char * filename);
void taux ( char * filename , float * tn, float * te);




#endif // STAT_H_INCLUDED

