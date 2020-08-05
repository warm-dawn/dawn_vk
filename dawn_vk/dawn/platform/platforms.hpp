# ifndef __dawn_PLATFORM_HPP__
# define __dawn_PLATFORM_HPP__


#ifdef VK_USE_PLATFORM_ANDROID_KHR
#include "dawn/platform/android.hpp"
#endif

#ifdef VK_USE_PLATFORM_FUCHSIA
#include "dawn/platform/fuchsia.hpp"
#endif

#ifdef VK_USE_PLATFORM_IOS_MVK
#include "dawn/platform/ios.hpp"
#endif


#ifdef VK_USE_PLATFORM_MACOS_MVK
#include "dawn/platform/macos.hpp"
#endif

#ifdef VK_USE_PLATFORM_METAL_EXT
#include "dawn/platform/metal.hpp"
#endif

#ifdef VK_USE_PLATFORM_VI_NN
#include "dawn/platform/vi.hpp"
#endif


#ifdef VK_USE_PLATFORM_WAYLAND_KHR
#include "dawn/platform/wayland.hpp"
#endif


#ifdef VK_USE_PLATFORM_WIN32_KHR
#include "dawn/platform/windows.hpp"

using Module_handle = HMODULE;
using dawn_module = Module_base<Module_handle>;

#endif


#ifdef VK_USE_PLATFORM_XCB_KHR
#include "dawn/platform/xcb.hpp"
#endif


#ifdef VK_USE_PLATFORM_XLIB_KHR
#include "dawn/platform/xlib.hpp"
#endif


#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
#include "dawn/platform/xlib_xrandr.hpp"
#endif


#ifdef VK_USE_PLATFORM_GGP
#include "dawn/platform/ggp.hpp"
#endif


# endif // # ifndef __dawn_VK_PLATFORM_HPP__
