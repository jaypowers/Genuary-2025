#include "ofApp.h"
#include <cmath>

//--------------------------------------------------------------
void ofApp::setup(){

	// Start 42 lines of code exactly

	ofSetWindowTitle("Genuary 2025 - 03");
	ofBackground(0, 0, 0);
	ofSetFrameRate(60);
	ofSetCircleResolution(100); 
	ofEnableAntiAliasing(); 

	// End, 6 so far
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	// Start 42 lines of code exactly
	double dsinh = 10*sinh(ofGetElapsedTimef());
	double dcosh = 10*cosh(ofGetElapsedTimef());

	ofSetColor(255, 0, 0); // Set color to white
	//ofDrawCircle(ofGetWidth() / 2 + dcosh, ofGetHeight() / 2 + dsinh, 50); 

	// set bounds to avoid drawing outside the window
	if (ofGetWidth() / 2 + dcosh > ofGetWidth() || ofGetHeight() / 2 + dsinh > ofGetHeight() ||
		ofGetWidth() / 2 + dcosh < 0 || ofGetHeight() / 2 + dsinh < 0) {
		dsinh -= dsinh;
		dcosh -= dcosh;
		ofDrawCircle(ofGetWidth() / 2 + dcosh, ofGetHeight() / 2 + dsinh, 50);
	}

	// End, 11 so far
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
