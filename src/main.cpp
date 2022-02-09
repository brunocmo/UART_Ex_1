#include "Comms.hpp"

int main() {

    Comms ardu;

    char inteiroTeste[] = { 0, 0 , 0 , 4 };

    char realTeste[] = { 0, 0, 0, 3}; 

    ardu.pedidoInteiro();

    ardu.pedidoReal();

    ardu.pedidoString();

    ardu.enviarInteiro(inteiroTeste);

    ardu.enviarReal(realTeste);

    ardu.enviarString("Bom dia!");

    return 0;
}