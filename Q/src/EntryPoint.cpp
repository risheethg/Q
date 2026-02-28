#include "Application.h"

int main() {
	Q::Application* App = new Q::Application();
	App->Run();
	delete App;
	return 0;
}