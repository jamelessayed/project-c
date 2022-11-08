#include "observateurMG.h"

int ajouter(char * AjoutObservateur, observateurMG obs )
{
    FILE * f=fopen(AjoutObservateur, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %s %d %d\n",obs.id_obs,obs.nom_obs,obs.prenom_obs,obs.nationalite,obs.profession,obs.sexe_obs,obs.date_obs);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * ModificationObservateur, int id_obs, observateurMG nouv )
{
    int tr=0;
    observateurMG obs;
    FILE * f=fopen(ModificationObservateur, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %d %d\n",&obs.id_obs,&obs.nom_obs,&obs.prenom_obs,&obs.nationalite,&obs.profession,&obs.sexe_obs,&obs.date_obs)!=EOF)
        {
            if(obs.id_obs== id_obs)
            {
                fprintf(f2,"%d %s %s %s %s %d %d\n",nouv.id_obs,nouv.nom_obs,nouv.prenom_obs,nouv.nationalite,nouv.profession,nouv.sexe_obs,nouv.date_obs);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %s %s %s %d %d\n",obs.id_obs,obs.nom_obs,obs.prenom_obs,obs.nationalite,obs.profession,obs.sexe_obs,obs.date_obs);

        }
    }
    fclose(f);
    fclose(f2);
    remove(ModificationObservateur);
    rename("nouv.txt", ModificationObservateur);
    return tr;

}
int supprimer(char * GestionDesObservateurs, int id_obs)
{
    int tr=0;
    observateurMG obs;
    FILE * f=fopen(GestionDesObservateurs, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %d %d\n",&obs.id_obs,&obs.nom_obs,&obs.prenom_obs,&obs.nationalite,&obs.profession,&obs.sexe_obs,&obs.date_obs)!=EOF)
        {
            if(obs.id_obs== id_obs)
                tr=1;
            else
                fprintf(f2,"%d %s %s %s %s %d %d\n",obs.id_obs,obs.nom_obs,obs.prenom_obs,obs.nationalite,obs.profession,obs.sexe_obs,obs.date_obs);
        }
    }
    fclose(f);
    fclose(f2);
    remove(GestionDesObservateurs);
    rename("nouv.txt", GestionDesObservateurs);
    return tr;
}
observateurMG chercher(char * GestionDesObservateurs, int id_obs)
{
    observateurMG obs;
    int tr;
    FILE * f=fopen(GestionDesObservateurs, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %s %s %s %d %d\n",&obs.id_obs,&obs.nom_obs,&obs.prenom_obs,&obs.nationalite,&obs.profession,&obs.sexe_obs,&obs.date_obs)!=EOF)
        {
            if(obs.id_obs== id_obs)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        obs.id_obs=-1;
    return obs;

}

