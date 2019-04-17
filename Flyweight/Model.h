#pragma once
#include <string>
#include <iostream>
#include <utility>

class Model
{
public:
    explicit Model(std::string p_name) : m_name{std::move(p_name)} { std::cout << "Model(" << m_name << ");\n"; }
	~Model() { std::cout << "~Model(" << m_name << ");\n"; }

private:
	std::string m_name;
};
