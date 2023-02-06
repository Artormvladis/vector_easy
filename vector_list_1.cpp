#include "eaasy_list.h"
void itc_rev_list(vector <int> &mass){
    if(mass.size>0){
      int a,b,c;
      b=mass.size;
        for(int i=mass; i<=b//2; i++){
          a=mass[i];
          c=mass[b-i];
          mass[i]=c;
          mass[b-i]=a;
        }
    }
}
void itc_rev_par_list(vector <int> &mass){
  if(mass.size>0){
    
  }
}
