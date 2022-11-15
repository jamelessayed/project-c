#include <stdio.h>
#include <string.h>
#include "stat.h"
int main()
{ int n  ;
float tn,te,y;
/*observateurMG o1={1,"jamel","essayed","tunisienne","etudiant",1,4,4,2000};
observateurMG o2={1,"houssem","bouechri","marrocan","etudiant",1,2,4,2010};
observateurMG o3={1,"houssem","henchri","gafsi","etudiant",1,4,4,2020};
UserMAG u1={"jamel","essayed",97241,12,5,1,1,4,4,2000,"haha","haha"};
UserMAG u2={"jamel","essayed",97241,12,5,1,-1,4,4,2000,"haha","haha"};
UserMAG u3={"jamel","essayed",97241,12,5,1,-1,4,4,2000,"haha","haha"};
UserMAG u11={"jamel","essayed",97241,12,5,1,1,4,4,2000,"haha","haha"};
UserMAG u4={"jamel","essayed",97241,12,5,1,-1,4,4,2000,"haha","haha"};
UserMAG u5={"jamel","essayed",97241,12,5,1,1,4,4,2000,"haha","haha"};
UserMAG u6={"jamel","essayed",97241,12,5,1,1,4,4,2000,"haha","haha"};
UserMAG u7={"jamel","essayed",97241,12,5,1,1,4,4,2000,"haha","haha"};
UserMAG u8={"jamel","essayed",97241,12,5,1,1,4,4,2000,"haha","haha"};
UserMAG u9={"jamel","essayed",97241,12,5,1,1,4,4,2000,"haha","haha"};
UserMAG u10={"jamel","essayed",97241,12,5,1,1,4,4,2000,"haha","haha"};*/

n=nbe("user.txt",12);

printf("\nla nbre des electeures est %d dans le bureau 12\n",n);


taux ("obs.txt",&tn,&te);
printf("\nle taux des obs tunisiennes %.2f %% ,et le taux des obs etranges %.2f %%\n",tn,te);
y=TVB("user.txt");

printf("\nle taux de votes blancs est %.2f %% \n",y);

 







return 0 ;
}
