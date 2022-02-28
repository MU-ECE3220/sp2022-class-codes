#include <iostream>
#ifndef FELIDEA_H
#define FELIDEA_H

class Felidae {
    public:
        void set_species(std::string species);
        std::string get_species();
        bool hunt();
        virtual void make_sound();
    protected:
        std::string _species;
};
#endif