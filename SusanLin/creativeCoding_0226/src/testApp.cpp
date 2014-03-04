#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void testApp::update(){
}

void testApp::xCoordinateOnLine(float t, float x1, float x2){
    t = ofClamp(t, 0, 1);
    return(x2 - x1)*t + x1;
}

void testApp::yCoordinateOnLine(float t, float x1, float x2){
    t = ofClamp(t, 0, 1);
    return(x2 - x1)*t + x1;
}

//--------------------------------------------------------------
void testApp::draw(){
/*random color boxes*/
/*    for(int i = 0; i<100; i++){
        for (int j = 0; j<100; j++){
            ofSetColor(255*ofNoise(i, j, mouseY*0.001, 1), 255*ofNoise(i, j, mouseY*0.001, 1), 255*ofNoise(i, j, mouseY*0.001, 1));
            ofRect(i*10, j*10, 10, 10);
        }
    }*/

/*mouse movement>>change background color*/
    float mouseX01 = ofClamp((float)mouseX/ofGetWidth(), 0, 1);
    int minGrey = 120;
    int maxGrey = 200;
    float g = (maxGrey-minGrey) * mouseX01 + minGrey;
    
//    rofBackground(g, g, g);
    
//    float circleX = ofMap(mouseX, 0, ofGetWidth(), 50, 350, true);
//    float circleY = ofMap(mouseY, 0, ofGetWidth(), 100, 300, true);
//    float circleY = ofMap(mouseY, 0, ofGetWidth(), 450, 350 + sin(ofGetElapsedTimef() * 5) * 20, true);
    
    float circleX = xCoordinateOnLine(mouseX01, 50, 350);
    float circleY = yCoordinateOnLine(mouseX01, 50, 350);
    
    
    ofCircle(circleX, circleY, 2);
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
