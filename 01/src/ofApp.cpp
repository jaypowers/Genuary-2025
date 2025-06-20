#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update() {
}

//--------------------------------------------------------------
void ofApp::draw() {
	for (int i = 0; i < 16; i++) {
		// Calculate the x and y position for each rectangle
		// 16 total rectangles, arranged horizontally, their height is ofGetHeight()/16 piexls, each one has a width of ofGetWidth()
		// also, the colors will alternate from red to blue based on the index
		if (i % 2 == 0) {
			ofSetColor(255, 0, 0); // Red for even indices
		} else {
			ofSetColor(0, 0, 255); // Blue for odd indices
		}
		ofDrawRectangle(0, i * (ofGetHeight() / 16), ofGetWidth(), ofGetHeight() / 16);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == OF_KEY_ESC) {
		ofExit();
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {
}
