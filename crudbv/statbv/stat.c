#include "stat.h"
#include<stdio.h>
#include<string.h>
int nbe( char * filename, int id ){ 

    int  n=0;
    UserMAG u;
    FILE * f=fopen(filename,"r");
    if(f!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %d %d %d %d %d %d %s %s ",u.UserNom,u.UserPrenom,&u.UserCIN,&u.UserNumBV,&u.UserRole,&u.UserGenre,&u.UserVote,&u.UserDate.JourUser,&u.UserDate.MoisUser,&u.UserDate.AnneeUser,u.UserLogin,u.UserPassword)!=EOF)
        {
           
              if(u.UserNumBV==id)
                    {
                  if (u.UserVote==1)
			n = n+1 ;
                

                    }

       }
fclose(f);


   }
   return n ;
}
  
void taux ( char * filename , float * tn, float * te){
observateurMG o;
int x=0,y=0;
FILE * f=fopen(filename,"r");
  
    if(f==NULL)
       printf("le fichier introuvable");
    else
      {
     while(fscanf(f,"%d %s %s %s %s %d %d %d %d\n",&o.id,o.nom,o.prenom,o.nationalite,o.profession,&o.sexe,&o.date.jour,&o.date.mois,&o.date.annee)!=EOF)
{
     if (strcmp(o.nationalite,"tunisienne")==0)
	x=x+1;
     else y=y+1;
}
     *tn=((float)x/(x+y))*100;
     *te=((float)y/(x+y))*100;



     }
    fclose(f);
}

