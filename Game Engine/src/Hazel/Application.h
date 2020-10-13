#pragma once
#include "Core.h"
namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//idk what is that google gave me that
	Application* CreateApplication();
}
