# Arduino MKR 1010 WiFi on Atmel Studio 7 (without debugger)
 Uploading code to Arduino MKR 1010 Wifi using Atmel Studio 7 without debugger
 
- In this respositry you find an example AS 7 code. 
- This code does not require a debugger (Atmel ICE or alike) and can be loaded via the boards USB cable. 
- The code assumes an already available bootloader. This avoids having to fiddle with the bootloader code of the board avoiding 'bricking' the board. (use the code at own risk - if bootloader code would get deleted, there are multiple resources explaining restoring the bootloader. In another repositry I am planning to publish, restoring the bootloader using a PI3).
- The added value of this repositry lays in:
 -- Toolchain settings in AS 7 for loading Arduino MKR (especially the 'load without bootloader.ld' setting which is not the standard setting!)
 -- Bossac settings to load directly from PC to board via USB from AS 7 (without command line editing needed)
 
 - Root cause for this repositry is the need to be able to do below points things which the Arduino IDE can not deliver but AS7 does.
The arduino IDE is a very comprehensive IDE and I like it a lot. I advise to keep using the Arduino IDE as it delivers the best coherence with the Arduino boards and deliver excellent support through Github and auto updating of boards and libraries.
Sometimes however:
   - when coding it is cumbersome needing to investigate the datatype required for a certain function. In AS7 this is autom. suggested.
   - for investigation, searching used libraries for a certain text / variable / function / class is required. AS7 enables this.
   - AS7 copies the arduino core for every newly created solution, this enables to change the core coding without having any effect on other solutions.
   
Have fun!
