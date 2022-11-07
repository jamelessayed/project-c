#include "bureau.h"
#include<stdio.h>
int ajouter(bureau b , char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %d %d %d %d\n",b.id_bureau,b.municipalite,b.ecole,b.num_salle,b.id_agent,b.capacite_des_observateurs,b.capacite_des_electeurs);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int id, bureau nouv, char * filename)
{
bureau b;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %d %d %d %d\n",&b.id_bureau,b.municipalite,b.ecole,&b.num_salle,&b.id_agent,&b.capacite_des_observateurs,&b.capacite_des_electeurs)!=EOF)
{
if(b.id_bureau!=id)
        fprintf(f2,"%d %s %s %d %d %d %d\n",b.id_bureau,b.municipalite,b.ecole,b.num_salle,b.id_agent,b.capacite_des_observateurs,b.capacite_des_electeurs);
else
  fprintf(f2,"%d %s %s %d %d %d %d\n",nouv.id_bureau,nouv.municipalite,nouv.ecole,nouv.num_salle,nouv.id_agent,nouv.capacite_des_observateurs,nouv.capacite_des_electeurs);
  

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
  
}

int supprimer(int id, char * filename)
{
bureau b;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %d %d %d %d\n",&b.id_bureau,b.municipalite,b.ecole,&b.num_salle,&b.id_agent,&b.capacite_des_observateurs,&b.capacite_des_electeurs)!=EOF)
{
if(b.id_bureau!=id)
       fprintf(f2,"%d %s %s %d %d %d %d\n",b.id_bureau,b.municipalite,b.ecole,b.num_salle,b.id_agent,b.capacite_des_observateurs,b.capacite_des_electeurs);


}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

bureau chercher(int id, char * filename)
{
bureau b; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %s %s %d %d %d %d\n",&b.id_bureau,b.municipalite,b.ecole,&b.num_salle,&b.id_agent,&b.capacite_des_observateurs,&b.capacite_des_electeurs)!=EOF && tr==0)
{if(id==b.id_bureau)
tr=1;
}
}
if(tr==0)
b.id_bureau=-1;
return b;

}

