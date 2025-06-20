#include "ofApp.h"

#define WIDTH 1024
#define HEIGHT 768

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowTitle("Genuary 2025 - 04");
	ofBackground(255);
	ofSetFrameRate(2);
	ofBlendMode(OF_BLENDMODE_ADD);
}

//--------------------------------------------------------------
void ofApp::update(){
	ofSetColor(0,0,0, 240);
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofPushMatrix();
		ofDrawRectangle(ofRandom(WIDTH), ofRandom(HEIGHT), ofRandom(WIDTH), ofRandom(HEIGHT));
		ofDrawRectangle(ofRandom(WIDTH), ofRandom(HEIGHT), ofRandom(WIDTH), ofRandom(HEIGHT));
	ofPopMatrix();
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
