#include <iostream>

template<unsigned int n>
struct Fact {
    static const int value = n * Fact<n - 1>::value;
};

template<>
struct Fact<0> {
    static const int value = 1;

};
template<int x>
struct FactorialEqual;

int main() {
    FactorialEqual<Fact<5>::value> FactorialEqual;
    return 0;
}
