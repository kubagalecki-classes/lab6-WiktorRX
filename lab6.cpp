#include "make_random_vector.hpp"
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
    int           T_size = 20;
    vector< int > Blabla{make_random_vector(T_size, 0, 10)};

    for (int i = 0; i < T_size; i++) {
        cout << Blabla[i] << endl;
    }
    cout << "__________________________________" << endl;
    sort(Blabla.begin(), Blabla.begin() + T_size);

    for (int i = 0; i < T_size; i++) {
        cout << Blabla[i] << endl;
    }
    cout << "ilość siódemek: " << count(Blabla.begin(), Blabla.begin() + T_size, 7) << endl;

    cout << "ilość większych od siódemek: "
         << count_if(Blabla.begin(), Blabla.begin() + T_size, [](int x) { return x > 7; }) << endl;

    int a;
    cout << "Podaj a = ";
    // cin >> a;
    a = 5;
    cout << "ilość większych od a: "
         << count_if(Blabla.begin(), Blabla.begin() + T_size, [&](int x) { return x > a; }) << endl;

    //Ćw i
    cout << "Podaj string: " << endl;
    string blabla2;
    // cin >>
    blabla2 = "mammamia";
    auto i1 = adjacent_find(blabla2.begin(), blabla2.end());
    if (i1 == blabla2.end())
        cout << "nie ma" << endl;
    else
        cout << "jest" << endl;
    //ćw 2
    reverse(blabla2.begin(), blabla2.end());
    cout << blabla2 << endl;
    vector< double > Blabla3{make_random_vector(T_size, 0., 10.)};
    vector< double > Blabla4{make_random_vector(T_size, 0., 10.)};
    sort(Blabla3.begin(),find(Blabla3))

}
