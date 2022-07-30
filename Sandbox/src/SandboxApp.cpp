#include <Sail.h>

class Sandbox : public Sail::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Sail::Application* Sail::CreateApplication()
{
	return new Sandbox();
}