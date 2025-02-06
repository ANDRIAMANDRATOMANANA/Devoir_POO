#include <iostream>
#include <string>
#include "complexe.h"

using namespace std;

int main()
{
    Complexe C1,C2,S;
    C1.getChange();
    C2.getChange();
    S=C1.add(C2);
    S.affichage();
    return 0;

}