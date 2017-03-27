//
//  Smoke.cpp
//  week5Homework3
//
//  Created by Hazal Mestci on 2/24/17.
//
//

#include "Smoke.hpp"

Smoke::Smoke() {
    
    
}


void Smoke::setup(float _x, float _y) {
    x= _x;
    y= _y;
    
    a= 50;
    lifetime = 550;
    
    xDir= ofRandom(cos(ofGetElapsedTimef())+10, ofRandom(-100, 100));
    yDir= ofRandom(cos(ofGetElapsedTimef())-10, ofRandom(-100, 100));
}



void Smoke::draw() {
    
    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255), ofRandom(a));
    
    ofDrawCircle(x, y, s);
    ofDrawRectangle(x,y,s,s);
    
}


void Smoke::move() {
    
    
}


void Smoke::update() {
    
    //count down the life
    lifetime --;
    //smoke rises, move up
    y-= yDir*2;
    x+= xDir*2;
    //reduce alpha
    if (a >0) {
        a-=0.5;
    }
    //increase or decrease the size
    s=ofMap(a, 50, 0, -30, 170);
    
    
}
