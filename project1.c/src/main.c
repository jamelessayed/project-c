/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *mahmoud_INTERFACE1;
  GtkWidget *mahmoud_INTERFACE2_MG;
  GtkWidget *Maissa_1;
  GtkWidget *maissa_2;
  GtkWidget *Maissa_3;
  GtkWidget *Maissa_4;
  GtkWidget *Louay2;
  GtkWidget *Jamel_1;
  GtkWidget *jamel_2;
  GtkWidget *WindowAzizUserLogin;
  GtkWidget *windowFixedUserConnected_AG;
  GtkWidget *windowGestionnaireUtilisateurs_AG;
  GtkWidget *windowAddUser;
  GtkWidget *windowUserAddedSucc_AG;
  GtkWidget *windowUserEdit_AG;
  GtkWidget *windowAreUSure_AG;
  GtkWidget *yahAzizLogin;
  GtkWidget *yahAzizListeElections;
  GtkWidget *dialog2;
  GtkWidget *yah_aziz_ajouter_moudifier;
  GtkWidget *Louay1;
  GtkWidget *mahmoud_interface3_MG;
  GtkWidget *jamel3_JE;
  GtkWidget *Supp_JE;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  mahmoud_INTERFACE1 = create_mahmoud_INTERFACE1 ();
  gtk_widget_show (mahmoud_INTERFACE1);
  mahmoud_INTERFACE2_MG = create_mahmoud_INTERFACE2_MG ();
  gtk_widget_show (mahmoud_INTERFACE2_MG);
  Maissa_1 = create_Maissa_1 ();
  gtk_widget_show (Maissa_1);
  maissa_2 = create_maissa_2 ();
  gtk_widget_show (maissa_2);
  Maissa_3 = create_Maissa_3 ();
  gtk_widget_show (Maissa_3);
  Maissa_4 = create_Maissa_4 ();
  gtk_widget_show (Maissa_4);
  Louay2 = create_Louay2 ();
  gtk_widget_show (Louay2);
  Jamel_1 = create_Jamel_1 ();
  gtk_widget_show (Jamel_1);
  jamel_2 = create_jamel_2 ();
  gtk_widget_show (jamel_2);
  WindowAzizUserLogin = create_WindowAzizUserLogin ();
  gtk_widget_show (WindowAzizUserLogin);
  windowFixedUserConnected_AG = create_windowFixedUserConnected_AG ();
  gtk_widget_show (windowFixedUserConnected_AG);
  windowGestionnaireUtilisateurs_AG = create_windowGestionnaireUtilisateurs_AG ();
  gtk_widget_show (windowGestionnaireUtilisateurs_AG);
  windowAddUser = create_windowAddUser ();
  gtk_widget_show (windowAddUser);
  windowUserAddedSucc_AG = create_windowUserAddedSucc_AG ();
  gtk_widget_show (windowUserAddedSucc_AG);
  windowUserEdit_AG = create_windowUserEdit_AG ();
  gtk_widget_show (windowUserEdit_AG);
  windowAreUSure_AG = create_windowAreUSure_AG ();
  gtk_widget_show (windowAreUSure_AG);
  yahAzizLogin = create_yahAzizLogin ();
  gtk_widget_show (yahAzizLogin);
  yahAzizListeElections = create_yahAzizListeElections ();
  gtk_widget_show (yahAzizListeElections);
  dialog2 = create_dialog2 ();
  gtk_widget_show (dialog2);
  yah_aziz_ajouter_moudifier = create_yah_aziz_ajouter_moudifier ();
  gtk_widget_show (yah_aziz_ajouter_moudifier);
  Louay1 = create_Louay1 ();
  gtk_widget_show (Louay1);
  mahmoud_interface3_MG = create_mahmoud_interface3_MG ();
  gtk_widget_show (mahmoud_interface3_MG);
  jamel3_JE = create_jamel3_JE ();
  gtk_widget_show (jamel3_JE);
  Supp_JE = create_Supp_JE ();
  gtk_widget_show (Supp_JE);

  gtk_main ();
  return 0;
}

