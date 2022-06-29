#include "Cell.h"
#include "ChunkGeometry.h"

#include "poro/utils/array2d/carray2d.h"

struct ChunkPos
{
    int x;
    int y;
    int hash_index;
    int *px = &x;
    int *py = &y;
};

struct ChunkSpawnFunction
{
    int x;
    int y;
    int size_x;
    int size_y;
    bool isOpenPath;
    int funcIdx;
    bool somebool;
    Biome *biome;
};

struct WorldChunk
{
    int timestamp;
    int field_4;
    int chunk_delta_time;
    int coord_x;
    int coord_y;
    int field_14;
    int field_18;
    int field_1C;
    ChunkGeometry offset;
    CellArray **pixeldata;
    CArray2D<int> some_pixels;
    int field_54;
    ChunkPos pos;
    GameWorld *world;
    ProceduralTerrain *proc_terrain;
    GridWorld *grid_world;
    char field_78;
    char maybe_isloaded;
    char field_7A;
    char field_7B;
    int field_7C;
    std_vector somevec1;
    std_vector somevec2;
    std_vector<ChunkSpawnFunction> spawnFunctions;
    int field_A4;
    int field_A8;
    int field_AC;
    int field_B0;
    int field_B4;
    int field_B8;
    std_vector anothervec;
    int field_C8;
    int field_CC;
    int field_D0;
    int field_D4;
    int field_D8;
    int field_DC;
    int field_E0;
    int field_E4;
    int field_E8;
    int field_EC;
    int field_F0;
    int field_F4;
    int field_F8;
    int field_FC;
    int field_100;
    int field_104;
    int field_108;
    int field_10C;
    int field_110;
    int field_114;
    int field_118;
    int field_11C;
    int field_120;
    int field_124;
    int field_128;
    int field_12C;
    int field_130;
    int field_134;
    int field_138;
    int field_13C;
    int field_140;
    int field_144;
    int field_148;
    int field_14C;
    int field_150;
    int field_154;
    int field_158;
    int field_15C;
    int field_160;
    int field_164;
    int field_168;
    int field_16C;
    int field_170;
    int field_174;
    int field_178;
    int field_17C;
    int field_180;
    int field_184;
    int field_188;
    int field_18C;
};
