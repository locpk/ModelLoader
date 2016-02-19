#pragma once
#include"stdafx.h"

class Mesh;
class ModelMaterial;
class Model
{
	Model(const Model&) = delete;
	Model& operator=(const Model&) = delete;


	std::vector<Mesh*> m_meshes;
	std::vector<ModelMaterial*> m_materials;

public:
	Model();
	~Model();

	const std::vector<Mesh*>& Meshes() const { return m_meshes; };
	const std::vector<ModelMaterial*> Materials() const { return m_materials; }
};

