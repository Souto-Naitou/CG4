#pragma once

#include <Framework/NimaFramework.h>

class CG4 : public NimaFramework
{
public:
    void Initialize() override;

    void Finalize() override;

    void Update() override;

    void Draw() override;

    bool IsExitProgram()
    {
        return isExitProgram_;
    }

private:

};