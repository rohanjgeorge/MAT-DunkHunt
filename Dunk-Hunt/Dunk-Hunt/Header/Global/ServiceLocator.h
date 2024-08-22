#pragma once
#include "../../Header/Graphic/GraphicService.h"
#include "../../Header/UI/UIService.h"

namespace Global {

	class ServiceLocator
	{
	private:
	Graphic::GraphicService* graphic_service;
	UI::UIService* ui_service;

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
		UI::UIService* getUIService();
	};
}