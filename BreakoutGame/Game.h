#pragma once

#ifndef GAME_H
#define GAME_H

#include <GL\glew.h>
#include <GLFW\glfw3.h>

#include <vector>
#include "GameLevel.h"
#include "BallObject.h"

// Represents the current state of the game
enum GameState {
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};

class Game
{
public:

	// Gamestate
	GameState state;
	GLboolean Keys[1024];
	GLuint Width, Height;

	std::vector<GameLevel> Levels;
	GLuint                 Level;

	Game(GLuint width, GLuint height);
	~Game();

	// Load all the Shaders, Textures and load the level.
	void Init();

	// Game Loop
	void ProcessInput(GLfloat dt);
	void Update(GLfloat dt);
	void Render();

	// Player Object
	GameObject      *Player;
	BallObject * Ball;

};

#endif GAME_H