#include "gui.h"
#include "vars.hpp"

#if CUSTOM_ICONS
#include "icons.h"
#endif

namespace Gui
{
	void Render()
	{
		ImGui::Begin(GUI_NAME, nullptr);
		ImGui::End();
	}
}