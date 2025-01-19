# embarcatech-u4-c2-tarefa2
Tarefa 2 da unidade 4 do curso de capacitação do programa Embarcatech

# Controle de LEDs e Buzzer via UART

Este projeto utiliza uma comunicação UART para controlar LEDs RGB e um buzzer conectados a uma placa microcontroladora (como a Raspberry Pi Pico). Comandos recebidos via UART acionam diferentes cores nos LEDs, sons no buzzer ou funcionalidades adicionais como reiniciar no modo de boot USB.

## Funcionalidades

1. **Controle de LEDs**:
   - LEDs RGB (vermelho, verde e azul) podem ser ativados com comandos específicos.
   - Comando `red`: Liga o LED vermelho.
   - Comando `green`: Liga o LED verde.
   - Comando `blue`: Liga o LED azul.
   - Comando `white`: Liga todos os LEDs ao mesmo tempo.
   - Comando `off`: Desliga todos os LEDs.

2. **Controle do Buzzer**:
   - O comando `buzzer` emite um som de frequência 2090 Hz por 500 ms.

3. **Modo Bootsel**:
   - O comando `boot` reinicia a placa no modo Bootsel, permitindo a atualização de firmware via USB.

4. **Comunicação UART**:
   - Comandos são enviados via UART e processados pela placa.

## Estrutura do Código

- **Inicialização**:
  - Configura os pinos dos LEDs como saída.
  - Inicializa o buzzer no pino especificado.
  - Configura a comunicação UART para receber comandos.

- **Recebimento de Comandos**:
  - Um buffer armazena o comando recebido via UART.
  - O comando é processado e executa a ação correspondente.

- **Funções Auxiliares**:
  - `inicializar_leds`: Configura os LEDs como saída.
  - `resetar_leds`: Desliga todos os LEDs.

## Componentes Utilizados

1. **LEDs RGB**:
   - Pinos conectados:
     - Vermelho: GPIO 13.
     - Verde: GPIO 11.
     - Azul: GPIO 12.

2. **Buzzer**:
   - Conectado ao GPIO 10.

3. **UART**:
   - Utilizado para receber comandos via serial.

## Comandos Disponíveis

| Comando  | Ação                                           |
|----------|------------------------------------------------|
| `red`    | Liga o LED vermelho.                          |
| `green`  | Liga o LED verde.                             |
| `blue`   | Liga o LED azul.                              |
| `white`  | Liga todos os LEDs (vermelho, verde e azul).  |
| `off`    | Desliga todos os LEDs.                        |
| `buzzer` | Emite som pelo buzzer.                        |
| `boot`   | Reinicia no modo Bootsel.                     |

## Configuração de Hardware

1. Conecte os LEDs RGB nos GPIOs especificados.
2. Conecte o buzzer ao GPIO 10.
3. Configure a UART para comunicação serial com o computador.

## Como Usar

1. **Compilação e Upload**:
   - Configure o SDK C/C++ para a Raspberry Pi Pico.
   - Inclua as bibliotecas `buzzer.h` e configure o ambiente.
   - Compile e carregue o binário na placa.

2. **Execução**:
   - Utilize uma interface UART (como PuTTY ou Minicom) para enviar os comandos ao microcontrolador.
   - Teste os comandos para verificar o controle de LEDs, buzzer e modo Bootsel.

## Exemplo de Uso

1. Envie o comando `red` para ligar o LED vermelho.
2. Envie `white` para ligar todos os LEDs.
3. Envie `buzzer` para tocar o buzzer.
4. Envie `boot` para reiniciar a placa no modo Bootsel.

## Componentes

- Líder: Vítor
- Diagrama do Wokwi: Yohanan
- Loop básico do UART: Vítor
- Buzzer: Yohanan
- LED: Vítor
- Documentação: Caio
- Vídeo: Fernando
