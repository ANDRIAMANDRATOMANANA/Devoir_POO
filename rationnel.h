using namespace std;
class Rationnel
{
    private:
        int num;
        int  deno;
    public:
         Rationnel add(Rationnel R2);
         //Rationnel getSomme();//affiche la somme des rationnel
         //void setData(int a,int b);//permet de modifier la valeur de l'objet initial
        void getData();
        void affichage();
        
        Rationnel();
        
        ~Rationnel();
        

};