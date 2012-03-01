#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    host = "localhost";
    port = 12345;


    // gui variables
    activeQuad = 3;

    isOn = true;
    useTimeline = false;
    timelineDurationSeconds = 10.0;
    bTimelineColor = false;
    bTimelineAlpha = false;
    bTimelineSlideChange = false;
    imgBg = false;
    imgMultX = 1.0;
    imgMultY = 1.0;
    imgHFlip = false;
    imgVFlip = false;
    imgColorize.r = 1.0;
    imgColorize.g = 1.0;
    imgColorize.b = 1.0;
    imgColorize.a = 1.0;
    colorBg = false;
    bgColor.r = 0.0;
    bgColor.g = 0.0;
    bgColor.b = 0.0;
    bgColor.a = 0.0;
    transBg = false;
    secondColor.r = 0.0;
    secondColor.g = 0.0;
    secondColor.b = 0.0;
    secondColor.a = 0.0;
    transDuration = 1.0;
    bBlendModes = false;

    // open an outgoing connection to HOST:PORT
	guiOscSender.setup( host, port );

	setGUI1();
    ofBackground(150,150,150);


}

//--------------------------------------------------------------
void testApp::update(){
}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::exit()
{
	delete gui1;
	delete gui2;
    delete gui3;
}

//--------------------------------------------------------------
void testApp::guiEvent(ofxUIEventArgs &e){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
