#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

}

//--------------------------------------------------------------
void testApp::update(){

}

void testApp::pointOnLine(float t, ofPoint p1, ofPoint p2){
    t = ofClamp(t, 0, 1);
    return (p2 - p1) * t +p1;
}

//--------------------------------------------------------------
void testApp::draw(){
    ofPoint from, to, circleCenter;
    from.set(50, ofGetHeight()/2);
    to.set(ofGetWidth()/2 - 50, ofGetHeight());
    
    circleCenter = pointOnLine(ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, 1), from, to);
    
    //draw a circle
    ofCircle(circleCenter, 10);
    
    //draw control points and line
    ofCircle(from, 2);
    ofCircle(to, 2);
    ofline(from, to);
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
