#pragma once

#ifdef GE_PLATFORM_WIN
extern GameEngine::App* GameEngine::CreateApp();
int main()
{
	auto app = GameEngine::CreateApp();
	app->Run();
	delete app;
}
#endif // GE_PLATFORM_WINDOWS

