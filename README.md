# Void Ergo 65
 A handwired keyboard build inspired by the Void Ergo S! Runs QMK firmware and fully customizable with VIA configurator.

The VOID Ergo 65 is a 3d printed, handwired, split keyboard that was inspired by the [VOID ergo S](https://github.com/victorlucachi/void_ergo), running QMK Firmware on [Adafruit KB2040](https://www.adafruit.com/product/5302) controllers. Connection between the two halves of the keyboard is made with an aux cable via serial.

I suggest printing the case using a 0.4 mm nozzle, supports are not needed.

The brass inserts can be fixed in the bottom case by heating them and applying pressure with a soldering iron set to about 200-220C.

I created this iteration of the VOID Ergo S because I wanted my keyboard to have arrow keys as I use them a lot in my work as a product designer. I also wanted to build a keyboard that utilized [WorkLouder](https://worklouder.cc/) keycaps because I am a huge fan of their design and product. To be able to use their keycaps I needed to use choc style low profile switches which I couldn't get to work with the original Void Ergo S.


# Bill of Materials

* 54 diodes (tme.eu [link](https://www.tme.eu/ro/en/details/1n4148-dio/tht-universal-diodes/diotec-semiconductor/1n4148/)/aliexpress [link](https://www.aliexpress.com/item/32729204179.html))
* [Work Louder Keycaps](https://worklouder.cc/shop/wrk-legend/). This build was designed with these keycaps in mind.
* 54/56 choc switches [link](https://mechanicalkeyboards.com/shop/index.php?l=product_detail&p=6337)
* 24 AWG (0.2 mm2) wire
* 2 × [Adafruit KB2040](https://www.adafruit.com/product/5302)
* 1 × [Copper Wire](https://www.amazon.com/dp/B00XHD03EA) for switch connections
* 2 × EC11 Rotary Encoder (optional/aliexpress [link](https://www.aliexpress.com/item/32872039030.html) mounted to the plate using [this adapter](https://www.thingiverse.com/thing:3770166))
* 10 × M2×12 allen head screws (aliexpress [link](https://www.aliexpress.com/item/32966941844.html), 14mm overall length, 4mm diameter head)
* 10 × M2 brass inserts (aliexpress [link](https://www.aliexpress.com/item/4000585933306.html), 3.5mm outer diameter)
* 2 × PJ320A 3.5mm female audio connectors (aliexpress [link](https://www.aliexpress.com/item/32368285821.html))
* hot glue for securing the KB2040 to the bottom case (optional, but recommended), the audio connectors, and the switches.



# Pin assignment

![Alt text](/Images/Pinout.png?raw=true)

    ROW0    ROW1    ROW2    ROW3
    D10     MOSI    MISO    SCK
    
    
    COL0    COL1    COL2    COL3    COL4    COL5    COL6
    D9      D8      D7      D6      D5      D4      D3


    Encoder Pad A           Encoder Pad B
    DO                      D1


    Serial Pin
    A3



*Matrix layout*
![Alt text](/Images/MatrixLayout.png?raw=true)


# QMK Files
I have included the raw [QMK files](</QMK Files>) to compile the firmware in addition to the [copiled firmware](</Compiled Firmware>) for the keyboard to make it easier for people who don't want to compile their own firmware.

# [VIA Configurator Layout](https://usevia.app/)
I have created a VIA Configurator design for the board as well so it is easier to see what you are editing. You can upload the JSON file in [this folder](</VIA Files>) to the [Design tab](https://usevia.app/#/design) of VIA Configurator

# 💖 Inspiration and Thanks 💖
Huge shout out to [Victor Luchachi](https://victorlucachi.ro/) who makes absolutely beautiful products and renders. The design language of this build is based off of his Void Ergo S keyboard and his VOID 16 build was my very first keyboard build.

Thank you so much to [Joe Scotto](https://www.youtube.com/joescotto) for his awesome videos on handwiring keyboards. His pictures on reddit inspired me to use copper wiring on my build which ended up making the wiring process much easier and looks much much cleaner.

A massive fanboy shoutout to [WorkLouder](https://worklouder.cc/) for creating an absolutely beautiful and high quality product. The design of your keyboards and keycaps are amazing!