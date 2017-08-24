# Linux compililation with Teensy 3.2 support

## 0) Install Git.

## 1) Teensy Loader Application.

Follow this steps : https://www.pjrc.com/teensy/loader.html

## 2) Arduino and Teensy support.

* Install Arduino IDE.
* Install Teensyduino https://www.pjrc.com/teensy/td_download.html
* Don’t forget to copy Teensy rules wich are described in the Teensyduino install process. You can find the Teensy rules here : https://www.pjrc.com/teensy/49-teensy.rules

Now, start Arduino Ide, and load Teensy/Blink Example.
Compile the code with the Teensy connected on US2 port.
If the Teensy blink then you can now compile code on the Teensy wich is a good start.

## 3) TMK open-source keyboard firmware creator

git clone TMK :

```
git clone git@github.com:tmk/tmk_keyboard.git
```

See https://github.com/tmk/tmk_keyboard for more information.

We need too see if the Teensy 3.2 can work with TMK. For that we will install a one-key keyboard example located in the firmware itself.
Follow this steps : https://github.com/tmk/tmk_keyboard/blob/master/keyboard/teensy_lc_onekey/instructions.md

### Arm Embedded GCC

For the `gcc-arm-embedded` you need to execute these commands (or follow this guide : https://launchpad.net/gcc-arm-embedded ) :

```
sudo add-apt-repository ppa:team-gcc-arm-embedded/ppa
sudo apt-get update
sudo apt-get install gcc-arm-embedded
```

Now you can execute `arm-none-eabi-gcc -v`

### ChibiOS

Git clone theses two projects into :

```
git clone git@github.com:ChibiOS/ChibiOS.git
git clone git@github.com:ChibiOS/ChibiOS-Contrib.git
```
