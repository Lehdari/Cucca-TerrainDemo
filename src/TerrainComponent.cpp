/**
    Cucca Game Engine - Graphics - TerrainComponent.cpp

    This file is subject to the terms and conditions defined in
    file 'LICENSE.txt', which is part of this source code package.

    @version    0.1
    @author     Miika Lehtimäki
    @date       2015-10-14
**/


#include "TerrainComponent.hpp"


using namespace Cucca;


TerrainComponent::TerrainComponent(unsigned depth, unsigned maxDepth,
                                   const Vector3f& position, const Vector2f& size) :
    depth_(depth),
    maxDepth_(maxDepth),
    position_(position),
    size_(size)
{}
