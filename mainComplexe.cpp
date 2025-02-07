#include <iostream>
#include <string>
#include "ComplRationn.h"


using namespace std;

int main()
{
    
    CRationn C1,C2,S;
    C1.getData();//on obtient a+ib avec a rationnel et b rationnel
    C2.getData();//on obtient c+id avec c rationnel et d rationnel
    S=C1.add(C2);
    S.display();


    return 0;

}