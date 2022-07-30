#pragma once

#ifdef SL_PLATFORM_WINDOWS


extern Sail::Application* Sail::CreateApplication();

int main(int argc, char** argv)
{
	printf("Sail Engine\n");
	auto app = Sail::CreateApplication();
	app->Run();
	delete app;


}

#else
	#error Sail is only made for windows.
#endif