# Monitor de Progresso com Arduino e Display ILI9341

![Preview do Projeto](preview.gif)

Este é o meu primeiro projeto desenvolvido com Arduino, focado no estudo prático de integração entre hardware e software. O objetivo principal foi entender a leitura de sinais analógicos, o controle de periféricos visuais (TFT LCD) e a lógica de estados simples.

O projeto foi totalmente desenvolvido e testado utilizando o simulador [**Wokwi**](https://wokwi.com/).

## Funcionamento 

O sistema realiza a leitura analógica de um potenciômetro e converte esse sinal em um valor percentual de 0 a 100%. Esse valor é utilizado para:

* **Atualização Visual**: Uma barra de progresso no display ILI9341 que muda de cor conforme o nível (Verde para <= 70%, Amarelo para 71–90% e Vermelho para > 90%).
* **Alerta Físico**: Um LED de segurança conectado ao pino digital 2 é acionado automaticamente quando o valor ultrapassa 90%.

## Tecnologias e Componentes

### Software
**Linguagem**: C++. Possuo experiência prévia em C, Python e Java. Ferramentas de IA foram utilizadas apenas como apoio para adaptação de sintaxe e entendimento da estrutura de classes no ecossistema Arduino. Toda a lógica e implementação foram desenvolvidas por mim.
* **Bibliotecas**:
    * Adafruit GFX Library.
    * Adafruit ILI9341.

### Hardware (Simulado)
* Arduino Uno.
* Display TFT ILI9341 (320x240).
* Potenciômetro (Entrada analógica A0).
* LED de Alerta.

## Estrutura do Código

O código foi organizado de forma modular para melhorar a legibilidade e manutenção:

* `sketch.ino`: Lógica principal, inicialização dos componentes e loop de execução.
* `screen.cpp` / `screen.h`: Classe `Screen` responsável por gerenciar toda a interface gráfica e lógica de cores da barra.
* `PIN.h`: Centralização das definições de pinagem do hardware.

## Como Visualizar

O projeto pode ser acessado e executado diretamente pelo navegador através do link abaixo:

**Link do Projeto no Wokwi**: [https://wokwi.com/projects/456157754531684353](https://wokwi.com/projects/456157754531684353)
