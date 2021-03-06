#ifndef __SNAGFOREST_SCENE_H__
#define __SNAGFOREST_SCENE_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "SnagForestLayer.h"
//#include "DevilLayer.h"

#define CREATE_FUNC_PHY(__TYPE__) \
static __TYPE__* createWithPhysics() \
{ \
__TYPE__ *pRet = new __TYPE__(); \
if (pRet && pRet->initWithPhysics()) \
{ \
pRet->autorelease(); \
return pRet; \
} \
else \
{ \
delete pRet; \
pRet = NULL; \
return NULL; \
} \
}

class SnagForestScene: public cocos2d::Scene
{
public:
	SnagForestScene();
	virtual ~SnagForestScene(void);

	virtual bool initWithPhysics();
	CREATE_FUNC_PHY(SnagForestScene);

	CC_SYNTHESIZE(SnagForestLayer*, _snagForestLayer, SnagForestLayer);
	//CC_SYNTHESIZE(DevilLayer*, _devilLayer, DevilLayer);

};

#endif // __SNAGFOREST_SCENE_H__