#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "gestion_election.h"
#include "bureau.h"


void
on_treeview2_MG_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button5_MG_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button2_MG_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button1_MG_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button3_MG_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton1_MG_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_button4_MG_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton2_MG_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_button7_MG_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button8_MBG_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button2_MBG_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button1_MBG_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton1_MBG_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobutton2_MBG_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobutton3_MBG_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_button7_MBG_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button6_MBG_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button4_MBG_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button5_MBG_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button18_MBG_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton5_MBG_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_button17_MBG_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonUserLOGIN_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonGestionnaireUtilisateurs_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonGestionBV_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonGestionElections_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonUserDisconnect_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeviewUsers_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_buttonBacktoAdminconnected_clicked  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonAddNewUser_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonEdit0User_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonDelete0User_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobuttonUserHomme_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobuttonUserFemme_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_buttonUserAddsave_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonUserCancelAdd_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonOKUserAdded_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobuttonEditUserH_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_radiobuttonEditUserF_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_buttonCancelEdit_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonSaveEditUser_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonYesDeleteUser_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonNoDont_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_Deconnecter_clicked (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_supprimer_clicked   (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_Modifier_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
/*election e;
supprimer_election(e.id_election);

GtkWidget *yahAzizListeElections=lookup_widget(GTK_WIDGET(objet),"yahAzizListeElections");

GtkWidget *yah_aziz_ajouter_moudifier;
yah_aziz_ajouter_moudifier=lookup_widget(GTK_WIDGET(objet),("yah_aziz_ajouter_moudifier"));

gtk_widget_destroy(yahAzizListeElections);

yah_aziz_ajouter_moudifier=create_yah_aziz_ajouter_moudifier();
gtk_widget_show(yah_aziz_ajouter_moudifier);


GtkWidget *id=lookup_widget(yah_aziz_ajouter_moudifier,"entry6");
GtkWidget *nbh=lookup_widget(yah_aziz_ajouter_moudifier,"entry7");
GtkWidget *combobox1=lookup_widget(yah_aziz_ajouter_moudifier,"combobox_yah_Aziz_region");
GtkWidget *combobox2=lookup_widget(yah_aziz_ajouter_moudifier,"combobox_yah_Aziz_municipalite");
GtkWidget *jr=lookup_widget(yah_aziz_ajouter_moudifier,"spinbutton_yahaziz_jour");
GtkWidget *m=lookup_widget(yah_aziz_ajouter_moudifier,"spinbutton_yahaziz_mois");
GtkWidget *ann=lookup_widget(yah_aziz_ajouter_moudifier,"spinbutton_yahaziz_annee");

gtk_entry_set_text(GTK_LABEL(id),e.id_election);
gtk_entry_set_text(GTK_LABEL(nbh),e.nb_habitant);
//gtk_combo_box_set_active_text(GTK_COMBO_BOX(combobox1),e.region);
//gtk_combo_box_set_active_text(GTK_COMBO_BOX(combobox2),e.municipalite);
//gtk_spin_button_set_value_as_int(GTK_SPIN_BUTTON(jr),e.date_election.jour);
//gtk_spin_button_set_value_as_int(GTK_SPIN_BUTTON(m),e.date_election.mois);
//gtk_spin_button_set_value_as_int(GTK_SPIN_BUTTON(ann),e.date_election.annee);
*/
}


void
on_button_yah_Aziz_Ajout_clicked       (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *yahAzizListeElections ,*yah_aziz_ajouter_moudifier ;

yahAzizListeElections=lookup_widget(objet,"yahAzizListeElections");

gtk_widget_destroy(yahAzizListeElections);
yah_aziz_ajouter_moudifier=create_yah_aziz_ajouter_moudifier();
gtk_widget_show(yah_aziz_ajouter_moudifier);
}


void
on_button_yah_Aziz_Rech_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_Actualiser_clicked  (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_Confsupp_clicked    (GtkWidget       *objet,
                                        gpointer         user_data)
{
election a;
supprimer_election(a.id_election);
GtkWidget *yahAzizListeElections=lookup_widget(GTK_WIDGET(objet),"yahAzizListeElections");
GtkWidget *treeview1;
treeview1=lookup_widget(yahAzizListeElections,"treeview1");
afficher_election(treeview1);
gtk_widget_show(treeview1);
}


void
on_button_yah_Aziz_back_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_confirmer_clicked   (GtkWidget       *objet,
                                        gpointer         user_data)
{
/*election e;
char ch1[20];
char ch2[20];
int a;

GtkWidget *listeview = lookup_widget(objet,"treeview1");
GtkWidget *id=lookup_widget(GTK_WIDGET(objet),"entry6");
GtkWidget *nbh=lookup_widget(GTK_WIDGET(objet),"entry7");
GtkWidget *combobox1=lookup_widget(GTK_WIDGET(objet),"combobox_yah_Aziz_region");
GtkWidget *combobox2=lookup_widget(GTK_WIDGET(objet),"combobox_yah_Aziz_municipalite");
GtkWidget *jr=lookup_widget(GTK_WIDGET(objet),"spinbutton_yahaziz_jour");
GtkWidget *m=lookup_widget(GTK_WIDGET(objet),"spinbutton_yahaziz_mois");
GtkWidget *ann=lookup_widget(GTK_WIDGET(objet),"spinbutton_yahaziz_annee");


strcpy(ch1,gtk_entry_get_text(GTK_ENTRY(id)));
strcpy(ch2,gtk_entry_get_text(GTK_ENTRY(nbh)));


if( (strcmp(ch1,"")==0) || (strcmp(ch2,"")==0) )
{ 
GtkWidget *dialog3;
dialog3=create_dialog3() ;
gtk_widget_show(dialog3) ;
}

else{
e.id_election=atoi(gtk_entry_get_text(GTK_ENTRY(id)));
e.nb_habitant=atoi(gtk_entry_get_text(GTK_ENTRY(nbh)));
strcpy(e.region,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)));
strcpy(e.municipalite,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2)));
e.date_election.jour= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jr));
e.date_election.mois= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(m));
e.date_election.annee= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ann));
GtkWidget *dialog4;
dialog4=create_dialog4() ;
gtk_widget_show(dialog4) ;
a=ajouter_election(e);
afficher_election(listeview);

}*/

}

void
on_treeview1_row_activated             (GtkWidget     *objet_graphique,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

/*
  	gchar *region;
	gchar *municipalite;
        
	gchar *id_election;
	gchar *nbh_election;

	GtkWidget *gestion_compte;
	GtkWidget *listeview;
        GtkWidget *supprimer_compte__;
        GtkTreeIter iter;
FILE *f;
char var[50],var1[50],var2[50];
int jd, md, ad,id,nbh;


listeview = lookup_widget(objet_graphique,"treeview1");

GtkTreeModel *model = gtk_tree_view_get_model (GTK_TREE_VIEW(lookup_widget(objet_graphique,"treeview1")));
 

   if (gtk_tree_model_get_iter(model, &iter, path)) {
      gtk_tree_model_get (GTK_LIST_STORE(model), &iter, 0, &id_election, 1, &nbh_election, 2, &region, 3, &municipalite, -1);
 f = fopen("src/gestion_election.txt","r");
 while(fscanf(f,"%d %d %s %s %d %d %d\n",&id,&nbh,var1,var2,&jd,&md,&ad) != EOF)
    {
      if (strcmp(id,id_election)==0)
     
break;
	
 
    }                                                      
 } fclose(f);
gestion_compte = lookup_widget(objet_graphique,"yahAzizListeElections");

GtkWidget *input1 = lookup_widget(gestion_compte,"entry6");
GtkWidget *input2=lookup_widget(gestion_compte,"entry7");

GtkWidget *input3=lookup_widget(gestion_compte,"combobox_yah_Aziz_region");

GtkWidget *input4=lookup_widget(gestion_compte,"combobox_yah_Aziz_municipalite");
GtkWidget *input5=lookup_widget(gestion_compte,"spinbutton_yahaziz_jour");
GtkWidget *input6=lookup_widget(gestion_compte,"spinbutton_yahaziz_mois");

GtkWidget *input7=lookup_widget(gestion_compte,"spinbutton_yahaziz_annee");

gtk_entry_set_text(GTK_ENTRY(input1),id_election);
gtk_entry_set_text(GTK_ENTRY(input2),nbh_election);
gtk_entry_set_text(GTK_ENTRY(input3),region);
gtk_entry_set_text(GTK_ENTRY(input4),municipalite);


gtk_spin_button_set_value(input5,jd);
gtk_spin_button_set_value(input6,md);
gtk_spin_button_set_value(input7,ad);
afficher_election(listeview);*/

}


void
on_closebutton_controle_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *dialog3=lookup_widget(GTK_WIDGET(objet),("dialog3"));

gtk_widget_destroy(dialog3);

}


void
on_closebutton_succes_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *dialog4=lookup_widget(GTK_WIDGET(objet),("dialog4"));

gtk_widget_destroy(dialog4);
GtkWidget *yah_aziz_ajouter_moudifier = create_yah_aziz_ajouter_moudifier ();
gtk_widget_destroy(yah_aziz_ajouter_moudifier);
GtkWidget *yahAzizListeElections=lookup_widget(GTK_WIDGET(objet),("yahAzizListeElections"));
yahAzizListeElections=create_yahAzizListeElections() ;
gtk_widget_show(yahAzizListeElections) ;

}


void
on_button_return_ajout_bv_JE_clicked   (GtkWidget      *button,
                                        gpointer         user_data)
{
GtkWidget *fenetre_ajout;
GtkWidget *fenetre_afficher;


fenetre_ajout=lookup_widget(GTK_WIDGET(button),"Jamel1");
gtk_widget_destroy(fenetre_ajout);
fenetre_afficher=lookup_widget(GTK_WIDGET(button),"jamel2");
fenetre_afficher=create_jamel2();
gtk_widget_show(fenetre_afficher) ;


}


void
on_button_ajout_bv_JE_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
int a;
GtkWidget *id_bv,*id_ag,*munic,*ecole,*num_salle,*cap_obs,*cap_elect;
GtkWidget *tree_bv;
bureau b;



id_bv=lookup_widget(GTK_WIDGET(objet),"entry_Id_bv_JE");
id_ag=lookup_widget(GTK_WIDGET(objet),"entry_id_ag_JE");
munic=lookup_widget(GTK_WIDGET(objet),"combo_munic_JE");
ecole=lookup_widget(GTK_WIDGET(objet),"combo_ecol_JE");
num_salle=lookup_widget(GTK_WIDGET(objet),"spin_num_sal_JE");
cap_obs=lookup_widget(GTK_WIDGET(objet),"spin_cap_obs_JE");
cap_elect=lookup_widget(GTK_WIDGET(objet),"spin_cap_elec_JE");




b.id_bureau=atoi(gtk_entry_get_text(GTK_ENTRY(id_bv)));
b.id_agent=atoi(gtk_entry_get_text(GTK_ENTRY(id_ag)));

strcpy(b.municipalite,gtk_combo_box_get_active_text(GTK_COMBO_BOX(munic)));
strcpy(b.ecole,gtk_combo_box_get_active_text(GTK_COMBO_BOX(ecole)));

b.num_salle= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num_salle));
b.capacite_des_observateurs= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(cap_obs));
b.capacite_des_electeurs= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(cap_elect));


a=ajouter(b,"/home/jamel/Downloads/projectc/src/bureau.txt");


GtkWidget *fenetre_ajout;
GtkWidget *fenetre_afficher;


fenetre_ajout=lookup_widget(GTK_WIDGET(objet),"Jamel1");
gtk_widget_destroy(fenetre_ajout);
fenetre_afficher=lookup_widget(GTK_WIDGET(objet),"jamel2");
fenetre_afficher=create_jamel2();
gtk_widget_show(fenetre_afficher) ;
tree_bv=lookup_widget(fenetre_afficher,"treebv");
afficher_bureau(tree_bv);



}


void
on_button_return_affic_bv_JE_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{


}


void
on_button_recher_affic_bv_JE_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_modif_affic_bv_JE_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_ajout_affic_bv_JE_clicked    (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *fenetre_ajout;
GtkWidget *fenetre_afficher;


fenetre_afficher=lookup_widget(GTK_WIDGET(button),"jamel2");

gtk_widget_destroy(fenetre_afficher);

fenetre_ajout=lookup_widget(GTK_WIDGET(button),"Jamel1");
fenetre_ajout=create_Jamel1();

gtk_widget_show(fenetre_ajout) ;

}


void
on_button_supp_affic_bv_JE_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_confir_supp_bv_JE_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_modif_bv_JE_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_return_modif_bv_JE_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_treeview_bv_JE_row_activated        (GtkTreeView     *treeview,GtkTreePath     *path,GtkTreeViewColumn *column,gpointer         user_data)
{
 
  	gchar *ecole;
	gchar *municipalite;
	gchar *id_bureau;
	gchar *id_agent;
	gchar *num_salle;
	gchar *capacite_des_observateurs;
	gchar *capacite_des_electeurs;
	
	bureau b;
	int x;

        GtkTreeIter iter;


GtkTreeModel *model = gtk_tree_view_get_model (treeview);
 

   if (gtk_tree_model_get_iter(model, &iter, path)) {
      gtk_tree_model_get (GTK_LIST_STORE(model), &iter, 0, &id_bureau, 1, &municipalite, 2, &ecole, 3, &id_agent,4,&num_salle,5,&capacite_des_observateurs,6,capacite_des_electeurs, -1);
	b.id_bureau=atoi(id_bureau);
	strcpy(b.municipalite,municipalite);
	strcpy(b.ecole,ecole);
	b.id_agent=atoi(id_agent);
	b.num_salle=atoi(num_salle);
	b.capacite_des_observateurs=atoi(capacite_des_observateurs);
	b.capacite_des_electeurs=atoi(capacite_des_electeurs);
 	x=supprimer((int *)id_bureau,"/home/jamel/Downloads/projectc/src/bureau.txt");
	
        afficher_bureau(treeview);
    }                                                      
 



}

