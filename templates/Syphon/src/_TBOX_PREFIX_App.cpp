// Written by Benjamin Bojko https://github.com/benjaminbojko/Cinder-Syphon-Demo
// Adapted by Bruce Lane https://github.com/brucelane

#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

#include "cinderSyphon.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class _TBOX_PREFIX_App : public App {
public:
    void setup() override;
    void update() override;
    void draw() override;
    
    syphonServer   mServer;
};

void _TBOX_PREFIX_App::setup()
{
    mServer.setName("Cinder Syphon Demo");
}

void _TBOX_PREFIX_App::update()
{
}

void _TBOX_PREFIX_App::draw()
{
    gl::clear(Color(sinf(getElapsedSeconds() * 1.0f) * 0.25f + 0.5f,
                    sinf(getElapsedSeconds() * 0.6f) * 0.25f + 0.5f,
                    sinf(getElapsedSeconds() * 0.3f) * 0.25f + 0.5f));
    
    gl::enableAlphaBlending();
    gl::drawStringCentered("Hello from Cinder!", getWindowCenter() - vec2(0, 32), Color::white(), Font("Arial", 64));
    gl::disableAlphaBlending();
    
    mServer.publishScreen();
}

CINDER_APP( _TBOX_PREFIX_App, RendererGl(RendererGl::Options().msaa(8)) )
