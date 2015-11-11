#include <vector>

typedef struct vec3{	
	double x;
	double y;
	double z;
	float c[4];	// rgbA color info
} vec3;

typedef struct Poly{
	vec3 v[4];		// vertices info
} Poly;

GLfloat RYp[4][4] = {
	{ cos(.0523598776), 0, sin(.0523598776), 0 },
	{0, 1, 0, 0 },
	{ -sin(.0523598776), 0, cos(.0523598776), 0 },
	{ 0, 0, 0, 1 }
};

GLfloat RYn[4][4] = {
	{ cos(-.0523598776), 0, sin(-.0523598776), 0 },
	{ 0, 1, 0, 0 },
	{ -sin(-.0523598776), 0, cos(-.0523598776), 0 },
	{ 0, 0, 0, 1 }
};

GLfloat RXp[4][4] = {

};

GLfloat RXn[4][4] = {

};

GLfloat RZp[4][4] = {

};

GLfloat RZn[4][4] = {

};
