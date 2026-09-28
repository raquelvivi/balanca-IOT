# ⚖️ Balança IoT

#### Projeto de uma balança IoT que cria uma API local capaz de retornar o peso medido pela balança física.

#### A balança foi desenvolvida para ser integrada ao meu sistema de caixa, permitindo que o peso de um produto seja enviado diretamente para o sistema. Os projetos estão disponíveis nos seguintes repositórios:

⭐ [App Caixa Back](https://github.com/raquelvivi/appCaixaBack).

⭐ [App Caixa Front](https://github.com/raquelvivi/appCaixa).

## 🔧 Sobre o projeto

#### Para montar a balança, reutilizei a carcaça de uma balança antiga que estava quebrada e adaptei novos componentes para fazer a leitura do peso.

#### Foram utilizados:

#### 4 módulos de peso meia-ponte, com capacidade máxima de 50 kg cada;
#### 1 módulo HX711;
#### 1 ESP32 DevKit V1;
#### Carcaça de uma balança antiga.

#### As peças eletrônicas foram compradas na Shopee. O desenvolvimento foi feito utilizando a Arduino IDE e C++.

#### A ideia principal era fazer o ESP32 realizar a leitura dos sensores, calcular o peso e disponibilizar esse valor através de uma API local para que o sistema de caixa pudesse utilizá-lo.

## 🛠️ Tecnologias Utilizadas
<div align="center">

<a href="https://github.com/search?q=user%3Araquelvivi+language%3AC%2B%2B"><img alt="C++" src="https://img.shields.io/badge/C%2B%2B-3a0ca3.svg?logo=cplusplus&logoColor=white"></a>
<a href="https://github.com/search?q=user%3Araquelvivi+language%3AEsp32"><img alt="ESP32" src="https://img.shields.io/badge/ESP32-f72585.svg?logo=cplusplus&logoColor=white"></a>
<a href="https://github.com/search?q=user%3Araquelvivi+language%3AModuloPeso"><img alt="Módulo de Peso" src="https://img.shields.io/badge/M%C3%B3dulo%20de%20Peso-cc6300.svg?logo=cplusplus&logoColor=white"></a>

</div>


<br/><br/>
## 🖼️ Imagens

<img width="550" height="307" alt="Captura de tela 2026-08-19 122058" src="https://github.com/user-attachments/assets/0cd3596e-681b-4ab5-a299-917f226b88bb" />
<img width="550" height="350" alt="WhatsApp Image 2026-09-28 at 20 32 11" src="https://github.com/user-attachments/assets/46b844fa-2737-427a-ac93-8cd02bb98ef9" />

## ⚠️ Problemas

#### Um dos maiores desafios durante o desenvolvimento foi algo que eu não esperava: soldar.

#### Eu só tinha soldado uma única vez na vida, em atividades escolares, com equipamentos auxiliares e uma boa infraestrutura. Dessa vez, precisei fazer as soldagens do próprio projeto e fiquei com bastante receio de errar, danificar algum componente e ter que começar tudo novamente.

#### Por causa disso, tentei várias vezes fazer a balança funcionar sem nenhuma soldagem. Depois de algumas tentativas, ficou claro que não teria jeito. 😅

#### No final, descobri que soldar não é tão complicado quanto eu imaginava. É mais uma questão de ter paciência, cuidado e entender que, se algo der errado, é possível refazer.

#### Foi uma parte simples do projeto, mas acabou sendo uma das coisas que mais me ensinou durante o desenvolvimento.
