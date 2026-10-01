#pragma once

namespace learn
{

class IWindow {
    public:
        virtual ~IWindow() {}
        virtual IWindow* get_window() = 0;
};

}
