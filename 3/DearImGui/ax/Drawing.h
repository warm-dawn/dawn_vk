# pragma once
#include "imgui.h"

namespace ax {
namespace Drawing {

enum class IconType { Flow, Circle /*圆形*/, Square/*矩形*/, Grid /*虚线矩形*/, RoundSquare/*圆角矩形*/, Diamond/*菱形*/ };

void DrawIcon(ImDrawList* drawList, const ImVec2& a, const ImVec2& b, IconType type, bool filled, ImU32 color, ImU32 innerColor);

} // namespace Drawing
} // namespace ax