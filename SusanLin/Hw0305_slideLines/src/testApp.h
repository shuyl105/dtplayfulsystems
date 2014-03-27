#pragma once //include this file once when you open the file

#include "ofMain.h"

/********** example in class 0305 *************/

//class is a blueprint
class Person{
//all the variable is private(defulte)
public:
    float height;
    string job;
    
    void work();
    string identfySelf();
    void sayHiTo(string pal);
};
//later in testApp.cpp make object

//Person nasser;
//nasser.height = 170;
//nasser.job = "teacher";


class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        void drawShape(float x, float y);
		
};
