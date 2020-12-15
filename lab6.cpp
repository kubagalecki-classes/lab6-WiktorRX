#include "make_random_vector.hpp"
#include <iostream>
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
}
