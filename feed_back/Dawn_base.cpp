# include "Dawn_base.hpp"

# if defined(VK_USE_PLATFORM_WIN32_KHR)
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
    auto dawn_ptr = (Dawn_base*)GetProp(hWnd, L"Dawn_base");
    if(dawn_ptr!=nullptr){
        dawn_ptr->process_wnd_msg(hWnd, message, wParam, lParam);
    }
    return (DefWindowProc(hWnd, message, wParam, lParam));
}
void Dawn_base::process_wnd_msg(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
    switch (message) {
        case WM_SIZE:
        case WM_EXITSIZEMOVE:
            on_resize();
        case WM_WINDOWPOSCHANGING:
        case WM_SHOWWINDOW:
        case WM_MOVE:
            rendering();
            break;
        case WM_KEYDOWN:
            switch (wParam) {
                case VK_ESCAPE:
                    godie = true;
                    break;
            }
            break;
        case WM_CLOSE:
            godie = true;
            break;
    }   // switch(message)
}
# endif

