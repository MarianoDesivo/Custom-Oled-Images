# Custom Oled Images

Using photoshop you can adapt almost any image to use in your OLED display. I used a ESP32 and this webpage https://marlinfw.org/tools/u8glib/converter.html to convert the images to code, but it can be done with many other options.

## Things I used:

* [ESP-WROOM-32](https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32_datasheet_en.pdf)
* Photoshop CS6
* Arduino IDE
* SSD1306 and GFX libraries from Adafruit (install them on the Arduino IDE)
* SSD1306 Monochrome OLED Display (with a resolution of 128 pixels by 64 pixels)
* Jumper wires

## Adapting image resolution

Search for an image you want to display, like this one:

![image](https://user-images.githubusercontent.com/79780807/156453515-729198b2-9559-4cc8-870e-73189118c80f.png)

If you download it, you will see it has a lot of (useless) pixels. I only got 128x64 pixels on my OLED display, so I will have to reduce the resolution.

* Open it on Photoshop
* Go to Image->Image size...
* ![image](https://user-images.githubusercontent.com/79780807/156455017-2308a53b-1f27-4e38-aae5-115b9f5bdea1.png)

* Set the resolution to 128x64, and "Nearest neighbor (preserv hard edges)" so we still get the square "pixels" after the reduction
* Note that I have deleted the gey background because my OLED only uses black and white colours
* Save the image as a bitmap

## Bitmap converter

* Go to https://marlinfw.org/tools/u8glib/converter.html
* Upload your bitmap image, it will return an array
* Now we can copy that array to our code

I have uploaded the code I used to make this for my girlfriend:


https://user-images.githubusercontent.com/79780807/156472561-74ea6aab-1d7e-484f-8ac6-26b68764b27a.mp4

![ee6d7011-045e-4fc9-9849-482680ccba74](https://user-images.githubusercontent.com/79780807/156473103-0f65ca5a-3a58-44bd-8d37-8e65d9d52038.gif)
      One bitmap is the cats image, and I drew the other one with photoshop and followed the same steps
If you need more information about how to implement the circuit or the code, you can read this tutorial https://www.electronicshub.org/esp32-oled-display/

## Contact

If you want to contact me you can reach me at Mariano_Desivo@hotmail.com.

## License

This project uses the following license: [MIT License](https://github.com/MarianoDesivo/MarianoTV/blob/main/LICENSE).
