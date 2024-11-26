#include <iostream>
#include <string>
using namespace std;

// Definición de la clase Persona
class Persona {
private:
    string nombre;
    int edad;
    string direccion;

public:
    // Constructor para inicializar los atributos
    Persona(string n, int e, string d) : nombre(n), edad(e), direccion(d) {}

    // Función para mostrar la información de la persona
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Dirección: " << direccion << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    // Crear objetos de la clase Persona
    Persona persona1("Juan Perez", 30, "Calle Falsa 123");
    Persona persona2("Maria Garcia", 25, "Avenida Siempre Viva 456");

    // Mostrar la información de cada persona
    persona1.mostrarInformacion();
    persona2.mostrarInformacion();

    return 0;
}
