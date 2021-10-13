#pragma once
#include "../../Core/include.h"
#include <vector>
#include "../../Core/Resource.h"
struct Mesh3DBounds {
	vec3 Max;
	vec3 Min;
	vec3 Center;
	vec3 Size;
};
struct Vertex3D {
	Vertex3D(){}
	Vertex3D(vec3 _pos, vec3 _normal, vec2 _uv) {
		POSITION = _pos;
		NORMAL = _normal;
		TEXCOORD = _uv;
	}
	vec3 POSITION;
	vec3 NORMAL;
	vec2 TEXCOORD;
};

#ifndef MESH_ELEMENTTYPE 
#define MESH_ELEMENTTYPE GL_UNSIGNED_SHORT
#endif

#if MESH_ELEMENTTYPE == GL_UNSIGNED_SHORT
	#define ElementDataType  unsigned short
#elif GLElementDataType == GL_UNSIGNED_INT
	#define ElementDataType  unsigned int
#elif GLElementDataType == GL_UNSIGNED_BYTE
#define ElementDataType  unsigned char
#endif



class Mesh3D
{
	
	static void ParseOBJ(string content, vector<Vertex3D>* vertexVector, vector<ElementDataType>* triangleVector);
	GLuint VertexArrayObjectID = -1;
	GLuint MeshTrianglesBufferID = -1;
	GLuint MeshDataBufferID = -1;

public:
	bool LoadFromOBJ(string file);
	vector<ElementDataType>  TRIANGLES;
	vector<Vertex3D>			VERTICIES;


	Mesh3DBounds BOUNDS;

	unsigned int GetTriangleCount() { return TRIANGLES.size(); }
	//VERTEXpos METHODS
	vector<Vertex3D> getVerticies() { return VERTICIES; }
	void SetVerticies(vector<Vertex3D> _verticies) { VERTICIES = _verticies; UpdateVertexBufferData();}
	void UpdateVertexBufferData();

	vector<ElementDataType> GetTriangles() { return TRIANGLES; }
	void SetTriangles(vector<ElementDataType> _triangles) { TRIANGLES = _triangles; UpdateTriangleBufferData();}
	void UpdateTriangleBufferData();

	Mesh3D();
	void Use();
	static void CleanUp();
};

