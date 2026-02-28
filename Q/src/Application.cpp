#include "Application.h"

namespace Q {

	Application::Application() {
		s_Application = this;
	}

	Application::~Application() {
		s_Application = nullptr;
	}

	Application& Application::Get() {
		return *s_Application;
	}

	void Application::Run() {
		while (m_Running) {

		}
	}

}