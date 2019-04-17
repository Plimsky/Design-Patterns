#pragma once
#include "Model.h"
#include "Mesh.h"
#include "Texture.h"

class TreeModel : public Model
{
public:
    TreeModel(const std::string& p_name) : Model{p_name} {}

private:
    Mesh m_mesh;
    Texture m_bark;
    Texture m_leaves;
};
