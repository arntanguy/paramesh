#ifndef MESH_GENERATORS_HPP
#define MESH_GENERATORS_HPP

#include <paramesh/mesh.hpp>

namespace paramesh
{

TriangleMesh GenerateParametricSphereMesh(const int &rings, const int &slices);
TriangleMesh GenerateParametricBeltedEllipsoidMesh(const int &rings, const int &slices, int a, int b, int c);
TriangleMesh GenerateParametricKleinMesh(const int &rings, const int &slices);
TriangleMesh GenerateParametricTorusMesh(const int &rings, const int &slices);
TriangleMesh GenerateBagelKleinMesh(const int &rings, const int &slices);

}

#endif // MESH_GENERATORS_HPP
