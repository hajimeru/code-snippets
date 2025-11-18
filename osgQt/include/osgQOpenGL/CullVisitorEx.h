#ifndef CULLVISITOREX_H
#define CULLVISITOREX_H

#include <osgQOpenGL/Export>

#include <osgUtil/CullVisitor>

class OSGQOPENGL_EXPORT CullVisitorEx : public osgUtil::CullVisitor
{
public:
    META_NodeVisitor(Ex, CullVisitorEx)

    CullVisitorEx() {}
    CullVisitorEx(const CullVisitorEx& cv) : osgUtil::CullVisitor(cv) { }
    CullVisitorEx* clone() const
    {
        return new CullVisitorEx(*this);
    }

    virtual void apply(osg::Camera& camera);
};

#endif // CULLVISITOREX_H
