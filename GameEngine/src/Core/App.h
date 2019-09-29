#pragma once

namespace GameEngine {
	class _declspec(dllexport) App
	{
	public:
		App();
		virtual ~App();
		void Run();
	};
	//To be defined in client
	App* CreateApp();
}

