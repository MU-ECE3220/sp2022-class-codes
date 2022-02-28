#include "Kitten.hpp"
#include "Tiger.hpp"
#include "Lion.hpp"
#include <vector>

int main(){
    // define a Felidae vector
    std::vector<Felidae*> big_small_cats;
    // create a Kitten object 
    Kitten *k = new Kitten();
    // set species
    k->set_species("Kitten");
    // push back to a vector
    big_small_cats.push_back(k);

    // create a Tiger object (with new)
    Tiger *t = new Tiger();
    // set species
    t->set_species("Truman");

    // push back to vector
    big_small_cats.push_back(t);

    // use a for each loop to iterate the vector
    for(Felidae *f : big_small_cats) {
        f->make_sound();
    }

    // instantiate a Lion and Kitten object to a Felidae class (use new)
    // and set species


	return EXIT_SUCCESS;
}