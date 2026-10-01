#pragma once

// Responsible for creating a Display Window which may
// expand to different platforms ranging from Linux or web,
// We can use enums to choose from :q
//

#include "window.h"

enum WindowPlatform 
{
    LINUX,
    WEB
};

namespace learn
{

class IWindowFactory {
public:
    virtual ~IWindowFactory(){}
    virtual learn::Window create_window() = 0;
};

}
