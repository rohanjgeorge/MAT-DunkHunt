#pragma once
#include "../../Header/Graphic/GraphicService.h"

namespace Global {

	class ServiceLocator
	{
private:
	Graphic::GraphicService* graphic_service;

	ServiceLocator();
	~ServiceLocator();

	void createServices();
	void clearAllServices();

	public:

		static ServiceLocator* getInstance();

		void initialize();
		void update();
		void render();

		Graphic::GraphicService* getGraphicService();
	};
}