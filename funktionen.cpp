#include <iostream>
#include <random>

using namespace std;

int mult (int a, int b);

double mult (double a, double b);

void mult (int* z, int x, int y);

void toUpper(char *s);


int main(int argc, char **args) {
    int x;
    int y;
    char s[2] = {'a', 'b'};
    toUpper(s);
    cout << s << endl;

    cout << "Bitte ersten Faktor eingeben: ";
    cin >> x;

    cout << "Bitte zweiten Faktor eingeben: ";
    cin >> y;

    int z =  mult(x, y);
    cout << z << endl;

    mult(&z, x, y);
    cout << z << endl;

    // Zufall szahl zwischen 1 und 6
    int l_limit = 1, h_limit = 6;
    int outcome = rand() % (h_limit - l_limit +1) + l_limit;
    cout << "Zuafallszahl ist " << outcome << endl;

    return 0;
}

int mult (int a, int b){
    return a * b;
}

double mult (double a, double b){
    return a * b;
}

void mult (int* z, int x, int y){
    *z = x * y;
}

void toUpper(char *s) {
    s[0] = 'A';
    s[1] = 'B';
}


