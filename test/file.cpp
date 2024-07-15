#include<iostream>
#include "classes/pralka.cpp"

int main(){

    std::cout << "Siema"<<std::endl;

    pralka czerwona;
    pralka *wskaz;
    pralka &ruda = czerwona;

    czerwona.temperatura_prania = 60;
    wskaz = &czerwona;
    wskaz -> temperatura_prania = 60;

    ruda.temperatura_prania = 60;

    czerwona.pierz();
    wskaz->pierz();
    ruda.pierz();

    

    return 0;
}

