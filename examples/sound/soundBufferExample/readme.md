#soundBufferExample
--
![Screenshot of Example](soundBufferExample.png)

###Learning Objectives

This Example demonstrates how to generate and manipulate audio samples using ofSoundBuffer.

Studying the code behind this example will help you understand:

* How to use mutex to prevent problems associated with using a variable in two threads at once
* How to calculate sound samples and play them with a sound buffer


### Expected Behavior

When launching this app, you should see 

* A moving white waveform against a black background


### Classes used in this example

This example uses the following classes: 

* ``mutex``
* ``ofSoundBuffer``
* ``ofPolyline``