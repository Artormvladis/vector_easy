#include "eaasy_list.h"
void itc_rev_list(vector <int> &mass){
    if(mass.size()>0){
      int a,c;
        for(int i=mass; i<=b//2; i++){
          a=mass[i];
          mass[i]=mass[mass.size()-1];
          mass[mass.size()-1]=a;
        }}}
void itc_rev_par_list(vector <int> &mass){
  if(mass.size()>0){
    int a;
      for(int i=0; i<mass.size()-1, i=i+2){
          a=mass[i];
          mass[i]=mass[i+1];
          mass[i+1]=a;
      }}}
void itc_rshift_list(vector <int> &mass){
    if(mass.size()>0){
        int a,b;
        for(int i=1; i<=mass.size(); i++){
            a=mass[i-1];
            b=mass[i];
            mass[i]=mass[i-1];
            
        }}}
