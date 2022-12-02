# Frame 48

![frame](https://i.imgur.com/GnOZPsuh.jpg)

*A handwired keyboard build created to use the [WorkLouder](https://worklouder.cc/) keycaps and inspired by the Void Ergo S! Runs QMK firmware and fully customizable with VIA configurator.*

*The Frame 48 is a 3d printed, handwired, split keyboard that was inspired by the [VOID ergo S](https://github.com/victorlucachi/void_ergo), running QMK Firmware on [Adafruit KB2040](https://www.adafruit.com/product/5302) controllers. Connection between the two halves of the keyboard is made with an aux cable via serial.*

* Keyboard Maintainer: [Greg Mathews](https://github.com/gregsqueeb)
* Hardware Supported: Adafruit KB2040
* Hardware Availability:
  * 56 diodes (tme.eu [link](https://www.tme.eu/ro/en/details/1n4148-dio/tht-universal-diodes/diotec-semiconductor/1n4148/)/aliexpress [link](https://www.aliexpress.com/item/32729204179.html))
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

Make example for this keyboard (after setting up your build environment):

    make handwired/frame_48:default

Flashing example for this keyboard:

    make handwired/frame_48:default:flash

## Bootloader

Enter the bootloader:
    Press and hold the BOOT button down.
    Press and release the Reset button.
    Continue holding the BOOT button until you see the RPI-RP2 drive appear.
    You can now release but BOOT button.