//
//  HelloCocosBuilder.cpp
//  HelloCpp
//
//  Created by JiaNiao on 15/3/12.
//
//

#include "HelloCocosBuilder.h"

USING_NS_CC;
USING_NS_CC_EXT;

CCScene* HelloCocosBuilder::scene()
{
    CCScene *scene = CCScene::create();
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    CCBReader *reader = new CCBReader(lib);
    CCNode *node = reader->readNodeGraphFromFile("CCBIFiles/MainScene.ccbi", scene);
    reader->release();
    if(node != NULL)
    {
        scene->addChild(node);
    }
    return scene;
}