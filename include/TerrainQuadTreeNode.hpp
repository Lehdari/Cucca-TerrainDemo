/**
    Cucca Game Engine - TerrainDemo - TerrainQuadTreeNode.hpp

    This file is subject to the terms and conditions defined in
    file 'LICENSE.txt', which is part of this source code package.

    @version    0.1
    @author     Miika Lehtimäki
    @date       2015-08-19
**/


#ifndef CUCCA_TERRAINDEMO_TERRAINQUADTREENODE_HPP
#define CUCCA_TERRAINDEMO_TERRAINQUADTREENODE_HPP


#include <Cucca/Core/MathTypes.hpp>
#include <Cucca/Graphics/Camera.hpp>

#include <array>
#include <memory>


namespace Cucca {

    class TerrainQuadTreeNode {
    public:
        TerrainQuadTreeNode(unsigned depth, unsigned maxDepth,
                            const Vector3f& position, const Vector2f& size);

        void update(const Camera& camera);

    private:
        unsigned depth_;
        unsigned maxDepth_;
        Vector3Glf position_;
        Vector2Glf size_;
        float distanceToUpperLimit_;    //  contract the tree if upper limit is reached
        float distanceToLowerLimit_;    //  expand the tree if lower limit is reached

        std::array<std::unique_ptr<TerrainQuadTreeNode>, 4> children_;
    };

} // namespace Cucca


#endif // CUCCA_TERRAINDEMO_TERRAINQUADTREENODE_HPP

