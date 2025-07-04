#include <iostream>
using namespace std;

class Mayor4Numeros2 {
private:
    int numA, numB, numC, numD, numMayor;

public:
    // Métodos para establecer valores
    void establecerNumA(int n) { numA = n; }
    void establecerNumB(int n) { numB = n; }
    void establecerNumC(int n) { numC = n; }
    void establecerNumD(int n) { numD = n; }

    // Método para calcular el mayor
    void calcularNumMayor() {
        if (numA > numB && numA > numC && numA > numD) {
            numMayor = numA;
        } else if (numB > numA && numB > numC && numB > numD) {
            numMayor = numB;
        } else if (numC > numA && numC > numB && numC > numD) {
            numMayor = numC;
        } else {
            numMayor = numD;
        }
    }

    // Método para obtener el mayor
    int obtenerNumMayor() {
        return numMayor;
    }
};

// Clase ejecutora
int main() {
    Mayor4Numeros2 obj;
    int a, b, c, d;

    cout << "Ingresa cuatro numeros diferentes:\n";
    cout << "Numero A: "; cin >> a;
    cout << "Numero B: "; cin >> b;
    cout << "Numero C: "; cin >> c;
    cout << "Numero D: "; cin >> d;

    obj.establecerNumA(a);
    obj.establecerNumB(b);
    obj.establecerNumC(c);
    obj.establecerNumD(d);

    obj.calcularNumMayor();

    cout << "\nEl numero mayor es: " << obj.obtenerNumMayor() << endl;

    return 0;
}