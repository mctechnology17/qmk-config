#!/bin/bash
# ===========================================
# FileName: setup.sh
# Date: 15:17 23.September.2022
# Author: Marcos Ivan Chow Castro @mctechnology17
# Email: mctechnology170318@gmail.com
# GitHub: https://github.com/mctechnology17
# Brief: This script is used to install mctechnology17 keymaps and animations.
# ===========================================
#                            ╔═╦═╦═╗
#                     ╔════╗ ║║║║║╔╝
#                     ║╔╗╔╗║ ║║║║║╚╗
#                     ╚╝║║╚╝ ║╠═╩╩═╝
#                       ║╠═╦═╣╚╦═╦╦═╦╗╔═╦═╦╦╗
#                       ║║╩╣═╣║║║║║╬║╚╣╬║╬║║║
#                       ╚╩═╩═╩╩╩╩═╩═╩═╩═╬╗╠╗║
#                                       ╚═╩═╝
#
# Copyright 2022 Marcos Ivan Chow Castro @mctechnology17
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

set -e
# set -x
### color ### {{{
BOLD="$(tput bold 2>/dev/null || printf '')"
GREY="$(tput setaf 0 2>/dev/null || printf '')"
UNDERLINE="$(tput smul 2>/dev/null || printf '')"
RED="$(tput setaf 1 2>/dev/null || printf '')"
GREEN="$(tput setaf 2 2>/dev/null || printf '')"
YELLOW="$(tput setaf 3 2>/dev/null || printf '')"
BLUE="$(tput setaf 4 2>/dev/null || printf '')"
MAGENTA="$(tput setaf 5 2>/dev/null || printf '')"
NO_COLOR="$(tput sgr0 2>/dev/null || printf '')"
BLACKBG="printf '\e[1;40;92m'"
#}}}
### basic functions {{{
info() {
  printf '%s\n' "${BOLD}${GREY}>${NO_COLOR} $*"
}
warn() {
  printf '%s\n' "${YELLOW}! $*${NO_COLOR}"
}
error() {
  printf '%s\n' "${RED}x $*${NO_COLOR}" >&2
}
completed() {
  printf '%s\n' "${GREEN}✓${NO_COLOR} $*"
}
has() {
  command -v "$1" 1>/dev/null 2>&1
}
#}}}
### usage ### {{{
usage(){
cat <<END
  Usage:
    bash -c "$(curl -fsSL https://raw.githubusercontent.com/mctechnology17/qmk-config/main/setup.sh)"
END
  exit 1
}
### }}}
### menu_next ### {{{
menu_next() {
  clear
  echo "${YELLOW}==========================="
  echo "|     AnimationManager    |"
  echo "|  by Marcos Chow Castro  |"
  echo "|     @mctechnology17     |"
  echo "|-------------------------|"
  echo "| [y]    install anim     |"
  echo "| [n]    next options     |"
  echo "|-------------------------|"
  echo "| Exit: ENTER or CTRL+C   |"
  echo "==========================="
  printf " -->${NO_COLOR} "
  read -r setup_continue
  if [ "$setup_continue" = "n" ]; then
    menu_previous
  fi
}
#}}}
### menu_previous ### {{{
menu_previous() {
  clear
  echo "${YELLOW}==========================="
  echo "|     AnimationManager    |"
  echo "|  by Marcos Chow Castro  |"
  echo "|     @mctechnology17     |"
  echo "|-------------------------|"
  echo "| [h]      usage          |"
  echo "| [n]    previous         |"
  echo "|-------------------------|"
  echo "| Exit: ENTER or CTRL+C   |"
  echo "==========================="
  printf " -->${NO_COLOR} "
  read -r setup_continue
  if [ "$setup_continue" = "n" ]; then
    menu_next
  fi
}
#}}}
### main {{{
menu_next
if [ "$setup_continue" = "y" ]; then # y {{{
  clear
  info 'Processing data...'
  cd $HOME
  # Check to see if the user has write permissions in this directory to prevent a cryptic error later on
  if [ ! -w `pwd` ]; then
      echo 'Sorry, you do not have write permissions in this directory.';
      echo 'Please try running this script again from a directory that you do have write permissions for.';
      exit 1
  fi

  # check if git is installed
  if ! has git; then
    error 'Could not find the command "git"'
    exit 1
  fi
  # ckeck if qmk-config dir exists
  if [ ! -d ~/qmk-config ]; then
    info 'Clone qmk-config to HOME'
    git clone https://github.com/mctechnology17/qmk-config.git
    completed 'Done!'
  fi
  # check if qmk-config dir in qmk_firmware exists
  if [ ! -d ~/qmk_firmware/keyboards/crkbd/keymaps/qmk-config ]; then
    info 'Copy qmk-config keymaps to QMK repository'
    cp -rvf ~/qmk-config ~/qmk_firmware/keyboards/crkbd/keymaps
    completed 'Done!'
  fi

  # delete the .git folder
  if [ -d ~/qmk_firmware/keyboards/crkbd/keymaps/qmk-config/.git ]; then
    info 'Delete the .git folder from qmk-config keymaps in QMK repository'
    rm -rfv ~/qmk_firmware/keyboards/crkbd/keymaps/qmk-config/.git
    completed 'Done!'
    info 'Delete the qmk-config repo in HOME'
    rm -rfv ~/qmk-config
    completed 'Done!'
  fi

  # check if qmk is installed
  if ! has qmk; then
    error 'Could not find the command "qmk"'
    exit 1
  fi

  qmk compile -kb crkbd -km qmk-config
  case `uname -s` in
    Darwin) open ~/qmk_firmware/.build && open -a QMK\ Toolbox ;;
    Linux) xdg-open ~/qmk_firmware/.build ;;
    *) echo "For Windows: cd .\qmk_firmware\.build && start . " ;;
  esac
  cd -
  completed 'Done!'
  info 'Now you can flash your keyboard with the new firmware'
  info 'Press the RESET button of the keyboard'
  info 'Then press the button on the QMK Toolbox'
  info 'Enjoy!'
  info 'For modification of the firmware, edit the files in ~/qmk_firmware/keyboards/crkbd/keymaps/qmk-config'
  info 'For more information, visit https://github.com/mctechnology17/qmk-config'
  info 'For more information, visit https://www.youtube.com/c/mctechnology17'
  exit 0 #}}}
elif [ "$setup_continue" = "h" ]; then # l {{{
  clear
  usage
  exit 0 #}}}
else # {{{
  info 'No change made!'
  exit 1
fi
#}}}
#}}}
# set +x

# vim: set sw=2 ts=2 sts=2 et ft=sh fdm=marker:
