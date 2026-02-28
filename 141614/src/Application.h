#pragma once

namespace Octavia {

	class Application
	{
	public:
		[[nodiscard]] static Application& Get();
		
		// Deleting the Copy Constructors
		Application(const Application&) = delete;
		Application& operator=(const Application&) = delete;

		// Deleting the Move Constructors
		Application(Application&&) = delete;
		Application& operator=(Application&&) = delete;

		Application();
		~Application();

	private:
		inline static Application* s_Application{ nullptr };
	};

}