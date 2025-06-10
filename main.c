#include "funcoes_gerais.h"




int main() {
    inicializacao();
    led_pwm(0, 0, 0); // Desliga o LED RGB inicialmente;
    ssd1306_clear(&display);
    printf("Iniciando comunicação serial\n");
    while (true) {

            if(!gpio_get(botaoB)) {
                ler_dip_switch();
                busy_wait_us(50);
            }
        
        
    }
        return 0;
    }