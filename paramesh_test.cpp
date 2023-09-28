#include <paramesh/mesh_generators.hpp>

using namespace paramesh;

int main (int argc, char *argv[]) {

  auto sphere = GenerateParametricSphereMesh(32, 32);
  WritePLYMesh(sphere, "/tmp/sphere.ply");

  auto belted_ellipsoid = GenerateParametricBeltedEllipsoidMesh(32, 32, 5, 3, 2);
  WritePLYMesh(belted_ellipsoid, "/tmp/belted_ellipsoid.ply");

  auto bagel_klein = GenerateBagelKleinMesh(32, 32);
  WritePLYMesh(bagel_klein, "/tmp/bagel_klein.ply");
  
  return 0;
}
