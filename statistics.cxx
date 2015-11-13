#include <cmath>
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------

void Zufallszahlen(const int N, double* p){
  for (int i=0;i<N;i++){ 
   
    p[i] = rand() % 101  ; //Zahl im Intervall von 0-100
    p[i] = p[i]/100;
  }
   
   
}

double Mean(double* p,const int N){
  
 
  double sum = 0;
  
  for (int i = 0; i<N ; i++){
   sum = p[i] + sum;
    
  }
    
  double mean = sum/N;
  return mean;

  
}

double Var(double* p, const int N, double m){

  double sum = 0;
  for (int i=0;i<N;i++){
    sum = (p[i]-m)*(p[i]-m);
    }
    
  double var = sum/N;
  return var;
}





int main(){
   srand(time(NULL));
   const int N = 100;
   double p[N]; //array with N values  
   double mean, var;

   Zufallszahlen(N,p);
   mean = Mean(p,N);
   var = Var(p,N,mean);


   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
