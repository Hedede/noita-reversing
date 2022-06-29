#include "Cell.h"
#include "ChunkGeometry.h"

struct CellArrayGrid
{
    CellArray **data[262144];
};


struct WorldChunksContainer
{
    int chunk_size;
    bool somebool;
    CellArrayGrid *cells;
    int num_chunks;
    ChunkGeometry bbox;
    ChunkGeometry bbox2;
};
