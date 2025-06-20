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
	ofSetFrameRate(60);
	ofSetCircleResolution(100); 
	ofEnableAntiAliasing(); 
	// 5

}

//--------------------------------------------------------------
void ofApp::update(){
	x += 0.1 + ofRandom(5); // Increment x for cosine wave
	y += 0.1 + ofRandom(5); // Increment y for sine wave
	// 2
}

// Fix for lnt-integer-float-division and E0439 errors
void ofApp::draw() {

    double dsin = 100*sin(y);    
    double dcos = 100*cos(x);


	spdlog::info("dcos {}!", dcos);
	spdlog::info("dsin {}!", dsin);

	// Draw the circle circling around the center of the window
	// also check bounds to prevent it from going off-screen
    if (ofGetWidth() / 2.0 + dcos > ofGetWidth() || ofGetHeight() / 2.0 + dsin > ofGetHeight() ||
        ofGetWidth() / 2.0 + dcos < 0 || ofGetHeight() / 2.0 + dsin < 0) {
        dsin -= dsin; // Reset dsin
        dcos -= dcos; // Reset dcos
    }

    ofSetColor(255, 0, 0); // Set color to red
    ofDrawCircle(ofGetWidth() / 2.0 + dcos, ofGetHeight() / 2.0 + dsin, 50);

	if (ofGetElapsedTimeMillis() % 333 < 1000) {
		ofSetColor(0, 0, 255); // Set color to blue
		ofDrawCircle(ofGetWidth() / 2.0 + dcos, ofGetHeight() / 2.0 + dsin, 50);
	} else if (ofGetElapsedTimeMillis() % 666 < 1000) {
		ofSetColor(0, 255, 0); // Set color to green
		ofDrawCircle(ofGetWidth() / 2.0 + dcos, ofGetHeight() / 2.0 + dsin, 50);
	} else if (ofGetElapsedTimeMillis() % 999 < 1000) {
		ofSetColor(255, 0, 0); // Set color to green
		ofDrawCircle(ofGetWidth() / 2.0 + dcos, ofGetHeight() / 2.0 + dsin, 50);
	}

	dsin += ofRandom(100);
	dcos += ofRandom(100);

	// 13
	// 22 total
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
