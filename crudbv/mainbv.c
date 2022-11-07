#include <stdio.h>
#include <string.h>
#include "bureau.h"

int main()
{
    bureau b1= {1,"tunis","montfleury",2,50,100,10},b2= {2,"tozeur","chebi",3,21,200,5},p3;
    int x=ajouter(b1,"bureau.txt");
    
    
    if(x==1)
        printf("\najout de bureau avec succés");
    else printf("\nechec ajout");
    x=ajouter(b2,"bureau.txt");
    if(x==1)
        printf("\najout de bureau avec succés");
    else printf("\nechec ajout");
        
    x=modifier(1,b2,"bureau.txt" );

    if(x==1)
        printf("\nModification de bureau avec succés");
    else printf("\nechec Modification");
    x=supprimer(1,"bureau.txt" );
    if(x==1)
        printf("\nSuppression de bureau avec succés");
    else printf("\nechec Suppression");
    p3=chercher(3,"bureau.txt" );
    if(p3.id_bureau==-1)
        printf("introuvable\n");
    return 0;
}
