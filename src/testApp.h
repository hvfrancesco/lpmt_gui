#pragma once

#include "ofMain.h"
#include "ofxUI.h"
#include "ofxOsc.h"

class testApp : public ofBaseApp{

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
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void exit();


		ofxUICanvas *gui1;
        ofxUICanvas *gui2;
        ofxUICanvas *gui3;

        void setGUI1();
        void setGUI2();
        void setGUI3();

        void guiEvent(ofxUIEventArgs &e);

        ofxOscSender guiOscSender;
        string host;
        int port;

        int activeQuad;

        // values for gui
        float timelineDurationSeconds;
        bool isOn;
        bool useTimeline;
        bool bTimelineColor;
        bool bTimelineAlpha;
        bool bTimelineSlideChange;
        bool imgBg;
        float imgMultX;
        float imgMultY;
        bool imgHFlip;
        bool imgVFlip;
        ofFloatColor imgColorize;
        bool colorBg;
        ofFloatColor bgColor;
        bool transBg;
        ofFloatColor secondColor;
        float transDuration;
        bool bBlendModes;
};
