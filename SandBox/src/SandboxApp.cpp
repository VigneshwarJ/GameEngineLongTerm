#include<GE_Client.h>

class Sandbox : public GameEngine::App {
public:
	Sandbox()
	{

	}
	virtual ~Sandbox()
	{

	}
};

GameEngine::App* GameEngine::CreateApp()
{
	return new Sandbox();
}