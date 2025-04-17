#include "CG4.h"

#include <Features/SceneManager/SceneManager.h>
#include <Scene/Factory/SceneFactory.h>

void CG4::Initialize()
{
    NimaFramework::Initialize();

    /// シーンファクトリの設定
    pSceneFactory_ = std::make_unique<SceneFactory>();
    pSceneManager_->SetSceneFactory(pSceneFactory_.get());

    /// シーンの生成
    pSceneManager_->ReserveScene("GameScene");
}

void CG4::Finalize()
{
    NimaFramework::Finalize();
}

void CG4::Update()
{
    NimaFramework::Update();
}

void CG4::Draw()
{
    /// 描画前処理
    NimaFramework::PreProcess();


    /// バックバッファ書き込み
    NimaFramework::Draw();


    /// 描画後処理
    NimaFramework::PostProcess();
}

void CG4::DrawHighPerformance()
{
    /// 描画前処理
    NimaFramework::PreProcess();


    /// 高パフォーマンス描画
    NimaFramework::DrawHighPerformance();


    /// 描画後処理
    NimaFramework::PostProcess();
}
