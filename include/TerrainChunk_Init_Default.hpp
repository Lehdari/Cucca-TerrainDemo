/**
    Cucca Game Engine - TerrainDemo - TerrainChunk_Init_Default.hpp

    This file is subject to the terms and conditions defined in
    file 'LICENSE.txt', which is part of this source code package.


    This file is a resource initialization file.
    It specifies TerrainChunkInitInfo_Default struct and TerrainChunk init
    and destroy member function template specializations for initializing
    TerrainChunk resources.

    Initialization resources:
        0: VertexData (for terrain segments)
    Dependency resources:
        none


    @version    0.1
    @author     Miika Lehtimäki
    @date       2015-05-21
**/


#ifndef CUCCA_TERRAINDEMO_TERRAINCHUNK_INIT_DEFAULT_HPP
#define CUCCA_TERRAINDEMO_TERRAINCHUNK_INIT_DEFAULT_HPP


#include "TerrainChunk.hpp"
#include <Cucca/Core/ResourceManager.hpp>
#include <Cucca/Core/Binary.hpp>


namespace Cucca {

    /// Initialization info struct
    struct TerrainChunkInitInfo_Default : public ResourceInitInfoBase {
    };


    /// Resource init and destroy template member function specializations
    CUCCA_RESOURCE_INIT(TerrainChunk, TerrainChunkInitInfo_Default) {
        if (initResources.size() < 1)
            return; // TODO_EXCEPTION: maybe throw a proper exception instead?

        numXSegments_ = initInfo.numXSegments;
        numYSegments_ = initInfo.numYSegments;
        segmentXResolution_ = initInfo.segmentXResolution;
        segmentYResolution_ = initInfo.segmentYResolution;
        segmentXSize_ = initInfo.segmentXSize;
        segmentYSize_ = initInfo.segmentYSize;
        offsetX_ = initInfo.offsetX;
        offsetY_ = initInfo.offsetY;

        auto majorBinary = resourceManager->getResource<Binary>(initResources[0]);

        major_.loadFromMemory(majorBinary->getBufferPtr(), majorBinary->getBufferSize());
    }

    CUCCA_RESOURCE_DESTROY(TerrainChunk, TerrainChunkInitInfo_Default) {}

} // namespace Cucca


#endif // CUCCA_TERRAINDEMO_TERRAINCHUNK_INIT_DEFAULT_HPP

