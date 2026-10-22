typedef union Size {
    struct { unsigned int pad : 8; unsigned int width : 24; } s1d;
    struct { unsigned int pad : 6; unsigned int height : 13; unsigned int width : 13; } s2d;
    struct { unsigned int depth : 10; unsigned int height : 11; unsigned int width : 11; } s3d;
} Size;

typedef struct Dword3 {
    unsigned int packed : 1;
    unsigned int pad : 31;
} Dword3;

typedef struct Dword5 {
    unsigned int pad1 : 21;
    unsigned int dimension : 2;
    unsigned int pad0 : 9;
} Dword5;

typedef struct Tex {
    char pad0[0x24];
    Size size;
    Dword3 d3;
    int pad2c;
    Dword5 d5;
} Tex;

void fn_8263B0F8(Tex *t, int *width, int *height, int *depth)
{
    int add = t->d3.packed * 2 + 1;
    unsigned int dim = t->d5.dimension;

    if (dim == 0) {
        *width = t->size.s1d.width + add;
        *height = 1;
        *depth = 1;
    } else if (dim == 2) {
        *width = t->size.s3d.width + add;
        *height = t->size.s3d.height + add;
        *depth = t->size.s3d.depth + add;
    } else {
        *width = t->size.s2d.width + add;
        *height = t->size.s2d.height + add;
        *depth = 1;
    }
}
