#pragma once

#ifdef GE_PLATFORM_WIN
extern GameEngine::App* GameEngine::CreateApp();
int main()
{
	GameEngine::Log::Init();
	GE_CORE_WARN("Initialized Log!");
	int a = 5;
	GE_INFO("Hello! Var={0}", a);
	auto app = GameEngine::CreateApp();
	app->Run();
	delete app;
}
#endif // GE_PLATFORM_WINDOWS

