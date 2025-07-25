#include "ofApp.h"
#include "spdlog/spdlog.h"
#include <cmath>

double y = 0.0; // Initialize y for sine wave
double x = 0.0; // Initialize x for cosine wave
// 2

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetWindowTitle("Genuary 2025 - 03");
	ofBackground(0, 0, 0);
	ofSetFrameRate(3);
	ofSetCircleResolution(100); 
	ofEnableAntiAliasing(); 
	ofTranslate(-ofGetWidth() / 2.0, -ofGetHeight() / 2.0); // Center the drawing

}

//--------------------------------------------------------------
void ofApp::update(){
}

// Fix for lnt-integer-float-division and E0439 errors
void ofApp::draw() {

	double dsin = ofRandom(ofGetWidth()/2);
	double dcos = ofRandom(ofGetHeight()/2);

	spdlog::info("dcos {}!", dcos);
	spdlog::info("dsin {}!", dsin);

    ofSetColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255)); // Set color to red
    ofDrawCircle(ofGetWidth() / 2.0 + dcos, ofGetHeight() / 2.0 + dsin, 50);
	

	// 14
	// 23 total
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
