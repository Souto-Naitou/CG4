#include "CG4.h"

#include <Features/SceneManager/SceneManager.h>
#include <Scene/Factory/SceneFactory.h>

void CG4::Initialize()
{
    /// 基底クラスの初期化処理
    NimaFramework::Initialize();

    #ifdef _DEBUG
    pImGuiManager_->EnableDocking();
    //pImGuiManager_->EnableMultiViewport();
    pImGuiManager_->StyleMaterialFlat();
    #endif // _DEBUG

    /// シーンファクトリの設定
    pSceneFactory_ = std::make_unique<SceneFactory>();
    pSceneManager_->SetSceneFactory(pSceneFactory_.get());

    /// モデルを全てロード
    pModelManager_->LoadAllModel();
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