#include "matrix.h"

int main(int argc, char const *argv[])
{
    Matrix<int> m(2); 
    m.set(0,0,1);
    m.set(0,1,2);
    m.set(1,0,2);
    m.set(1,1,1);
    Matrix<int>* n = new Matrix<int>(2);
    n->set(0,0,1);
    n->set(0,1,2);
    n->set(1,0,2);
    n->set(1,1,1);
    std::cout << "dimension: " << m.get_dimension() << std::endl << " Matrix: " << std::endl << m << std::endl;
    std::cout << "dimension: " << n->get_dimension() << std::endl << " Matrix: " << std::endl << *n << std::endl;
    std::cout << "ergebnis: " << m* (*n) << std::endl;
    return 0;
}
