#pragma once
#include "TreeModel.h"

class Tree
{
public:
    Tree(TreeModel& p_model) : m_model(p_model) {}
    Tree() = delete;

	TreeModel& GetModel() const { return m_model; }

private:
    TreeModel& m_model;

    float m_positions[3];
    double m_height;
    double m_thickness;
    float m_colorBark[3];
    float m_colorLeaf[3];
};
