#ifndef COMMS_HPP
#define COMMS_HPP

#include <stdio.h>
#include <unistd.h>
#include <string>
#include <fcntl.h>
#include <termios.h>


class Comms {

    private:
        int uart0_filestream;
        std::string palavra;
        struct termios options;
        std::string matricula;

    public:

        Comms();
        ~Comms();

        void init();

        void pedidoInteiro();
        void pedidoReal();
        void pedidoString();

        void solicitar(std::string solicitacao);
        void enviar();
        void receber(int flag);

        int get_uart0_filestream();
        void set_uart0_filestream( int uart0_filestream );



};




#endif