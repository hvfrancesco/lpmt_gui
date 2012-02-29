#include "testApp.h"

void testApp::setGUI1()
{

	float dim = 16;
	float xInit = OFX_UI_GLOBAL_WIDGET_SPACING;
    float length = 500-xInit;

    vector<string> names;
	names.push_back("RAD1");
	names.push_back("RAD2");
	names.push_back("RAD3");

	gui1 = new ofxUICanvas(0, 0, length+xInit, ofGetHeight());
	gui1->addWidgetDown(new ofxUILabel("Surface "+ofToString(activeQuad), OFX_UI_FONT_LARGE));
    gui1->addWidgetDown(new ofxUIToggle( dim, dim, isOn, "show/hide"));

    gui1->addWidgetDown(new ofxUISlider(length-xInit,dim, 10.0, 1200.0, timelineDurationSeconds, "timeline seconds"));
    gui1->addWidgetDown(new ofxUIToggle( dim, dim, useTimeline, "use timeline"));
    gui1->addWidgetRight(new ofxUIToggle( dim, dim, bTimelineColor, "timeline col"));
    gui1->addWidgetRight(new ofxUIToggle( dim, dim, bTimelineAlpha, "timeline alpha"));
    gui1->addWidgetRight(new ofxUIToggle( dim, dim, bTimelineSlideChange, "timeline slides"));
    gui1->addWidgetDown(new ofxUILabel("image", OFX_UI_FONT_MEDIUM));
    gui1->addWidgetDown(new ofxUISpacer(length-xInit, 2));
    gui1->addWidgetDown(new ofxUIButton(dim, dim, false, "load image"));
    gui1->addWidgetRight(new ofxUIToggle( dim, dim, imgBg, "image on/off"));
    gui1->addWidgetRight(new ofxUIToggle( dim, dim, imgHFlip, "img H mirror"));
    gui1->addWidgetRight(new ofxUIToggle( dim, dim, imgVFlip, "img V mirror"));
    gui1->addWidgetDown(new ofxUISlider((length/2-xInit),dim, 0.05, 5.0, imgMultX, "img scale X"));
    gui1->addWidgetRight(new ofxUISlider((length/2-xInit),dim, 0.05, 5.0, imgMultY, "img scale Y"));
    gui1->addWidgetDown(new ofxUILabel("image color", OFX_UI_FONT_SMALL));
    gui1->addWidgetDown(new ofxUISlider(dim,120, 0.0, 1.0, imgColorize.r, "R"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, imgColorize.g, "G"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, imgColorize.b, "B"));
    gui1->addWidgetRight(new ofxUISlider(dim,120, 0.0, 1.0, imgColorize.a, "A"));

	gui1->addWidgetDown(new ofxUILabel("H SLIDERS", OFX_UI_FONT_MEDIUM));
	//gui1->addWidgetDown(new ofxUISlider(length-xInit,dim, 0.0, 255.0, red, "RED"));
	//gui1->addWidgetDown(new ofxUISlider(length-xInit,dim, 0.0, 255.0, green, "GREEN"));
	//gui1->addWidgetDown(new ofxUISlider(length-xInit,dim, 0.0, 255.0, blue, "BLUE"));

    gui1->addWidgetDown(new ofxUISpacer(length-xInit, 2));
    gui1->addWidgetDown(new ofxUILabel("V SLIDERS", OFX_UI_FONT_MEDIUM));
	gui1->addWidgetDown(new ofxUISlider(dim,160, 0.0, 255.0, 150, "0"));
	gui1->addWidgetRight(new ofxUISlider(dim,160, 0.0, 255.0, 150, "1"));
	gui1->addWidgetRight(new ofxUISlider(dim,160, 0.0, 255.0, 150, "2"));
	gui1->addWidgetRight(new ofxUISlider(dim,160, 0.0, 255.0, 150, "3"));
	gui1->addWidgetRight(new ofxUISlider(dim,160, 0.0, 255.0, 150, "4"));
	gui1->addWidgetRight(new ofxUISlider(dim,160, 0.0, 255.0, 150, "5"));
	gui1->addWidgetRight(new ofxUISlider(dim,160, 0.0, 255.0, 150, "6"));
	gui1->addWidgetRight(new ofxUISlider(dim,160, 0.0, 255.0, 150, "7"));
	gui1->addWidgetRight(new ofxUISlider(dim,160, 0.0, 255.0, 150, "8"));

    gui1->addWidgetDown(new ofxUISpacer(length-xInit, 2));
	gui1->addWidgetDown(new ofxUIRadio( dim, dim, "RADIO HORIZONTAL", names, OFX_UI_ORIENTATION_HORIZONTAL));
	gui1->addWidgetDown(new ofxUIRadio( dim, dim, "RADIO VERTICAL", names, OFX_UI_ORIENTATION_VERTICAL));

    gui1->addWidgetDown(new ofxUISpacer(length-xInit, 2));
	gui1->addWidgetDown(new ofxUILabel("BUTTONS", OFX_UI_FONT_MEDIUM));
	gui1->addWidgetDown(new ofxUIButton( dim, dim, false, "DRAW GRID"));
	gui1->addWidgetDown(new ofxUILabel("TOGGLES", OFX_UI_FONT_MEDIUM));
	gui1->addWidgetDown(new ofxUIToggle( dim, dim, false, "D_GRID"));

    gui1->addWidgetDown(new ofxUISpacer(length-xInit, 2));
    gui1->addWidgetDown(new ofxUILabel("RANGE SLIDER", OFX_UI_FONT_MEDIUM));
	gui1->addWidgetDown(new ofxUIRangeSlider(length-xInit,dim, 0.0, 255.0, 50.0, 100.0, "RSLIDER"));

    gui1->addWidgetDown(new ofxUISpacer(length-xInit, 2));
	gui1->addWidgetDown(new ofxUILabel("2D PAD", OFX_UI_FONT_MEDIUM));
	gui1->addWidgetDown(new ofxUI2DPad(length-xInit,120, ofPoint((length-xInit)*.5,120*.5), "PAD"));


	ofAddListener(gui1->newGUIEvent,this,&testApp::guiEvent);
}
