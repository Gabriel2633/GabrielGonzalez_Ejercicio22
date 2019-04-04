#include <iostream>
#include <cmath> 
#include <cstdlib>

using std::cout;
using std::endl;
using std::min;


void MCMC(int n);
double f(double x);


int main()
{
  MCMC(1000);
  return 0;
}


void MCMC(int n)
{
 srand48(20);
 double x;
 double propuesta;
 double sigmadelta;
 double r;
 double alfa;
 double xx;
 xx=drand48();
 double salto = 2*xx-sigmadelta;
 int i;
 sigmadelta=1.0;
 x=drand48();
    
 for(i=0;i<n;i++)
 {
     propuesta=x+salto;
     r=min(1.0,f(propuesta)/f(x));
     alfa=drand48();
     
     if(alfa<r)
     {
         x=propuesta;
     }
     else 
     {
         x=x;
     }
     cout << x <<endl;
 }    
}

double f(double x)
{
 return exp(-x+(x/2.0)); 
}


