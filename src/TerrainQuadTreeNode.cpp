#include "TerrainQuadTreeNode.hpp"

#include <cmath>


using namespace Cucca;


TerrainQuadTreeNode::TerrainQuadTreeNode(unsigned depth, unsigned maxDepth,
                                         const Vector3f& position, const Vector2f& size) :
    depth_(depth),
    maxDepth_(maxDepth),
    position_(position),
    size_(size)
{}

void TerrainQuadTreeNode::update(const Camera& camera) {
    const float a = 200.0f;  //  TEMP just a const for now for testing purposes

    float dis = (camera.getPosition() - position_).norm();

    float level = log2f(a/dis);
}
