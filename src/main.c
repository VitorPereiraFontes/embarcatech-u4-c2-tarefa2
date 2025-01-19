#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"
#include "pico/bootrom.h"

#define GREEN_LED_PIN 11
#define BLUE_LED_PIN 12
#define RED_LED_PIN 13

void resetar_leds();
void inicializar_leds();

int main() {
    // Define um buffer para armazenar o texto enviado
    char buffer[1024];

    // Inicializa a comunicação UART
    stdio_init_all();

    while (true) {
        scanf("%s",buffer);

        // Remove o '\n' final se presente
        buffer[strcspn(buffer, "\n")] = '\0';  // Substitui '\n' por '\0'

        printf("O comando recebido foi: %s\n",buffer);

        if(strcmp(buffer,"red") == 0){

        }else if(strcmp(buffer,"green") == 0){

        }else if(strcmp(buffer,"blue") == 0){

        }else if(strcmp(buffer,"buzzer") == 0){

        }else if(strcmp(buffer,"boot") == 0){
            printf("Habilitando o modo bootsel...");
            reset_usb_boot(0,0);
        }

        // Limpa o buffer
        buffer[0] = '\0';
        sleep_ms(800);
    }
}

void inicializar_leds(){
    gpio_init(RED_LED_PIN);
    gpio_init(GREEN_LED_PIN);
    gpio_init(BLUE_LED_PIN);

    gpio_set_dir(RED_LED_PIN,GPIO_OUT);
    gpio_set_dir(GREEN_LED_PIN,GPIO_OUT);
    gpio_set_dir(BLUE_LED_PIN,GPIO_OUT);
}

void resetar_leds(){
    gpio_put(RED_LED_PIN,false);
    gpio_put(BLUE_LED_PIN,false);
    gpio_put(GREEN_LED_PIN,false);
}