#include "SceneFactory.h"

#include <Scene/Game/GameScene.h>

#include <cassert>

#define JUDGE_SCENE(class) if (_sceneName == #class) { return std::make_unique<class>(); }

std::unique_ptr<IScene> SceneFactory::CreateScene(const std::string & _sceneName)
{
    JUDGE_SCENE(GameScene)

    assert(false && "シーンの生成に失敗しました");

    return nullptr;
}
