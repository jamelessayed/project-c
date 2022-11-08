#include "user.h"
#include<stdio.h>
int AjouterUtilisateur(char * userfile, UserMAG user)
{
    FILE * f=fopen("userfile.txt", "a");
    if(f!=NULL)
    {
        fprintf(f,"%s\n",user.UserNom);
        fprintf(f,"%s\n",user.UserPrenom);
        fprintf(f,"%d\n",user.UserCIN);
        fprintf(f,"%d\n",user.UserNumBV);
        fprintf(f,"%d\n",user.UserRole);
        fprintf(f,"%d\n",user.UserGenre);
        fprintf(f,"%d\n",user.UserDate.JourUser);
        fprintf(f,"%d\n",user.UserDate.MoisUser);
        fprintf(f,"%d\n",user.UserDate.AnneeUser);
        fprintf(f,"%s\n",user.UserLogin);
        fprintf(f,"%s\n",user.UserPassword);
        fprintf(f,"%d\n",user.UserVote);
        fclose(f);
        return 1;
    }
    else
        return 0;
}

int ModifierUtilisateur(int userid, UserMAG edituser, char * userfile)
{
    UserMAG u;
    FILE * f=fopen(userfile, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
        return 0;
    else
    {
        while(fscanf(f,"%s %s %s %s %d %d %d %d %d %d %d %d",u.UserNom,u.UserPrenom,u.UserLogin,u.UserPassword,&u.UserCIN,&u.UserRole,&u.UserVote,&u.UserGenre,&u.UserNumBV,&u.UserDate.JourUser,&u.UserDate.MoisUser,&u.UserDate.AnneeUser)!=EOF)
        {
            if(u.UserCIN!=userid)
            {
                fprintf(f2,"%s %s %s %s %d %d %d %d %d %d %d %d",u.UserNom,u.UserPrenom,u.UserLogin,u.UserPassword,u.UserCIN,u.UserRole,u.UserVote,u.UserGenre,u.UserNumBV,u.UserDate.JourUser,u.UserDate.MoisUser,u.UserDate.AnneeUser);
            }


            else
            {
                  fprintf(f,"%s\n",edituser.UserNom);
        fprintf(f,"%s\n",edituser.UserPrenom);
        fprintf(f,"%d\n",edituser.UserCIN);
        fprintf(f,"%d\n",edituser.UserNumBV);
        fprintf(f,"%d\n",edituser.UserRole);
        fprintf(f,"%d\n",edituser.UserGenre);
        fprintf(f,"%d\n",edituser.UserDate.JourUser);
        fprintf(f,"%d\n",edituser.UserDate.MoisUser);
        fprintf(f,"%d\n",edituser.UserDate.AnneeUser);
        fprintf(f,"%s\n",edituser.UserLogin);
        fprintf(f,"%s\n",edituser.UserPassword);
        fprintf(f,"%d\n",edituser.UserVote);
            }



        }
        fclose(f);
        fclose(f2);
        remove(userfile);
        rename("aux.txt", userfile);
        return 1;
    }

}

int SupprimerUtilisateur(int userid, char * userfile)
{
    UserMAG u;
    FILE * f=fopen(userfile, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
        return 0;
    else
    {
        while(fscanf(f,"%s %s %s %s %d %d %d %d %d %d %d %d",u.UserNom,u.UserPrenom,u.UserLogin,u.UserPassword,&u.UserCIN,&u.UserRole,&u.UserVote,&u.UserGenre,&u.UserNumBV,&u.UserDate.JourUser,&u.UserDate.MoisUser,&u.UserDate.AnneeUser)!=EOF)
        {
            if(u.UserCIN!=userid)
               {

                fprintf(f2,"%s %s %s %s %d %d %d %d %d %d %d %d",u.UserNom,u.UserPrenom,u.UserLogin,u.UserPassword,u.UserCIN,u.UserRole,u.UserVote,u.UserGenre,u.UserNumBV,u.UserDate.JourUser,u.UserDate.MoisUser,u.UserDate.AnneeUser);

       } }
        fclose(f);
        fclose(f2);
        remove(userfile);
        rename("aux.txt", userfile);
        return 1;
    }
}

UserMAG ChercherUtilisateur(int userid, char * userfile)
{
    UserMAG u;
    int tr=0;
    FILE * f=fopen(userfile, "r");
    if(f!=NULL )
    {
        while(fscanf(f,"%s %s %s %s %d %d %d %d %d %d %d %d",u.UserNom,u.UserPrenom,u.UserLogin,u.UserPassword,&u.UserCIN,&u.UserRole,&u.UserVote,&u.UserGenre,&u.UserNumBV,&u.UserDate.JourUser,&u.UserDate.MoisUser,&u.UserDate.AnneeUser)!=EOF && tr==0)
        {
            if(userid==u.UserCIN)
                tr=1;
        }
    }
    if(tr==0)
        u.UserCIN=-1;
    return u;

}















