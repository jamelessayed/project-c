#include "stat.h"
#include<stdio.h>
#include<string.h>
int nbe( char * filename, int id ){ 

    int  n =0;
    UserMAG u;
    FILE * f=fopen("userfile.txt", "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %d %d %d %d %d %d %d %d",u.UserNom,u.UserPrenom,u.UserLogin,u.UserPassword,&u.UserCIN,&u.UserRole,&u.UserVote,&u.UserGenre,&u.UserNumBV,&u.UserDate.JourUser,&u.UserDate.MoisUser,&u.UserDate.AnneeUser)!=EOF)
        {
           
              if(u.UserNumBV==id)
                    {
                  if (u.UserVote==1)
			n = n+1 ;
                

                    }

       }
fclose(f);
return n ;

   }
   else return 0;
}
  
void taux ( char * filename , float * tn, float * te){
observateurMG o;
int x=0,y=0;
FILE * f=fopen("userfile.txt", "r");
  
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
     *tn=(float)x/(*tn+*te);
     *te=(float)y/(*tn+*te);



     }
    
}

