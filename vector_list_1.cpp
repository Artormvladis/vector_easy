#include "easy_list.h"
void itc_rev_list(vector <int> &mass){
    if(mass.size()>0){
      int a;
        for(int i=0; i<=mass.size()/2; i++){
          a=mass[i];
          mass[i]=mass[mass.size()-1];
          mass[mass.size()-1]=a;
        }}}
void itc_rev_par_list(vector <int> &mass){
  if(mass.size()>0){
    int a;
      for(int i=0; i<mass.size()-1; i+=2){
          a=mass[i];
          mass[i]=mass[i+1];
          mass[i+1]=a;
      }}}
void itc_rshift_list(vector <int> &mass){
    if(mass.size()>0){
        int a;
        a=mass[mass.size()];
        for(int i=mass.size()-1; i>0; i--){
            mass[i]=mass[i-1];
            mass[0]=a;
        }}}
void itc_super_shift_list(vector <int> &mass, int n){
    if(mass.size()>0){
        if(n>0){
            for(int i=0; i<(n%mass.size()); i++){
                itc_rshift_list(mass);
            }
        }else if(n<0){
            n=n*(-1);
            for(int i=0; i<n%mass.size()); i++){
                int a;
                a=mass[0];
                for(int i1=1; i<mass.size(); i1++){
                    mass[i1-1]=mass[i1];
                    mass[mass.size()]=a;
                }}}}}
