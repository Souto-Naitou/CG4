#include "SceneFactory.h"

#include <Scene/CG4Task1/CG4Task1.h>

#include <cassert>

#define JUDGE_SCENE(class) if (_sceneName == #class) { return std::make_unique<class>(); }

std::unique_ptr<IScene> SceneFactory::CreateScene(const std::string & _sceneName)
{
    JUDGE_SCENE(CG4Task1)

    assert(false && "シーンの生成に失敗しました");

    return nullptr;
}
