#include "testApp.h"

void testApp::setGUI1()
{

	float dim = 16;
	float xInit = OFX_UI_GLOBAL_WIDGET_SPACING;
    float length = 500-xInit;

    vector<string> blendModes;
	blendModes.push_back("screen");
	blendModes.push_back("add");
	blendModes.push_back("subtract");
	blendModes.push_back("multiply");

	gui1 = new ofxUICanvas(0, 0, length+xInit, ofGetHeight());
	gui1->addWidgetDown(new ofxUILabel("Surface "+ofToString(activeQuad), OFX_UI_FONT_LARGE));
    gui1->addWidgetDown(new ofxUIToggle( dim, dim, isOn, "show/hide"));

    gui1->addWidgetDown(new ofxUISlider(length-xInit,dim, 10.0, 1200.0, timelineDurationSeconds, "timeline seconds"));
    gui1->addWidgetDown(new ofxUIToggle( dim, dim, useTimeline, "use timeline"));
    gui1->addWidgetRight(new ofxUIToggle( dim, dim, bTimelineColor, "timeline col"));
    gui1->addWidgetRight(new ofxUIToggle( dim, dim, bTimelineAlpha, "timeline alpha"));
    gui1->addWidgetRight(new ofxUIToggle( dim, dim, bTimelineSlideChange, "timeline slides"));
    gui1->addWidgetDown(new ofxUISpacer(length-xInit, 2));
    gui1->addWidgetDown(new ofxUILabel("IMAGE", OFX_UI_FONT_MEDIUM));

    gui1->addWidgetEastOf(new ofxUIButton(dim, dim, false, "load image"), "IMAGE");
    gui1->addWidgetRight(new ofxUIToggle( dim, dim, imgBg, "image on/off"));

    //gui1->addWidgetDown(new ofxUILabel("image color", OFX_UI_FONT_SMALL));
    //gui1->addWidgetSouthOf(new ofxUILabel("solid color", OFX_UI_FONT_SMALL), "img A");
    gui1->addWidgetDown(new ofxUISlider(dim,120, 0.0, 1.0, imgColorize.r, "img R"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, imgColorize.g, "img G"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, imgColorize.b, "img B"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, imgColorize.a, "img A"));
    gui1->addWidgetEastOf(new ofxUISlider((length/2-xInit),dim, 0.05, 5.0, imgMultX, "img scale X"),"img A");
    gui1->addWidgetSouthOf(new ofxUISlider((length/2-xInit),dim, 0.05, 5.0, imgMultY, "img scale Y"), "img scale X");
    gui1->addWidgetSouthOf(new ofxUIToggle( dim, dim, imgHFlip, "img H mirror"), "img scale Y");
    gui1->addWidgetEastOf(new ofxUIToggle( dim, dim, imgVFlip, "img V mirror"), "img H mirror");
    gui1->addWidgetSouthOf(new ofxUISpacer(length-xInit, 2), "img R");
    gui1->addWidgetDown(new ofxUILabel("SOLID COLOR", OFX_UI_FONT_MEDIUM));
    gui1->addWidgetEastOf(new ofxUIToggle( dim, dim, colorBg, "color on/off"), "SOLID COLOR");
    gui1->addWidgetEastOf(new ofxUIToggle( dim, dim, transBg, "color transition"), "color on/off");
    gui1->addWidgetDown(new ofxUISlider(dim,120, 0.0, 1.0, bgColor.r, "R1"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, bgColor.g, "G1"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, bgColor.b, "B1"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, bgColor.a, "A1"));
    gui1->addWidgetRight(new ofxUISpacer(2, 120));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, secondColor.r, "R2"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, secondColor.g, "G2"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, secondColor.b, "B2"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, secondColor.a, "A2"));
    gui1->addWidgetRight(new ofxUISpacer(2, 120));
    gui1->addWidgetRight(new ofxUISlider(180,dim, 0.1, 60.0, transDuration, "trans duration"));
    gui1->addWidgetSouthOf(new ofxUISpacer(length-xInit, 2), "R1");
    //gui1->addWidgetDown(new ofxUILabel("BLENDING MODE", OFX_UI_FONT_MEDIUM));
	gui1->addWidgetDown(new ofxUIRadio( dim, dim, "BLENDING MODE", blendModes, OFX_UI_ORIENTATION_HORIZONTAL));
	gui1->addWidgetRight(new ofxUIToggle( dim, dim, bBlendModes, "blending on/off"));




	ofAddListener(gui1->newGUIEvent,this,&testApp::guiEvent);
}
