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

int main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}