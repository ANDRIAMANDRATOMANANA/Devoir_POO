#include "rationnel.h"
#include <iostream>

using namespace std;
        Rationnel::Rationnel()
        {
           

        }
        Rationnel::~Rationnel()
        {
            
        }
        Rationnel Rationnel::add(Rationnel R2)
        {
            Rationnel S;
            S.num=(num*R2.deno)+(R2.num*deno);
            S.deno=(deno*R2.deno);
            return (S);
        }
        /* void Rationnel::setData(int a,int b)
        {
            num=a;
            deno=b;
        } */
        /*void Rationnel::getData(Rationnel R2)
        {

            cout<<"a=";
            cin>>num;
            cout<<num;
            cout<<"b=";
            cin>>deno;
             cout<<deno;
            cout<<"c=";
            cin>>R2.num;
             cout<<R2.num;
            cout<<"d=";
            cin>>R2.deno;
        }*/
       void Rationnel::getData()
       {
             cout<<"a=";
            cin>>num;
            cout<<"b=";
            cin>>deno;
       }
        
        void Rationnel::affichage()
        {
            cout<<num<<"/"<<deno; 
        }
