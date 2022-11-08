#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef user_H_INCLUDED
#define user_H_INCLUDED


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


int AjouterUtilisateur(char * userfile, UserMAG user);
int ModifierUtilisateur(int userid, UserMAG edituser , char * userfile);
int SupprimerUtilisateur(int userid, char * userfile);
UserMAG ChercherUtilisateur(int userid, char * userfile);
int CalculAgeUtilisateur(UserMAG user , char userfile []);
int CalculElecteurBV(UserMAG user , char userfile []);
#endif 
