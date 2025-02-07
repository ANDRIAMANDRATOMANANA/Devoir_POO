#include <iostream>
#include "ComplRationn.h"
using namespace std;
CRationn::CRationn()
{

}
CRationn::~CRationn()
{
    
}
void CRationn::getData()
{
   cout<<"num_reel=";
   cin>>num_a;
   cout<<"deno_reel=";
   cin>>deno_a;
   cout<<"num_im=";
   cin>>num_b;
   cout<<"deno_im=";
   cin>>deno_b;
}
CRationn CRationn::add(CRationn C2)
{
    CRationn S;
    S.num_a=(num_a*C2.deno_a)+(C2.num_a*deno_a);//num_reel
    S.deno_a=(deno_a*C2.deno_a);//deno_reel
    S.num_b=(num_b*C2.deno_b)+(C2.num_b*deno_b);//num_imaginaire
    S.deno_b=(deno_b*C2.deno_b);//deno_imaginaire
    return S;
}
void CRationn::display()
{
    cout<<num_a<<"/"<<deno_a<<"+";
    cout<<"("<<num_b<<"/"<<deno_b<<")i"<<endl;
}