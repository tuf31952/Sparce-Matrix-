#include <iostream>
#include <iomanip>
#include <stdio.h> 
#include <stdlib.h> 
#include "Example.h"

 using namespace std;

int main(){

    MySparseMatrix a(1000000,1000000);

    a(1,1) = 27.0; a(2,2) = 27.0; a(3,3) = 27.0;

    MySparseMatrix b;

    MySparseMatrix c;

    b = a;

    //c = a + b;

    c.debug(std::cout);

    c.resize(10,10);

    c(1,1) = -1.0;

    c(10,10) = -1.0;


}