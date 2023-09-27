#include "mesh.hpp"
#include "mesh_generators.hpp"

int main (int argc, char *argv[]) {

  auto mesh = GenerateParametricSphereMesh(32, 32);
  WritePLYMesh(mesh, "/tmp/mesh.ply");
  
  return 0;
}
