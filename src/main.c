#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"
#include "pico/bootrom.h"

#include "buzzer.h"

#define BUZZER_PIN 10

int main() {
    // Define um buffer para armazenar o texto enviado
    char buffer[1024];

    // Inicializa a comunicação UART
    stdio_init_all();

	Buzzer bz;
	Buzzer_init(&bz, BUZZER_PIN);

    while (true) {
        scanf("%s",buffer);

        // Remove o '\n' final se presente
        buffer[strcspn(buffer, "\n")] = '\0';  // Substitui '\n' por '\0'

        printf("O comando recebido foi: %s\n",buffer);

        if(strcmp(buffer,"red") == 0){

        }else if(strcmp(buffer,"green") == 0){

        }else if(strcmp(buffer,"blue") == 0){

        }else if(strcmp(buffer,"buzzer") == 0){
			Buzzer_play(&bz, 2090, 500);
        }else if(strcmp(buffer,"boot") == 0){
            printf("Habilitando o modo bootsel...");
            reset_usb_boot(0,0);
        }

        // Limpa o buffer
        buffer[0] = '\0';
        sleep_ms(800);
    }
}
