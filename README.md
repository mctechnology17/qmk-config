[![MC Technology](https://github.com/mctechnology17/mctechnology17/blob/main/src/mctechnology_extendido.GIF)](https://www.youtube.com/channel/UC_mYh5PYPHBJ5YYUj8AIkcw)

<div align="center">

  [<img align="center" alt="MC Technology | YouTube" width="22px" src="https://github.com/mctechnology17/mctechnology17/blob/main/src/youtube.png" />][youtube]
  [<img align="center" alt="@mctechnology17 | Twitter" width="22px" src="https://github.com/mctechnology17/mctechnology17/blob/main/src/twitter.png" />][twitter]
  [<img align="center" alt="@mctechnology17 | Instagram" width="22px" src="https://github.com/mctechnology17/mctechnology17/blob/main/src/instagram.png" />][instagram]
  [<img align="center" alt="MC Technology17 | Facebook" width="22px" src="https://github.com/mctechnology17/mctechnology17/blob/main/src/facebook.png" />][facebook]
  [<img align="center" alt="@mctechnology17 | Reddit" width="22px" src="https://github.com/mctechnology17/mctechnology17/blob/main/src/reddit.png" />][reddit]

</div>
<br>

- [Intro](#Intro)
- [Instalacion](#Instalacion)
- [Donacion](#Donacion)
- [LICENSE](#LICENSE)

----

# Intro

Este repositorio contiene mi configuracion personal de mi teclado corne y algunas animaciones para para la pantalla OLED.

[QMK](https://github.com/qmk/qmk_firmware) firmware del teclado. Testeado en mi teclado corne.

NO ME HAGO RESPONSABLE DE NINGUN DAÑO QUE PUEDA OCASIONAR ESTE CODIGO, UTILIZALO
BAJO TU PROPIO RIESGO.

SIENTETE LIBRE DE MODIFICAR EL CODIGO A TU GUSTO O DE OCUPAR LO QUE NECESITES
NO OLVIDES REFERENCIAR A LOS AUTORES DE LOS CODIGOS QUE OCUPES

Todo el credito para el autor de las animaciones de crab, demon y music-bar
[Marek Piechut](https://github.com/marekpiechut/qmk-animations.git).

Todo el credito para el autor de la animacion de [bongocat](https://github.com/nwii/oledbongocat) y el
autor de la implementacion de la animacion en el teclado crkbd [ardakilic](https://github.com/qmk/qmk_firmware/tree/master/keyboards/crkbd/keymaps/ardakilic)

Todo el credito para el autor de la animacion de bongocat_keyboard y luna el perro [DLopezGo90](https://www.youtube.com/watch?v=XD8rC4zkc6Q&list=PLq8VOFVQEynRsCf92ElMUzynXF0p9LZ-0&index=10&ab_channel=DLopezGo90).
De ahi tome el codigo la animacion de bongocat_keyboard y Luna el perro.

# Instalacion
Si no tienes instalado [qmk](https://docs.qmk.fm/#/cli), entonces es lo primero que tienes que hacer.

Para MacOS/linux con homebrew:
```bash
brew install qmk/qmk/qmk
qmk setup
```

Para Windows:
 - Editor de texto recomiendo `vim/nvim`
 - Instalar [qmk_toolbox](https://github.com/qmk/qmk_toolbox/releases).
   Un programa gráfico para Windows y macOS que permite programar y depurar su teclado personalizado
 - Instalar consola [qmk_distro_msys](https://github.com/qmk/qmk_distro_msys/releases)
 - Abrir ambos programas qmk_toolbox y qmk_distro_msys
 - En qmk_distro_msys ecutar el siguiente comando:
```bash
qmk setup # En la mayoría de las situaciones querrá responder y a todas las indicaciones.
```

Ahora simplemente clona este [repositorio](https://github.com/mctechnology17/qmk-config.git) en la ruta `~/qmk_firmware/keyboards/crkbd/keymaps`
y sigue los siguientes pasos:

```bash
cd ~/qmk_firmware/keyboards/crkbd/keymaps
git clone https://github.com/mctechnology17/qmk-config.git
mv qmk-config mctechnology17
cd mctechnology17
rm -rf .git
```

Ejecuta y compila el firware.
```bash
qmk compile -kb crkbd -km mctechnology17 # compilar
```

Abre la carpeta con el compilado y arrastra el archivo `crkbd_rev1_mctechnology17.hex` hacia el programa qmk_toolbox,
conectas una mitad de tu teclado corne y presionas el boton de reset, luego en el programa QMK ToolBox presionas el
boton de flash y esperas a que termine el proceso. Repite el proceso con la otra mitad del teclado.
Por aca te dejo la ruta de la la carpeta donde se encuentra el archivo compilado:
```bash
open ~/qmk_firmware/.build # para macos abre la carpeta con el compilado
xdg-open ~/qmk_firmware/.build # para linux abre la carpeta con el compilado
C:\Users\USUARIO\qmk_firmware\.build # para windows abre la carpeta con el compilado
```

# Donacion
Si disfrutas de mi trabajo, siéntete libre de donar o convertirte en patrocinador.
- [paypal]
- [sponsor]

Emsamblador y creador/mantenedor de vimtools, GitManager y más,
que son herramientas de trabajo fáciles de integrar, pero muy potentes que te permiten
mejore su flujo de trabajo, integrándose con todos los sistemas operativos y todas las
shells(zsh, fish, bash, etc.) posibles.

Aquí puedes ver otro proyecto publicado recientemente:
- [vimtools] navaja suiza para vim (funciones y configuraciones que te facilitarán la vida)
- [gm] administrador multiplataforma GIT con una interfaz de usuario amigable
- [vim-better-header] la mejor plantilla automatizada
- [vim-executor] Ejecutador de código multilenguaje


# [LICENSE](LICENSE)

GNU General Public License v2.0
Copyright (c) 2022 Marcos Chow Castro

[twitter]: https://twitter.com/mctechnology17
[youtube]: https://www.youtube.com/c/mctechnology17
[instagram]: https://www.instagram.com/mctechnology17/
[facebook]: https://m.facebook.com/mctechnology17/
[reddit]:https://www.reddit.com/user/mctechnology17

[vim-executor]: https://github.com/mctechnology17/vim-executor
[vim-better-header]: https://github.com/mctechnology17/vim-better-header
[gm]: https://github.com/mctechnology17/gm
[vimtools]: https://github.com/mctechnology17/vimtools
[jailbreakrepo]: https://mctechnology17.github.io/
[uiglitch]: https://repo.packix.com/package/com.mctechnology.uiglitch/
[uiswitches]: https://repo.packix.com/package/com.mctechnology.uiswitches/
[uibadge]: https://repo.packix.com/package/com.mctechnology.uibadge/
[youtuberepo]: https://github.com/mctechnology17/youtube_repo_mc_technology
[sponsor]: https://github.com/sponsors/mctechnology17
[paypal]: https://www.paypal.me/mctechnology17
[readline]: https://github.com/PowerShell/PSReadLine/blob/master/README.md
