# Build Guide

1. Print all files :) 
    For the keyplates print them face down. You won't have to use supports for any of the prints.

2. Pop those switches in the key plate from the top.
![switches](https://i.imgur.com/KvnSj6Lh.png)

3. Bend all the diodes. I twist a little loop on the side that doesn't have a black line, and then perpendicular to the loop I bend the other half up.
![diodes](https://i.imgur.com/biPBgjmh.png)

4. Put the loop on the switch and solder them to the key
![diode on key](https://i.imgur.com/d55HCxE.png)

5. Bend your wire for the rows, then bend the half of the diode that is facing straight up around the wire and solder it to the wire.
![row soldered](https://i.imgur.com/ySji2sqh.png)

6. Solder the columns all together. Use heat shrink tubing where the columns go over the rows.
![row soldered](https://i.imgur.com/9xhybUwh.png)

7. You will wire in the rotary encoder to the matrix. On the side with just two pins coming off the encoder, put a diode on one side and connect it to the rows, on the other pin connect that to the column. This will make the "push" work as a key. To wire the twist you will wire up the side with 3 pins. The outside pins connect to the microcontroller and the inside pin connects to ground on the microcontroller.

8. Wire columns and rows to the micro-controler. Use the pin diagram to make sure you are wiring the correct row/column to the correct pin.
![Pinout](/Images/Pinout.png?raw=true)

9. Solder wires to the TRRS port and wire that up to the micro controller. Make sure you are consistent with the wiring on both halfs.

10. Put everything in the case, use hot glue to secure the microcontroller and the TRRS connector.

11. Use your soldering iron ar ~200-220c and melt the M2 brass inserts into the bottom case.

12. Screw everything together!
![Final](https://i.imgur.com/MKceINvh.png)









