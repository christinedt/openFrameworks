#pragma once

#include "ofMain.h"

/*************************************************************************
*
* This openFrameworks example demonstrates how to load audio files, play 
* sounds interactively and how to manipulate their pan and playback speed.
*
* For more information regarding this example take a look at the README.md
*
*************************************************************************/

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		ofSoundPlayer  beats;
		ofSoundPlayer  synth;
		ofSoundPlayer  vocals;

		ofTrueTypeFont	font;
		float 			synthPosition;
		
};

