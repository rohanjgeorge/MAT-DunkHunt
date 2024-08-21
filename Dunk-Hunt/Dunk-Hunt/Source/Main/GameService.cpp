#include "../../Header/Main/GameService.h"

Main::GameService::GameService()
{
	service_locator = nullptr;
	game_window = nullptr;
}

Main::GameService::~GameService()
{
	destroy();
}

void Main::GameService::initialize()
{
}

void Main::GameService::initializeVariables()
{
}

void Main::GameService::showSplashScreen()
{
}

void Main::GameService::destroy()
{
	delete(service_locator);
	delete(game_window);
}

void Main::GameService::ignite()
{
	service_locator = Global::ServiceLocator::getInstance();
	initialize();
}

void Main::GameService::update()
{
}

void Main::GameService::render()
{
}

bool Main::GameService::isRunning()
{
	return false;
}

void Main::GameService::setGameState(GameState new_state)
{
}

GameState Main::GameService::getGameState()
{
	return GameState();
}
