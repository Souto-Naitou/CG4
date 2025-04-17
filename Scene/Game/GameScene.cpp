#include "GameScene.h"

void GameScene::Initialize()
{
    /// テキストの初期化
    pText_SceneName_ = std::make_unique<Text>();
    pText_SceneName_->Initialize();
    pText_SceneName_->SetName("SceneName");
    pText_SceneName_->SetText("GameScene");
    pText_SceneName_->SetFontFamily("Bahnschrift");
    pText_SceneName_->SetFontSize(50.0f);
    pText_SceneName_->SetColorName("White");
    pText_SceneName_->SetPosition({ 0.0f, 0.0f });
    pText_SceneName_->SetMaxSize({ 1000.0f, 1000.0f });
    pText_SceneName_->SetAnchorPoint(TextStandardPoint::Center);
    pText_SceneName_->SetPivot(TextStandardPoint::Center);
}

void GameScene::Finalize()
{
    pText_SceneName_->Finalize();
}

void GameScene::Update()
{
    /// テキストの更新
    pText_SceneName_->Update();
}

void GameScene::Draw2dBackGround()
{
}

void GameScene::Draw3dMidground()
{
}

void GameScene::Draw2dMidground()
{
}

void GameScene::DrawLine()
{
}

void GameScene::Draw3d()
{
}

void GameScene::Draw2dForeground()
{
}

void GameScene::DrawTexts()
{
    pText_SceneName_->Draw();
}
