/**
    Cucca Game Engine - TerrainDemo - TerrainChunk.hpp

    This file is subject to the terms and conditions defined in
    file 'LICENSE.txt', which is part of this source code package.

    @version    0.1
    @author     Miika Lehtimäki
    @date       2015-10-10
**/


#ifndef CUCCA_TERRAINDEMO_TERRAINCHUNK_HPP
#define CUCCA_TERRAINDEMO_TERRAINCHUNK_HPP


#include <Cucca/Core/Resource.hpp>
#include <Cucca/Graphics/Camera.hpp>

#include <SFML/Graphics/Image.hpp>


namespace Cucca {

    //  Resource
    CUCCA_RESOURCE(TerrainChunk) {
    public:
        //  Resource init and destroy template member function declarations
        CUCCA_RESOURCE_INIT_DESTROY_DECL

        //void update(const Camera& camera);

    private:
        sf::Image heightMap_;
        unsigned minDivisions_;
        unsigned maxDivisions_;

        //TerrainQuadTreeNode root_;

        void sampleMajor(float (&s)[4][4], unsigned x, unsigned y) const;
    };

} // namespace Cucca


#endif // CUCCA_TERRAINDEMO_TERRAINCHUNK_HPP

