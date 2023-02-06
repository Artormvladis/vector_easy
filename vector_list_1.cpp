#include "easy_list.h"
void itc_rev_list(vector <int> &mass){
  int a;
  if (mass.size()>0){
    for(int i=0; i<=mass.size()/2; i++){
      a=mass[i];
      mass[i]=mass[mass.size()-1-i];
      mass[mass.size()-1-i]=a;
    }
  }
}
void itc_rshift_list(vector <int> &mass){
  if (mass.size()>0){
  int a= mass[mass.size()-1];
  for(int i=mass.size()-1; i>0; i--) mass[i]=mass[i-1];
  mass[0]=a;
  }
}
