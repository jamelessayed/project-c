#include "gestion_election.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int ajouter_election(election e)
{
    FILE *f;
f=fopen("gestion_election.txt","a");
    if(f!=NULL)
    {
	fprintf(f,"%d %d %s %s %d %d %d\n",e.id_election,e.nb_habitant,e.region,e.municipalite,e.date_election.jour,e.date_election.mois,e.date_election.annee);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier_election(int id,election nouv )
{
    int tr=0;
    election anc;
    FILE *f=fopen("gestion_election.txt","r");
    FILE *f2=fopen("nouv.txt","w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %s %s %d %d %d\n",&anc.id_election,&anc.nb_habitant,anc.region,anc.municipalite,&anc.date_election.jour,&anc.date_election.mois,&anc.date_election.annee)!=EOF)
        {
            if(anc.id_election==id)
            {
                fprintf(f2,"%d %d %s %s %d %d %d\n",nouv.id_election,nouv.nb_habitant,nouv.region,nouv.municipalite,nouv.date_election.jour,nouv.date_election.mois,nouv.date_election.annee);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %s %s %d %d %d\n",anc.id_election,anc.nb_habitant,anc.region,anc.municipalite,anc.date_election.jour,anc.date_election.mois,anc.date_election.annee);

        }
    }
    fclose(f);
    fclose(f2);
    remove("gestion_election.txt");
    rename("nouv.txt","gestion_election.txt");
    return tr;

}
int supprimer_election(int id)
{
    int tr=0;
    election e;
    FILE *f=fopen("gestion_election.txt","r");
    FILE *f2=fopen("nouv.txt","w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %s %s %d %d %d\n",&e.id_election,&e.nb_habitant,e.region,e.municipalite,&e.date_election.jour,&e.date_election.mois,&e.date_election.annee)!=EOF)
        {
            if(e.id_election==id)
                tr=1;
            else
                fprintf(f2,"%d %d %s %s %d %d %d\n",e.id_election,e.nb_habitant,e.region,e.municipalite,e.date_election.jour,e.date_election.mois,e.date_election.annee);
        }
    }
    fclose(f);
    fclose(f2);
    remove("gestion_election.txt");
    rename("nouv.txt","gestion_election.txt");
    return tr;
}

election chercher_election(int id)
{
    election e;
    int tr;
    FILE *f=fopen("gestion_election.txt", "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %d %s %s %d %d %d\n",&e.id_election,&e.nb_habitant,e.region,e.municipalite,&e.date_election.jour,&e.date_election.mois,&e.date_election.annee)!=EOF)
        {
            if(e.id_election==id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        e.id_election=-1;
    return e;

}
