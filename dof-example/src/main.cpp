#include "testApp.h"

//--------------------------------------------------------------
int main(){
    ofGLWindowSettings settings;
    settings.setGLVersion(3,2);
//    settings.setGLVersion(2, 1);
    settings.width = 1280;
    settings.height = 720;
    ofCreateWindow(settings);
	ofRunApp(new testApp()); // start the app
}
