#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "gestion_election.h"

void
on_button_yah_Aziz_Deconnecter_clicked (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_supprimer_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_Modifier_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_Ajout_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_Rech_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_Actualiser_clicked  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_Confsupp_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_back_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_yah_Aziz_confirmer_clicked   (GtkWidget       *objet,
                                        gpointer         user_data)
{
election e;
int a;
GtkWidget *id=lookup_widget(GTK_WIDGET(objet),"entry6");
GtkWidget *nbh=lookup_widget(GTK_WIDGET(objet),"entry7");
GtkWidget *combobox1=lookup_widget(GTK_WIDGET(objet),"combobox_yah_Aziz_region");
GtkWidget *combobox2=lookup_widget(GTK_WIDGET(objet),"combobox_yah_Aziz_municipalite");
GtkWidget *jr=lookup_widget(GTK_WIDGET(objet),"spinbutton_yahaziz_jour");
GtkWidget *m=lookup_widget(GTK_WIDGET(objet),"spinbutton_yahaziz_mois");
GtkWidget *ann=lookup_widget(GTK_WIDGET(objet),"spinbutton_yahaziz_annee");

e.id_election=(int)gtk_entry_get_text(GTK_ENTRY(id));
e.nb_habitant=(int)gtk_entry_get_text(GTK_ENTRY(nbh));
strcpy(e.region,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)));
strcpy(e.municipalite,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2)));
e.date_election.jour= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jr));
e.date_election.mois= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(m));
e.date_election.annee= (int)gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ann));
a=ajouter_election(e);
}

