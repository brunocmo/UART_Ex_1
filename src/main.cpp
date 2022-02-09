#include "Comms.hpp"

int main() {

    Comms ardu;

    int inteiroTeste = 64000;

    float realTeste = 16.18f; 

    std::string fraseTeste{"Olá Mundo!"};

    // ardu.pedidoInteiro();

    // ardu.pedidoReal();

    ardu.pedidoString();

    // ardu.enviarInteiro(inteiroTeste);

    // ardu.enviarReal(realTeste);

    ardu.enviarString(fraseTeste);

    return 0;
}