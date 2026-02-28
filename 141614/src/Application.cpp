#include "Application.h"

namespace Octavia {

	Application::Application() {
		s_Application = this;
	}

	Application::~Application() {
		s_Application = nullptr;
	}

	Application& Application::Get() {
		return *s_Application;
	}


}