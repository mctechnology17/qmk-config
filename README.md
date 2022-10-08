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
- [Quick installation](#Quick-installation)
- [Tutorial](#Tutorial)
- [Installation QMK](#Installation-QMK)
- [Trobelshooting](#Trobelshooting)
- [Donate](#Donate)
- [LICENSE](#LICENSE)

----

# Intro

This repository contains MY PERSONAL SETTINGS FOR MY CORNE KEYBOARD and SOME
ANIMATIONS FOR THE OLED SCREEN.

[QMK](https://github.com/qmk/qmk_firmware) keyboard firmware. Tested on my
corne keyboard.

I AM NOT RESPONSIBLE FOR ANY DAMAGE THAT MAY CAUSE THIS CODE, USE IT
AT YOUR OWN RISK.

FEEL FREE TO MODIFY THE CODE TO YOUR TASTE OR TO USE WHAT YOU NEED
DO NOT FORGET TO REFERENCE THE AUTHORS OF THE CODES YOU USE

All credit to the author of the crab, demon and music-bar animations
[Marek Piechut](https://github.com/marekpiechut/qmk-animations.git).

All credit to the author of the [bongocat animation](https://github.com/nwii/oledbongocat) and the
author of keyboard animation implementation crkbd [ardakilic](https://github.com/qmk/qmk_firmware/tree/master/keyboards/crkbd/keymaps/ardakilic)

All credit to the author of the bongocat_keyboard animation and luna the dog
[DLopezGo90](https://www.youtube.com/watch?v=XD8rC4zkc6Q&list=PLq8VOFVQEynRsCf92ElMUzynXF0p9LZ-0&index=10&ab_channel=DLopezGo90).
From there I took the code for the animation of bongocat_keyboard and Luna the
dog.

All credit to the author of **Ocean Dream** + LUNA Tyler Thrailkill
@snowe/@snowe2010 <tyler.b.thrailkill@gmail.com>.

I DIDN'T CREATE THE ANIMATIONS, I JUST MADE A KIND OF BY MANY ANIMATIONS CODE
AND IMPLEMENTED THEM IN MY KEYMAPS WITH SOME MODIFICATIONS, ALL THE CREDIT OF
THE ANIMATIONS TO THEIR RESPECTIVE AUTHORS MENTIONED. IF YOU ARE THE
INTELLECTUAL OWNER OF ANY CODE THAT YOU USE HERE AND DON'T MENTION IT, PLEASE
LET ME KNOW AND I'LL MODIFY THE REFERENCES.

---
[![bongocat](https://github.com/mctechnology17/mctechnology17/blob/main/src/bongocat_mc.GIF)](https://www.youtube.com/channel/UC_mYh5PYPHBJ5YYUj8AIkcw)
[![demon](https://github.com/mctechnology17/mctechnology17/blob/main/src/demon_mc.GIF)](https://www.youtube.com/channel/UC_mYh5PYPHBJ5YYUj8AIkcw)
[![luna](https://github.com/mctechnology17/mctechnology17/blob/main/src/luna_mc.GIF)](https://www.youtube.com/channel/UC_mYh5PYPHBJ5YYUj8AIkcw)
[![crab](https://github.com/mctechnology17/mctechnology17/blob/main/src/crab_mc.GIF)](https://www.youtube.com/channel/UC_mYh5PYPHBJ5YYUj8AIkcw)
[![ocean-dream](https://github.com/mctechnology17/mctechnology17/blob/main/src/ocean-dream_mc.GIF)](https://www.youtube.com/channel/UC_mYh5PYPHBJ5YYUj8AIkcw)
[![music-bars](https://github.com/mctechnology17/mctechnology17/blob/main/src/music-bars_mc.GIF)](https://www.youtube.com/channel/UC_mYh5PYPHBJ5YYUj8AIkcw)
---

# Quick installation
Just execute the following line in your terminal.
```bash
bash -c "$(curl -fsSL https://raw.githubusercontent.com/mctechnology17/qmk-config/main/setup.sh)"
```

# [Tutorial](https://youtu.be/w9Z_ODrKhvQ)
Click on the image to see the tutorial

[![Tutorial](https://i.ytimg.com/vi/w9Z_ODrKhvQ/maxresdefault.jpg)](https://youtu.be/w9Z_ODrKhvQ)

# Installation QMK
If you don't have [qmk](https://docs.qmk.fm/#/cli) installed, then this is the first thing to do.

MacOS/linux with homebrew:
```bash
brew install qmk/qmk/qmk
qmk setup
```

Windows:
 - Download and instalall [qmk_toolbox](https://github.com/qmk/qmk_toolbox/releases).
 - Download and instalall [qmk_distro_msys](https://github.com/qmk/qmk_distro_msys/releases)
 - Execute qmk_toolbox and qmk_distro_msys
 - In qmk_distro_msys execute the following commands:
```bash
qmk setup # yes to all
```

Just execute the following line in your terminal
```bash
bash -c "$(curl -fsSL https://raw.githubusercontent.com/mctechnology17/qmk-config/main/setup.sh)"
y # confirm the installation
```

To manual compilate
```bash
qmk compile -kb crkbd -km qmk-config
```

Open the build folder and drag the `crkbd_rev1_mctechnology17.hex` file into
the qmk_toolbox program, you connect one half of your corne keyboard and press
the reset button, then in the QMK ToolBox program you press the
flash button and wait for the process to finish. Repeat the process with the
other half of the keyboard. Here I leave the path of the folder where the
compiled file is located:

```bash
open ~/qmk_firmware/.build # OSX
xdg-open ~/qmk_firmware/.build # Linux
C:\Users\USUARIO\qmk_firmware\.build # Windows
```

# Trobelshooting
THE FLAGS AND CONFIGURATIONS ARE TOO MANY TO MENTION THEM ONE BY ONE, I AM
TRYING TO DO IT IN A SUMMARIZED WAY AND I WILL TRY TO UPLOAD A MORE EXTENDED
DOCUMENTATION, IF YOU WANT MORE DETAILS ABOUT THE FLAGS PLEASE CONSULT THE
REFERENCES OF THE AUTHORS CITED ABOVE.

On [rules.mk](./rules.mk) you can simply modify the following parameters with a
yes or no to activate them

- yes = activate
- no = deactivate
```make
OCEAN_DREAM_ENABLE = no # slave
LUNA_ENABLE = no # master
BONGOCAT_ENABLE = no # slave
CRAB_ENABLE = yes # slave (default)
DEMON_ENABLE = no # slave
DOG_ENABLE = yes # master and smaller as LUNA_ENABLE (default)
BONGOCAT_KEYBOARD_ENABLE = no # slave and smaller as BONGOCAT_ENABLE
MUSIC_BARS_ENABLE = no # TODO slave
```
IF SOMETHING DOES NOT COMPILE FOR YOU, CHECK THE SIZE OF WHAT YOU ARE ACTIVATING.

# Donate
If you're enjoy my work, feel free to donate or become a sponsor.
- [paypal]
- [sponsor]

Ambassador and creator/maintainer of vimtools, GitManager and more,
that are easy to integrate, but very powerful work tools that allow you to
improve your workflow, integrating with all operating systems and all
possible shells.

Here you can see another recently published project:
- [vimtools] swiss army knife for vim (functions and settings that will make it easy for you life)
- [gm] manager for GIT multi platform with a friendly user interface
- [vim-better-header] better automated template
- [vim-executor] multilanguage code executor.

# ToDo

- [ ] implement music bar animation
- [ ] fix other small error
- [ ] add more animations


# [LICENSE](LICENSE)

Copyright QMK Community
Copyright (c) 2022 Marcos Ivan Chow Castro @mctechnology17

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
