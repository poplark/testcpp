#include <iostream>

int main(int argc, char** argv)
{
    std::cout<<"arg num: "<< argc <<std::endl;

    for (int i=0; i<argc; i++) {
        std::cout<<"arg {"<<i<<"} value: "<< argv[i] <<std::endl;
    }
    return 0;
}
