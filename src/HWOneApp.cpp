#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HWOneApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();

  private:
	Surface* mySurface_;
};

void HWOneApp::setup()
{
}

void HWOneApp::mouseDown( MouseEvent event )
{
}

void HWOneApp::update()
{
}

void HWOneApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
	float x = cos(getElapsedSeconds());
	float y = sin(getElapsedSeconds());
	gl::drawSolidCircle(Vec2f(x, y)+getWindowSize()/2, 50.0f);
}

CINDER_APP_BASIC( HWOneApp, RendererGl )
