#include "mesh.hpp"
#include "mesh_generators.hpp"

int main (int argc, char *argv[]) {

  auto sphere = GenerateParametricSphereMesh(32, 32);
  WritePLYMesh(sphere, "/tmp/sphere.ply");

  auto belted_ellipsoid = GenerateParametricBeltedEllipsoidMesh(32, 32, 5, 3, 2);
  WritePLYMesh(belted_ellipsoid, "/tmp/belted_ellipsoid.ply");
  
  return 0;
}
