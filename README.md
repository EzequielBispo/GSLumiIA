
# GSLumiIA

Lumi é um projeto focado na automação e controle de iluminação com base em dados de sensores de luminosidade. Ele coleta dados de sensores internos e externos e calcula a intensidade ideal da lâmpada para garantir a melhor eficiência energética.

## Funcionalidades

- **Leitura de sensores**: Coleta de dados de sensores de iluminação interna e externa.
- **Cálculo da intensidade da lâmpada**: Determina o valor ideal de intensidade com base nas leituras dos sensores.
- **Envio para dashboard**: Visualização dos dados em tempo real por meio de integração com plataforma Thinger.io.

## Tecnologias Utilizadas

- **ESP32**: Microcontrolador para coletar dados dos sensores e enviar para a API.
- **Plataforma de Dashboard**: Como Thinger.io para monitoramento dos dados.

## Como Rodar o Projeto

### 1. **Configuração do Código no ESP32**

- Clone este repositório para o seu computador.
- Abra o código na Arduino IDE.
- Altere as variáveis de configuração (`SSID`, `SSID_PASSWORD`) com suas informações de Wi-Fi.

### 2. **Visualização dos Dados**

- Acesse o [Dashboard Thinger.io](https://console.thinger.io/dashboards/dash?authorization=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJqdGkiOiJEYXNoYm9hcmRfZGFzaCIsInN2ciI6InVzLWVhc3QuYXdzLnRoaW5nZXIuaW8iLCJ1c3IiOiJlemVxdWllbGZlaW8xMjM0NTYifQ.HnRGGoDEz6seye_I7tPXAsfD8cD_q23qXi5XCeO2eUE) para visualizar os dados enviados pelo seu ESP32 em tempo real.

## Estrutura do Projeto

```bash
GSLumiNET/
├── src/
│   ├── main.ino        # Código principal do ESP32
│   ├── ...
├── README.md           # Documentação do projeto
```
