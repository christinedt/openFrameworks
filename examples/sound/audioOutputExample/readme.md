#audioOutputExample
--
![Screenshot of Example](audioInputExample.gif)

###Learning Objectives

This openFrameworks example is designed to demonstrate how to access and manipulate your audio output's raw data.

Studying the code behind this example will help you understand:

* How to list all available audio devices with `soundStream.printDeviceList()` and set a specific audio output device for OF app with `settings.setOutDevice(devices[0])`
* How audio functions work independent from draw and update loop
* How to synthesize noise and tones in your audio output


### Expected Behavior

When launching this app, you should see 

* Two rectangles with fast moving curved lines
* Text expressing the pan and frequency variables as they change with mouse movement

Instructions for use:

* move your mouse to change the pan and frequency of the audio output
* click your mouse to generate noise instead of tone
* press `e` to stop live audio output, `s` to continue 




### Classes used in this example

This example uses the following classes: 

* ``ofSoundStream``