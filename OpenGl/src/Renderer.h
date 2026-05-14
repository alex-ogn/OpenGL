#pragma once
#include <GL/glew.h>
#include <string>
#include <iostream>
#include "VertexArray.h"
#include "IndexBuffer.h"
#include "Shader.h"

#define ASSERT(x) if (!(x)) __debugbreak();
#define GLCall(x) GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();
bool GLLogCall(const std::string & function, const std::string & file, const int line);

class Renderer
{
    public:
		void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader);
		void Clear() const;
};