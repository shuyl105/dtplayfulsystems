#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
/*basic way to move*/
    circleCenter.set(ofGetWidth()/2, ofGetHeight()/2);
//    desitination.set(ofGetWidth() - 50, ofGetHeight()/2);
    desitination.set(mouseX, mouseY);
    ofSetBackgroundAuto(false);
    ofSetColor(255, 255, 255, 8);
    ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void testApp::update(){
/*basic way to move*/
//    if (circleCenter.x == desitination.x) {
//        circleCenter.x = desitination.x;
//    }else{
//        circleCenter.x += 1;
//    }

/*cricle seeks desitination using this logic*/
    if(circleCenter.distance(desitination) <= 0.1){
        //circle has arrived
        circleCenter = desitination;
    }else{
        //circle hasn't arrived yet, keep moving!
        circleCenter.interpolate(desitination, 0.015);
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    ofDrawBitmapString(ofToString(circleCenter.distance(desitination)), 10, 10);
    ofCircle(circleCenter, 10);
    ofCircle(desitination, 0);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
/*so the circle will follow your mouse*/
    desitination.set(x, y);
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
/*reset*/
//    circleCenter.set(ofGetWidth()/2, ofGetHeight()/2);
/*ball will be exact your mouse is*/
//    circleCenter.set(mouseX, mouseY);
    if (button == 0) {
        circleCenter.set(x, y);
    } else if(button == 2){
        desitination.set(x, y);
    }
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
