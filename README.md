##### GameEngine
# Proyecto videojuego con SFML y Box2D

## Funcionalidad de la CLI
Command-line interface (CLI) command-line interface, es un método que permite a los usuarios dar instrucciones a algún programa informático o al sistema operativo por medio de una línea de texto simple. A esta interfaz se le acostumbra llamar consola de comandos.
 
Las CLI pueden emplearse interactivamente, escribiendo instrucciones en alguna especie de entrada de texto, o pueden utilizarse de una forma mucho más automatizada (archivo batch), leyendo órdenes desde un archivo de scripts.

Una CLI muestra un prompt, el usuario teclea una orden en el teclado y finaliza la orden (normalmente con la tecla Intro/Enter), y la computadora ejecuta la orden, proporcionando una salida de texto.

En este proyecto nuestra CLI tiene la funcionalidad  de mostrar en pantalla el texto para dar órdenes. 


## Funcionalidad del sistema de inputs
La función ```` input() ````  permite introducir datos de distintos tipos desde la entrada y lo devuelve en forma de ```` output() ````. En nuestro programa se utiliza esta clase para detectar los movimientos que tiene el personaje del juego a través de las teclas.
 
 
 
## Funcionalidad básica del tiempo de ejecución
El tiempo de ejecución en general es bajo ya que su entorno no es muy complicado.
Para un mejor orden se crearon 6 carpetas ejecutables
* .Vscode

Aquí se encuentran tres documentos de extension json (launch, settings, tasks) que son necesarios para que el programada pueda ser ejecutado en visual studio.
* Assets

En esta carpeta corresponden los documentos que forman parte del diseño visual del video juego, como lo son los sprites, animations e incluso el audio.
* Bin

Aquí se guarda el ejecutable .exe junto con archivos .dll de la bibloteca SFML.
* CLI

Dentro de esta carpeta está todo lo corresopndiente para la creación de la CLI.
* Include

En está carpeta están guardadas las librerias SFML y Box2D junto con los archivos .hh.
* Src

Aquí se guardan las extensiones de c++ junto con las clases .cc.


El programa inicia en la carpeta src con el documento main.cc despúes esta pasa a la carpeta include con los archivos .hh y estas funciones pasan a estar intercambiandose incluyendo también así a todas las demás carpetas y archivos necesarios para que el programa sea ejecutado correctamente, el programa termina su ejecución cuando se cierra.


## Referencias
Universidad nacional del centro de la provincia de Buenos Aires, & Piccolo, M. (2010). IMPLEMENTACION DE VIDEOJUEGOS COMO HERRAMIENTA PARA EL DESARROLLO MOTOR Y COGNITIVO DE NIÑOS (N.o 9). https://www.ridaa.unicen.edu.ar/xmlui/bitstream/handle/123456789/589/Tesis%20Piccolo-Fabi%C3%A1n.pdf?sequence=1&isAllowed=y

Línea de comandos. (s. f.). EcuRed. Recuperado 21 de noviembre de 2021, de https://www.ecured.cu/L%C3%ADnea_de_comandos#Ejemplo

