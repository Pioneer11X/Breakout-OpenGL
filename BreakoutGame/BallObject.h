#pragma once
#include "GameObject.h"
class BallObject :
	public GameObject
{
public:

	// Ball State
	GLboolean Stuck;
	GLfloat Radius;

	BallObject();
	BallObject(glm::vec2 pos, GLfloat radius, glm::vec2 velocity, Texture2D sprite);

	glm::vec2 Move(GLfloat dt, GLuint windowsWidth);

	void Reset(glm::vec2 position, glm::vec2 velocity);

	~BallObject();
};

