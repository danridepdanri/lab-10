#pragma once
#include "Triangle.h"
class RightTriangle : public Triangle {
public: 
    double ugol_a, ugol_b, ugol_c;
// Edited q
    RightTriangle() : Triangle(){
    storona_a = 0;
    storona_b = 0;
    storona_c = 0;
        a1 = 0;
        a2 = 0;
        b1 = 0;
        b2 = 0;
        c1 = 0;
        c2 = 0;
        med_AB = 0;
        med_BC = 0;
        med_AC = 0;
    }
    RightTriangle(double a, double b, double c, double a1, double a2, double b1, double b2, double c1, double c2, double med_AB, double med_BC, double med_AC) : Triangle(storona_a, storona_b, storona_c, a1, a2, b1, b2, c1, c2, med_AB, med_BC, med_AC) {}
    
    bool is_possibleRight() {
        
        ugol_a = 180/pi * (acos((storona_a * storona_a - storona_b * storona_b - storona_c * storona_c) / (-2 * storona_b * storona_c)));
        ugol_b = 180 / pi * ( asin((storona_b * sin((acos((storona_a * storona_a - storona_b * storona_b - storona_c * storona_c) / (-2 * storona_b * storona_c))))) / storona_a));
        ugol_c = 180 - (ugol_a+ugol_b);
        if (ugol_a == 90 or ugol_b == 90 or ugol_c == 90) {
            cout << "Äŕ, ďđ˙ěîóăîëüíűé ňđĺóăîëüíčę." << endl;
            return true;
        }
        else {
            cout << "Íĺň, íĺ ďđ˙ěîóăîëüíűé ňđĺóăîëüíčę." << endl;
        }
        return false;

    }

    void inscribed_circle() {
       
        float radius;
        if (ugol_a == 0) {
            radius = (storona_a + storona_c - storona_b) / 2;
            cout << "Đŕäčóń âďčńŕííîé îęđóćíîńňč: " << radius << endl;
        }
        else if (ugol_b == 0) {
            radius = (storona_a + storona_b - storona_c) / 2;
            cout << "Đŕäčóń âďčńŕííîé îęđóćíîńňč: " << radius << endl;
        }
        else if (ugol_c == 0) {
            radius = (storona_b + storona_c - storona_a) / 2;
            cout << "Đŕäčóń âďčńŕííîé îęđóćíîńňč: " << radius << endl;
        }

    }
    void circumscribed_circle() {
        ugol_a = cos((pow(storona_b, 2) + pow(storona_c, 2) - pow(storona_a, 2)) / (2 * storona_b * storona_c));
        ugol_b = cos((pow(storona_a, 2) + pow(storona_c, 2) - pow(storona_b, 2)) / (2 * storona_a * storona_c));
        ugol_c = -1 - (ugol_b + ugol_a);
        float radius;
        if (ugol_a == 0) {
            radius = med_BC;
            cout << "Đŕäčóń đďčńŕííîé îęđóćíîńňč: " << radius << endl;
        }
        else if (ugol_b == 0) {
            radius = med_AC;
            cout << "Đŕäčóń îďčńŕííîé îęđóćíîńňč: " << radius << endl;
        }
        else if (ugol_c == 0) {
            radius = med_AB;
            cout << "Đŕäčóń îďčńŕííîé îęđóćíîńňč: " << radius << endl;
        }
    }
};
