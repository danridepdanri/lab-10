#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
using namespace std;
const static double pi = 3.14159265;
class Triangle
{
    
public:
    
    double storona_a, storona_b, storona_c; // ����� ������
    double a1, a2, b1, b2, c1, c2; // ���������� ������
    double med_AB, med_BC, med_AC; // �������
    Triangle() : storona_a(0), storona_b(0), storona_c(0), a1(0), a2(0), b1(0), b2(0), c1(0), c2(0), med_AB(0), med_BC(0), med_AC(0) {}
    Triangle(double a, double b, double c, double a1, double a2, double b1, double b2, double c1, double c2, double med_AB, double med_BC, double med_AC) : storona_a(a), storona_b(b), storona_c(c), a1(a1), a2(a2), b1(b1), b2(b2), c1(c1), c2(c2), med_AB(med_AB), med_BC(med_BC), med_AC(med_AC) {}
   // d2 = (�2� �1)2 + (y2� y1)2.
   void storona_point() {
        storona_a = pow(b1 - a1, 2) + (b2 - a2, 2);
        storona_b = pow(c1 - b1, 2) + (c2 - b2, 2);
        storona_c = pow(a1 - c1, 2) + (a2 - c2, 2);
    }
// 1/2 ^1/2(2a^2 + 2b^2 - c^2)    - ������� �
// 1/2 ^1/2(2b^2 + 2c^2 - a^2)    - ������� a
// 1/2 ^1/2(2a^2 + 2c^2 - b^2)    - ������� b
    void mediani() {
        int vib;
        cout << "�������� �����: 1) ������� � ������� AB 2) ������� � ������� BC 3) ������� � ������� AC: " << endl;
        cin >> vib;
        if (vib == 1) {
        
            med_AB = 0.5 * pow(pow(storona_a,2) + pow(storona_b,2) - pow(storona_c,2), 1 / 2);
            cout << "������� � ������� AB = " << med_AB << endl;
        }
        else if (vib == 2) {
            med_BC = 0.5 * pow(pow(storona_b, 2) + pow(storona_c, 2) - pow(storona_a, 2), 1 / 2);
            cout << "������� � ������� BC = " << med_BC << endl;

        } else if (vib == 3) {

            med_AC = 0.5 * pow(pow(storona_a, 2) + pow(storona_c, 2) - pow(storona_b, 2), 1 / 2);
            cout << "������� � ������� AC = " << med_AC << endl;
        }
        else {
            system("cls");
            mediani();
        }


    }
    void parallel_line() {
        float res;
        int vib;
        cout << "�������� �����: 1) ������� ����� ����������� � ������� AB 2) ������� ����� ����������� � ������� BC 3) ������� ����� ����������� � ������� AC: " << endl;
        cin >> vib;
        if (vib == 1) {

            res = storona_b / 2;
            cout << " ������� ����� ����������� � ������� AB:  " << res << endl;
        }
        else if (vib == 2) {
            res = storona_a / 2;
            cout << " ������� ����� ����������� � ������� BC:  " << res << endl;

        }
        else if (vib == 3) {

            res = storona_c / 2;
            cout << " ������� ����� ����������� � ������� AC:  " << res << endl;
        }
        else {
            system("cls");
            parallel_line();
        }


    }
    void Read() {
        int vibor;
        cout << "�������� ��� ���������: 1) ������� 2) �������" << endl;
        cin >> vibor;
        if (vibor == 1) {
            cout << "������� ���������� ������� �: " << endl;
            cout << "Ax: ";
            cin >> a1;
            cout << "Ay: ";
            cin >> a2;
            cout << "������� ���������� ������� B: " << endl;
            cout << "Bx: ";
            cin >> b1;
            cout << "By: ";
            cin >> b2;
            cout << "������� ���������� ������� C: " << endl;
            cout << "Cx: ";
            cin >> c1;
            cout << "Cy: ";
            cin >> c2;
        }
        else if (vibor == 2) {
            cout << "������� ����� ������� �: " << endl;
            cin >> storona_a;
            cout << "������� ����� ������� B: " << endl;
            cin >> storona_b;
            cout << "������� ����� ������� C: " << endl;
            cin >> storona_c;
        }
        else {
            system("cls");
            Read();
        }
        med_AB = 0;
        med_BC = 0;
        med_AC = 0;
    }

    void display() {
        cout << endl;
        if (storona_a == 0 or storona_a < 0) {
            storona_a = 0;
            cout << "������� 'a' �� ������" << endl;
        }
        else {
            cout << "������� �: " << storona_a;
        }
        if (storona_b == 0 or storona_b < 0) {
            storona_b = 0;
            cout << "������� 'b' �� ������" << endl;
        }
        else {
            cout << "������� b: " << storona_b;
        }
        if (storona_c == 0 or storona_c < 0) {
            storona_c = 0;
            cout << "������� 'c' �� ������" << endl;
        }
        else {
            cout << "������� c: " << storona_c;
        }
        if (med_AB == 0 or med_AB < 0) {
            med_AB = 0;
            cout << "������� 'AB' �� ������" << endl;
        }
        else {
            cout << "������� 'AB': " << med_AB;
        }
        if (med_BC == 0 or med_BC < 0) {
            med_BC = 0;
            cout << "������� 'BC' �� ������" << endl;
        }
        else {
            cout << "������� 'BC': " << med_BC;
        }
        if (med_AC == 0 or med_AC < 0) {
            med_AC = 0;
            cout << "������� 'AC' �� ������" << endl;
        }
        else {
            cout << "������� 'AC': " << med_AC;
        }
        cout << "������� A: " << a1 << "; " << a2 << endl;
        cout << "������� B: " << b1 << "; " << b2 << endl;
        cout << "������� C: " << c1 << "; " << c2 << endl;


   }
     bool is_possible()  {
        if (((storona_a + storona_b) > storona_c) || ((storona_b + storona_c) > storona_a) || ((storona_a + storona_c) > storona_b)) {
        
            return true;
        }
        else {
            cout << "������������ �����������" << endl;
            return false;
        }
    
    
    }
    

   
};


//// 1. �������� ����������� ���� ���������� � �� ���� ���������: �� ������ ��������� � �� ������ ���������.
//2. �������� ���� ���������� ������������� �� �������� ���� �����
//�����.��������� ����� ���������� ������� ������ ����������.
//3. �� �������� �������� ���������� ������� ���������� �� �������
//���.
//4. �������� �������� ��������� - ����������� ���������.���������
//������� ���������� ������ ������ ��������� � ��������� ��.