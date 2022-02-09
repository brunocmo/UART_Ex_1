#include "Comms.hpp"

int main() {

    Comms ardu;

    char inteiroTeste[] = "0004";

    char realTeste[] = "0002"; 

    std::string fraseTeste{"Olá Mundo!"};

    ardu.pedidoInteiro();

    ardu.pedidoReal();

    ardu.pedidoString();

    ardu.enviarInteiro(inteiroTeste);

    ardu.enviarReal(realTeste);

    ardu.enviarString(fraseTeste);

    return 0;
}