#include "../../Header/UI/UIService.h"
#include "../../header/Main/GameService.h"

namespace UI {
	
	using namespace Main;

	using namespace SplashScreen;
	using namespace Interface;
	
	UI::UIService::UIService()
	{
		splash_screen_ui_controller = nullptr;

		createControllers();
	}

	UIService::~UIService()
	{
		destroy();
	}

	void UIService::createControllers()
	{
		splash_screen_ui_controller = new SplashScreenUIController();
	}

	void UIService::initializeControllers()
	{
	}

	Interface::IUIController* UIService::getCurrentUIController()
	{
		switch (GameService::getGameState())
		{
		case GameState::SPLASH_SCREEN:
			return splash_screen_ui_controller;

		case GameState::MAIN_MENU:
			return nullptr;

		case GameState::GAMEPLAY:
			return nullptr;

		default:
			return nullptr;
		}
	}

	void UIService::destroy()
	{
		delete(splash_screen_ui_controller);
	}

	void UIService::initialize()
	{
	}

	void UIService::update()
	{
	}

	void UIService::render()
	{
	}

	void UIService::showScreen()
	{
		IUIController* ui_controller = getCurrentUIController();
		if (ui_controller) ui_controller->show();
	}
}
