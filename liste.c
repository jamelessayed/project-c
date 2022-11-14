#include "liste.h"
#include<stdio.h>
int ajouter(liste l , char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
      fprintf(f,"%d %d %d/%d/%d/ %d %d %s\n",l.id_liste,l.id_election,l.d.j,l.d.m,l.d.a,l.id_electeur2,l.id_electeur3,l.orientation);
      fclose(f);
      return 1;
    }
    else return 0;
}

int modifier(int id_liste , liste nouv, char * filename)
{
liste l;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %d %d %d %d %s\n",&l.id_liste,&l.id_election,&l.d.j,&l.d.m,&l.d.a,&l.id_electeur2,&l.id_electeur3,l.orientation)!=EOF)
{
if(l.id_liste!=id_liste)
      fprintf(f2,"%d %d %d/%d/%d/ %d %d %s\n",l.id_liste,l.id_election,l.d.j,l.d.m,l.d.a,l.id_electeur2,l.id_electeur3,l.orientation);
else
    fprintf(f2,"%d %d %d/%d/%d/ %d %d %s\n",nouv.id_liste,nouv.id_election,nouv.d.j,nouv.d.m,nouv.d.a,nouv.id_electeur2,nouv.id_electeur3,nouv.orientation);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
  
}

int supprimer(int id_liste , char * filename)
{
liste l;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %d %d %d %d %s\n",&l.id_liste,&l.id_election,&l.d.j,&l.d.m,&l.d.a,&l.id_electeur2,&l.id_electeur3,l.orientation)!=EOF)
{
if (l.id_liste!=id_liste)
            fprintf(f2,"%d %d %d %d %d %d %d %s\n",l.id_liste,l.id_election,l.d.j,l.d.m,l.d.a,l.id_electeur2,l.id_electeur3,l.orientation);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

liste chercher(int id_liste,char * filename)
{liste l; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %d %d %d %d %d %d %s\n",&l.id_liste,&l.id_election,&l.d.j,&l.d.m,&l.d.a,&l.id_electeur2,&l.id_electeur3,l.orientation)!=EOF && tr==0)
{if(id_liste==l.id_liste)
tr=1;
}
}
if(tr==0)
l.id_liste=-1;
return l;

}
