#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>  //biblioteca necessária para as variáveis que se limitam a 16 ou 8 bits
#include <ncurses.h>

typedef struct {

    uint8_t acumulador;
    uint8_t indicex;
    uint8_t indicey;
    uint8_t stackpointer;
    uint8_t statusregister;
    uint16_t programcounter;

    } Processador;

/* Cada variável representa um elemento do barramento de memória do Ricoh 2A03, sendo que na programação as variáveis são 
limitadas por bit (tendo 8 bits = 1 byte), logo, a maioria dos elementos se limitam a 1 byte de memória em uma variável do tipo unisgned int.
O programcounter é reservado a 2 bytes de memória para que seja possível que ele carregue um endereço completo de qualquer outro elemnto do barramento de memória */

int main() {

    Processador processador;  //declaração de struct que contém os registradores do processador

    initscr();

    noecho();

    curs_set(FALSE);
    
    return 0;

}

/* Cada instrução a ser emulada deverá ser separada em uam função void que realiza a instrução desejada */
/*
void ADD(struct processador, ) */
