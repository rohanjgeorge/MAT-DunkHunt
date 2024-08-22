#include "../../Header/Global/ServiceLocator.h"

namespace Global {

	using namespace Graphic;

	Global::ServiceLocator::ServiceLocator()
	{
		graphic_service = nullptr;

		createServices();
	}

	Global::ServiceLocator::~ServiceLocator()
	{
		clearAllServices();
	}

	void Global::ServiceLocator::createServices()
	{
		graphic_service = new GraphicService();
	}

	void Global::ServiceLocator::clearAllServices()
	{
		delete(graphic_service);
	}

	ServiceLocator* Global::ServiceLocator::getInstance()
	{
		static ServiceLocator instance;
		return &instance;
	}

	void Global::ServiceLocator::initialize()
	{
		graphic_service->initialize();
	}

	void Global::ServiceLocator::update()
	{
	}

	void Global::ServiceLocator::render()
	{
	}

	Graphic::GraphicService* ServiceLocator::getGraphicService()
	{
		return graphic_service;
	}
	UI::UIService* ServiceLocator::getUIService()
	{
		return ui_service;
	}
}