#include <iostream>

int main() {

    int ar[10] {};  //

    int *ind;   //
    ind = ar;   //

    for(int i = 0; i < sizeof(ar) / sizeof(*ar); i++) {     //
        ind += 1;   
        *ind = i+1;
        std::cout << *ind << std::endl;
    }
}
