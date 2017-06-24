#include "ofApp.h"
#include "Matrix.h"

Matrix mat;
Matrix mat2;
Matrix mat3;

//--------------------------------------------------------------
void ofApp::setup()
{
	//mat.Ident();
	mat.Floats(1,1,1,1,1,1,1,1,1);
	mat2.Floats(2,3,3,3,3,3,3,3,4);
	//mat.getDeterm();
	//mat.getInversa();
	mat2.print();
	mat2 = mat;
	mat2.print();
	//mat3 = mat * mat2;
	//mat3 *= mat2;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
