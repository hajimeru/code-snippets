#ifndef STATEEX_H
#define STATEEX_H

#include <osgQOpenGL/Export>

#include <osg/State>

class OSGQOPENGL_EXPORT StateEx : public osg::State
{
public:
    StateEx() : defaultFbo(0) {}
    inline void setDefaultFbo(GLuint fbo)
    {
        defaultFbo = fbo;
    }
    inline GLuint getDefaultFbo() const
    {
        return defaultFbo;
    }

protected:
    GLuint defaultFbo;
};

#endif // STATEEX_H
