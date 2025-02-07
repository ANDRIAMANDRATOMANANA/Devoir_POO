//#include <iostream>
using namespace std;
class CRationn
{
    private:
        int num_a,num_b,deno_a,deno_b;
        
    public:
        CRationn();
        ~CRationn();
        void getData();
        CRationn add(CRationn C2);
        void display();
        


};