#pragma once

# include "dawn/vk/vk.hpp"

class Dawn_base {
public:
    bool godie;
    inL Dawn_base() :godie(false) {}
    virtual void init() = 0;
    virtual void run() = 0;
    virtual void rendering() = 0;
    virtual void on_resize() = 0;
    virtual void process_wnd_msg(
        # if defined(VK_USE_PLATFORM_WIN32_KHR)
        HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam
        # endif
    );
};
# if defined(VK_USE_PLATFORM_WIN32_KHR)
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
# endif
