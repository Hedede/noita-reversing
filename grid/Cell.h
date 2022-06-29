
struct CellData;

struct ICellBurnable_vtable;

struct ICellBurnable
{
    ICellBurnable_vtable *vtable;
    int hp;
    int unknown0;
    int unknown1;
    bool is_burning;
    char temperature_of_fire;
    char unknown2[2];
    CellData *material_ptr;
};

struct CellArray
{
    ICellBurnable *data[512*512];
};

struct CLiquidCell : ICellBurnable
{
    int x;
    int y;
    char field_20;
    char field_21;
    bool is_static;
    char field_23;
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
};

struct CFireCell : ICellBurnable
{
    int field_18;
    int field_1C;
    int field_20;
    int field_24;
};

struct  CGasCell : ICellBurnable
{
    int field_18;
    int field_1C;
    int x;
    int y;
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
};
