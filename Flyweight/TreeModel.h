#pragma once
#include "Model.h"
#include "Mesh.h"
#include "Texture.h"

class TreeModel : public Model
{
private:
    Mesh m_mesh;
    Texture m_bark;
    Texture m_leaves;    
};
