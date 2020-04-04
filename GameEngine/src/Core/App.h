#pragma once
#include "Core.h"
namespace GameEngine {
	class GL_API App
	{
	public:
		App();
		virtual ~App();
		void Run();
	};
	//To be defined in client
	App* CreateApp();
}

