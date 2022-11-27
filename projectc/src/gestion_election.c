#include "gestion_election.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>


enum {
ID_ELECTION,
NB_HABITANT,
REGION,
MUNICIPALITE,
DATE,
TOGGLE_COLUMN,
N_COLUMN
};
int ajouter_election(election e)
{
    FILE *f;
f=fopen("src/gestion_election.txt","a");
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
    FILE *f=fopen("src/gestion_election.txt","r");
    FILE *f2=fopen("src/nouv.txt","w");
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
    remove("src/gestion_election.txt");
    rename("src/nouv.txt","src/gestion_election.txt");
    return tr;

}
int supprimer_election(int id)
{
    int tr=0;
    election e;
    FILE *f=fopen("src/gestion_election.txt","r");
    FILE *f2=fopen("src/nouv.txt","w");
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
    remove("src/gestion_election.txt");
    rename("src/nouv.txt","src/gestion_election.txt");
    return tr;
}

election chercher_election(int id)
{
    election e;
    int tr;
    FILE *f=fopen("src/gestion_election.txt", "r");
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

void afficher_election(GtkWidget *pListView)
{

  


GtkWidget *pScrollbar;
GtkListStore *pListStore;
GtkTreeViewColumn *pColumn;
GtkCellRenderer *pCellRenderer;
pListStore = gtk_tree_view_get_model(pListView);
election x;
FILE *f;
char var1[50],var2[50],var3[50];
f=fopen("src/gestion_election.txt","r");

void toggled_func(GtkCellRendererToggle *cell_renderer, gchar *path, gpointer user_data)
{
 
    GtkTreeIter iter;
    GtkTreePath *ppath;
    gboolean boolean;
 
 
// convertir la chaine path en GtkTreePath 
 
     ppath = gtk_tree_path_new_from_string (path);
 
// convertir la valeure recuperée en GtkTreeIter  
     gtk_tree_model_get_iter (GTK_TREE_MODEL (user_data),
                           &iter,
                           ppath);
//  utiliser la variable GtkTreeIter pour acceder la valeure booleaine                           
     gtk_tree_model_get (GTK_TREE_MODEL (user_data),
                           &iter,
                           4,&boolean,
                           -1);
// changer cette valeure booleaine (! boolean )                          
     gtk_list_store_set (user_data, &iter,
                      4, !boolean,
                      -1);
 
 
}




if (pListStore == NULL) {





pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("id_election",
pCellRenderer,
"text", ID_ELECTION,
NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);


pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("nb_habitant",
pCellRenderer,
"text", NB_HABITANT,
NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("region",
pCellRenderer,
"text", REGION,
NULL);


gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("municipalite",
pCellRenderer,
"text", MUNICIPALITE,
NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("date_election",
pCellRenderer,
"text", DATE,
NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_toggle_new();
pColumn=gtk_tree_view_column_new_with_attributes("select",pCellRenderer,"active", TOGGLE_COLUMN,
NULL);
g_signal_connect(G_OBJECT(pCellRenderer), "toggled", (GCallback)toggled_func, pListStore);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);	




}

pListStore = gtk_list_store_new(N_COLUMN, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);


while(fscanf(f,"%d %d %s %s %d %d %d\n",&x.id_election,&x.nb_habitant,x.region,x.municipalite,&x.date_election.jour,&x.date_election.mois,&x.date_election.annee)!=EOF)
	{
sprintf(var1,"%d",x.id_election);
sprintf(var2,"%d",x.nb_habitant);
sprintf(var3,"%d/%d/%d",x.date_election.jour,x.date_election.mois,x.date_election.annee);

///
GtkTreeIter pIter;
gtk_list_store_append(pListStore, &pIter);
gtk_list_store_set(pListStore, &pIter,ID_ELECTION,var1,NB_HABITANT,var2,REGION,x.region,MUNICIPALITE,x.municipalite,DATE,var3,TOGGLE_COLUMN,FALSE,-1);



	

}

fclose(f);

gtk_tree_view_set_model(GTK_TREE_VIEW(pListView),GTK_TREE_MODEL(pListStore)); 
g_object_unref(pListStore);
       
}


