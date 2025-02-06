#include <iostream>
#include "complexe.h"
using namespace std;
 Complexe::Complexe()
        {
           

        }
        Complexe::~Complexe()
        {
            
        }
void Complexe::getChange()
        {
            int aa,bb;
            cout<<"a=";
            cin>>aa;
            cout<<"b=";
            cin>>bb;
            a=aa;
            b=bb;
            
        }
Complexe Complexe::add(Complexe C2)
{
    Complexe S;
    S.a=(a+C2.a);
    S.b=(b+C2.b);
    return S;
}
void Complexe::affichage()
{
    cout<<a<<"+"<<b<<"b";
}