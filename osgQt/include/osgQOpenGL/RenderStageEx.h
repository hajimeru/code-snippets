#ifndef RENDERSTAGEEX_H
#define RENDERSTAGEEX_H

#include <osgQOpenGL/Export>

#include <osgUtil/RenderStage>

class OSGQOPENGL_EXPORT RenderStageEx : public osgUtil::RenderStage
{
public:
    virtual void drawInner(osg::RenderInfo& renderInfo,
                           osgUtil::RenderLeaf*& previous, bool& doCopyTexture);
};

#endif // RENDERSTAGEEX_H
