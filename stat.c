#include "stat.h"
#include<stdio.h>
int nbobserver( char * filename)
{
int i=0;
observateurMG o;
    FILE * f=fopen(filename, "r");
   
    if(f==NULL)
       return 0;
else
    {
while(fscanf(f,"%d %s %s %s %s %d %d %d %d\n",&o.id,o.nom,o.prenom,o.nationalite,o.profession,&o.sexe,&o.date.jour,&o.date.mois,&o.date.annee)!=EOF)
{
i++;

}
        fclose(f);
        return i ;
    }
  
}

int nbe( char *userfile, int id ){ 

    int  n =0;
    UserMAG u;
    FILE * f=fopen("userfile.txt", "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %d %d %d %d %d %d %d %d",u.UserNom,u.UserPrenom,u.UserLogin,u.UserPassword,&u.UserCIN,&u.UserRole,&u.UserVote,&u.UserGenre,&u.UserNumBV,&u.UserDate.JourUser,&u.UserDate.MoisUser,&u.UserDate.AnneeUser)!=EOF)
        {
           
              if(u.UserNumBV==id)
                    {
                  if u.UserVote==1; 
			n = n+1 ;
                

                    }

       }
fclose(f);
return n ;

   }
   else return 0;
}
  
void taux ( char * user/observer , float * tn, float * te);
    










void trier(char * Filename){
int i=0,k=0,j=0;
char aux;
observateurMG tab[1000];
observateurMG o;
    FILE * f=fopen(filename, "r");
   
	if(f==NULL)
		printf("impossible d'ouvrir le fichier");
	else{
		while(fscanf(f,"%d %s %s %s %s %d %d %d %d\n",&o.id,o.nom,o.prenom,o.nationalite,o.profession,&o.sexe,&o.date.jour,&o.date.mois,&o.date.annee)!=EOF){
			tab[i]=o;
			i++;	}
		while(k!=i+1){
			if (strcmp(tab[k].nom,tab[k+1].nom)>0){
				aux=tab[k+1].nom;
				tab[k+1].nom=tab[k].nom;
				tab[k].nom=aux;}
			else k++;	}
		while (j!=i+1){
			fprintf(f,"%d %s %s %s %s %d %d %d %d\n",tab[j].id,tab[j].nom,tab[j].prenom,tab[j].nationalite,tab[j].profession,tab[j].sexe,tab[j].date.jour,tab[j].date.mois,tab[j].date.annee);
			j++;	}
		fclose(f);	
		}
}







