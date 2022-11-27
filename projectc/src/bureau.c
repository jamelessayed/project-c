#include "bureau.h"
#include<stdio.h>
#include "bureau.h"
#include <string.h>

#include <stdlib.h>
#include <gtk/gtk.h>
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


enum {
ID_BUREAU,
MUNICIPALITE,
ECOLE,
ID_AGENT,
NUM_SALLE,
CAPACITE_DES_OBSERVATEURS,
CAPACITE_DES_ELECTEURS,
N_COLUMN
//TOGGLE_COLUMN,
};


void afficher_bureau(GtkWidget *pListView)
{

 


GtkListStore *pListStore;

GtkTreeViewColumn *pColumn;

GtkCellRenderer *pCellRenderer;

GtkTreeIter pIter;


bureau b;
int id_bureau;
 char municipalite[50];
  char ecole[50];
  int num_salle;
  int id_agent;
  int capacite_des_observateurs;
  int capacite_des_electeurs;
char var1[50],var2[50],var3[50],var4[50],var5[50];

pListStore=NULL;


FILE *f;

pListStore=gtk_tree_view_get_model(pListView);



/*
void toggled_func(GtkCellRendererToggle *cell_renderer, gchar *path, gpointer user_data)
{
 
    GtkTreeIter iter;
    GtkTreePath *ppath;
    gboolean boolean;
 
 
// convertir la chaine path en GtkTreePath 
 
     ppath = gtk_tree_path_new_from_string (path);
 
// convertir la valeure recuperée en GtkTreeIter  
     gtk_tree_model_get_iter (GTK_TREE_MODEL (user_data),&iter,ppath);
//  utiliser la variable GtkTreeIter pour acceder la valeure booleaine                           
     gtk_tree_model_get (GTK_TREE_MODEL (user_data),&iter,4,&boolean,-1);
// changer cette valeure booleaine (! boolean )                          
     gtk_list_store_set (user_data, &iter,4, !boolean,-1);
 
 
}

*/


if (pListStore== NULL) {

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("id_bureau",pCellRenderer,"text", ID_BUREAU,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);


pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("municipalite",pCellRenderer,"text",MUNICIPALITE,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("ecole",pCellRenderer,"text", ECOLE,NULL);

gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("id_agent",pCellRenderer,"text", ID_AGENT,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("num_salle",pCellRenderer,"text", NUM_SALLE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("capacite_des_observateurs",pCellRenderer,"text", CAPACITE_DES_OBSERVATEURS,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);

pCellRenderer = gtk_cell_renderer_text_new();
pColumn = gtk_tree_view_column_new_with_attributes("capacite_des_electeurs",pCellRenderer,"text", CAPACITE_DES_ELECTEURS,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);


/*pCellRenderer = gtk_cell_renderer_toggle_new();
pColumn=gtk_tree_view_column_new_with_attributes("select",pCellRenderer,"active", TOGGLE_COLUMN,NULL);
g_signal_connect(G_OBJECT(pCellRenderer), "toggled", (GCallback)toggled_func, pListStore);
gtk_tree_view_append_column(GTK_TREE_VIEW(pListView), pColumn);	*/



pListStore = gtk_list_store_new(N_COLUMN, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f=fopen("/home/jamel/Downloads/projectc/src/bureau.txt","r");
if (f==NULL){return;}
else{f=fopen("/home/jamel/Downloads/projectc/src/bureau.txt","a+");
while(fscanf(f,"%d %s %s %d %d %d %d\n",&b.id_bureau,b.municipalite,b.ecole,&b.num_salle,&b.id_agent,&b.capacite_des_observateurs,&b.capacite_des_electeurs)!=EOF)
	{
sprintf(var1,"%d",b.id_bureau);
sprintf(var2,"%d",b.id_agent);
sprintf(var3,"%d",b.num_salle);
sprintf(var4,"%d",b.capacite_des_observateurs);
sprintf(var5,"%d",b.capacite_des_electeurs);

///

gtk_list_store_append(pListStore, &pIter);
gtk_list_store_set(pListStore, &pIter,ID_BUREAU,var1,MUNICIPALITE,b.municipalite,ECOLE,b.ecole,ID_AGENT,var2,NUM_SALLE,var3,CAPACITE_DES_ELECTEURS,var4,CAPACITE_DES_OBSERVATEURS,var4,-1);


}

fclose(f);

gtk_tree_view_set_model(GTK_TREE_VIEW(pListView),GTK_TREE_MODEL(pListStore)); 
g_object_unref(pListStore);
       }
}
}


























