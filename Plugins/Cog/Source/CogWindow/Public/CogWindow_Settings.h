#pragma once

#include "CoreMinimal.h"
#include "CogWindow.h"

class COGWINDOW_API FCogWindow_Settings : public FCogWindow
{
    typedef FCogWindow Super;

public:
    
    virtual void Initialize() override;

protected: 

    virtual void RenderContent() override;
};
