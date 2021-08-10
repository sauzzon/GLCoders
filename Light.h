#pragma once
#include "vec.h"
#include "Shader.h"

const int noOfLight = 6;

class Light
{
private:
	Transf::vec3 sunLightPos;
	Transf::vec3 pointLightPositions[noOfLight];
public:
    Light();

	void setLights(Shader& lightingShader);
};

