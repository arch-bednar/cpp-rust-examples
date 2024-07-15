#include<iostream>
#include "urzadzenie.cpp"

class pralka: public urzadzenie{

    public:
        int nr_programu;
        double temperatura_prania;
        char nazwa[80];
        void pierz();
    protected:
        void zastrzezona();
    private:
        void prywatna();
};

void pralka:: pierz(){
    //pierze
    std::cout << "Piorę";
}

void pralka:: zastrzezona(){
    buduj();
}

void pralka:: prywatna(){

}