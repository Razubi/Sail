#pragma once

#include "Core.h"

namespace Sail {

	class SAIL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}

