#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <exception>
#include <stdexcept>
#include <iostream>
#include <cmath>
#include "Triangle.h"
#include "RightTriangle.h"


int main() {
    setlocale(LC_ALL, "ru");
    Triangle Test;
    Test.Read();
    if (Test.is_possible()) {
        Test.display();
        Test.mediani();
        Test.parallel_line();
    RightTriangle Test1;
    Test1.Read();
    if (Test1.is_possibleRight()) {
       
        Test1.mediani();
        Test1.inscribed_circle();
    }
    else {
        cout << "ERROR ЭТО НЕ ПРЯМОУГОЛЬНЫЙ ТРЕУГОЛЬНИК" << endl;
    
    }
   
       
        
    }
    else {
        cout << "ERROR ЭТО НЕ ТРЕУГОЛЬНИК" << endl;
    }
   
    return 0;
}