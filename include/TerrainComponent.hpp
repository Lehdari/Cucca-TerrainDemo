/**
    Cucca Game Engine - Graphics - TerrainComponent.hpp

    This file is subject to the terms and conditions defined in
    file 'LICENSE.txt', which is part of this source code package.

    @version    0.1
    @author     Miika Lehtimäki
    @date       2015-10-14
**/


#ifndef CUCCA_GRAPHICS_TERRAINCOMPONENT_HPP
#define CUCCA_GRAPHICS_TERRAINCOMPONENT_HPP


#include <Cucca/Core/Component.hpp>
#include <Cucca/Core/MathTypes.hpp>


namespace Cucca {

    class TerrainComponent : public Component {
    public:
        TerrainComponent(unsigned depth, unsigned maxDepth,
                         const Vector3f& position, const Vector2f& size);

    private:
        unsigned depth_;
        unsigned maxDepth_;
        Vector3Glf position_;
        Vector2Glf size_;
        float distanceToUpperLimit_;    //  contract the tree if upper limit is reached
        float distanceToLowerLimit_;    //  expand the tree if lower limit is reached
    };

} // namespace Cucca


#endif // CUCCA_GRAPHICS_TERRAINCOMPONENT_HPP

