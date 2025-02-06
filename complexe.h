#include <iostream>

using namespace std;

using namespace std;
class Complexe
 {
    private:
        int a;
        int b;
    public:
        Complexe();
        ~Complexe();
        void getData()
        {
            cout<<"a=";
            cin>>a;
            cout<<"b=";
            cin>>b;
        }
        void getChange();
        Complexe add(Complexe R1);
        void affichage();

 };