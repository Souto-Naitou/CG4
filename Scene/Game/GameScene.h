#pragma once

#include <Interfaces/IScene.h>
#include <Features/Text/Text.h>

#include <memory>

class GameScene : public IScene
{
public:
    void Initialize() override;

    void Finalize() override;

    void Update() override;

    void Draw2dBackGround() override;

    void Draw3dMidground() override;

    void Draw2dMidground() override;

    void DrawLine() override;

    void Draw3d() override;

    void Draw2dForeground() override;

    void DrawTexts() override;

private:
    std::unique_ptr<Text> pText_SceneName_;
};