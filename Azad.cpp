#include <iostream>
template <typename T>
class Broj {
private:
    T vrijednost;

public:
    Broj(T v) : vrijednost(v) {}
    T getVrijednost() const {
        return vrijednost;
    }
    void setVrijednost(T v) {
        vrijednost = v;
    }
    void prikazi() const {
        std::cout << "Vrijednost: " << vrijednost << std::endl;
    }
};

int main() {
    Broj<int> intBroj(10);
    intBroj.prikazi();
    
    Broj<double> doubleBroj(15.5);
    doubleBroj.prikazi();
    
    return 0;
}
