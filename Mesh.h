#pragma once
#include "stdafx.h"
struct aiMesh;
class Material;
class ModelMaterial;
class Mesh
{
	friend class Model;

	//Model& m_model;
	ModelMaterial* m_pMaterial;
	std::string m_Name;
	std::vector<DirectX::XMFLOAT3> m_Vertices;
	std::vector<DirectX::XMFLOAT3> m_Normals;
	std::vector<DirectX::XMFLOAT3> m_Tangents;
	std::vector<DirectX::XMFLOAT3> m_BiNormals;
	std::vector<DirectX::XMFLOAT3> m_UVs;
	unsigned int m_FaceCount;
	std::vector<unsigned int> m_indices;
	Mesh();
public: 
	Mesh(Model& model, ModelMaterial* pMaterial);
	~Mesh();
};

