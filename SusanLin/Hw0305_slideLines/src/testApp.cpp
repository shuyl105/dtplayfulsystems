#include "testApp.h"

void testApp::drawShape(float x, float y){
    
}

float phase;
float rot;
float Xpos, Ypos;

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    ofSetBackgroundAuto(false);
    ofBackground(255, 255, 255);
    Xpos = 0;
    Ypos = 0;
}

//--------------------------------------------------------------
void testApp::update(){
    phase += 0.01;
//    rot += 1;
}

//--------------------------------------------------------------
void testApp::draw(){


    
     ofPoint pos;
    float radius = 200.0;
    //原点を画面の中心点に
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    //円の座標を三角関数を利用して計算
    pos.x = cos(phase) * radius;
    
    pos.y = sin(phase) * radius;
    //色を指定
    ofSetColor(0, 127, 255);
    //円の描画
    ofRect(pos.x, pos.y, 10, 10);

//    //半径の設定
//    float radius = 200.0;
//    //原点を画面の中心点に
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    //座標系全体を回転
//    ofRotateZ(rot);
//    //色の設定
//    ofSetColor(0, 127, 255);
//    //円の描画
//    ofRect(radius, 0, 4, 4);
    
    
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
