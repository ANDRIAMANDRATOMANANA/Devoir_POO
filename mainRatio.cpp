#include <iostream>
#include <string>
#include "rationnel.h"
using namespace std;
int main()
{
    
    Rationnel R1 =Rationnel();
    Rationnel R2 =Rationnel();
    Rationnel S =Rationnel();
   R1.getData();
   R2.getData();
   S=R1.add(R2);
   S.affichage();
   return 0;
}