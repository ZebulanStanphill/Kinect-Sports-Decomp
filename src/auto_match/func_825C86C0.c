#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Cell_825C86C0 {
    int patch; /* 0x0 */
    int pad4;
} Cell_825C86C0;

typedef struct Grid_825C86C0 {
    char pad00[0x60];
    float originX; /* 0x60 */
    float pad64;
    float originZ; /* 0x68 */
    char pad6c[0x80 - 0x6c];
    float cellWidth; /* 0x80 */
    float pad84;
    float cellDepth; /* 0x88 */
    float pad8c;
    int columns;          /* 0x90 */
    int rows;             /* 0x94 */
    Cell_825C86C0 *cells; /* 0x98 */
} Grid_825C86C0;

typedef struct Shape_825C86C0 {
    char pad000[0x10];
    int bumpy; /* 0x10 */
    char pad014[0x30 - 0x14];
    __vector4 corner;  /* 0x30 */
    __vector4 edgeEnd; /* 0x40 */
    __vector4 sideEnd; /* 0x50 */
    char pad060[0x134 - 0x60];
    int sloped;          /* 0x134 */
    Grid_825C86C0 *grid; /* 0x138 */
    char pad13c[0x14c - 0x13c];
    int gridded; /* 0x14c */
    char pad150[0x158 - 0x150];
    float bumpHeight; /* 0x158 */
    float rimHeight;  /* 0x15c */
} Shape_825C86C0;

typedef struct Surface_825C86C0 {
    int pad00;
    int useSlope; /* 0x04 */
    int useGrid;  /* 0x08 */
    char pad0c[0x14 - 0xc];
    float offset; /* 0x14 */
    char pad18[0x2c - 0x18];
    int useWaves; /* 0x2c */
    char pad30[0x54 - 0x30];
    Shape_825C86C0 *shape; /* 0x54 */
} Surface_825C86C0;

extern int fn_825C89B0(Surface_825C86C0 *self, int cell, float *height, float x, float z, float u, float v);
extern int fn_825CAF68(Surface_825C86C0 *self, float u, float v);
extern float fn_825CADE0(Surface_825C86C0 *self, float x, float z);
extern float fn_825CB068(Surface_825C86C0 *self, float x, float z, float u, float v);

static __forceinline const float *MaxOf(const float *a, const float *b)
{
    return *a < *b ? b : a;
}

/* The y component of the cross product of two vectors in the xz plane. */
#define CROSS_Y(a, b) ((a).vector4_f32[0] * (b).vector4_f32[2] - (b).vector4_f32[0] * (a).vector4_f32[2])

float fn_825C86C0(Surface_825C86C0 *self, float x, float y, float z)
{
    __vector4 edge;
    __vector4 side;
    float det;
    float u;
    float v;
    float height;
    float level;
    float rise;
    const float *top;

    edge = __vsubfp(self->shape->edgeEnd, self->shape->corner);
    side = __vsubfp(self->shape->sideEnd, self->shape->corner);
    det = CROSS_Y(edge, side);
    if (fabsf(det) > 1e-05f) {
        float dx = x - self->shape->corner.vector4_f32[0];
        float dz = z - self->shape->corner.vector4_f32[2];

        u = (dz * edge.vector4_f32[0] - dx * edge.vector4_f32[2]) / det;
        v = (dx * side.vector4_f32[2] - dz * side.vector4_f32[0]) / CROSS_Y(edge, side);
    } else {
        v = 0.0f;
        u = 0.0f;
    }
    if (v < 0.0f || v > 1.0f || u < 0.0f || u > 1.0f)
        return -3.402823466e+38f;
    if (self->shape->gridded != 0 && self->useGrid != 0) {
        int column = (int)((x - self->shape->grid->originX) / self->shape->grid->cellWidth);
        int row = (int)((z - self->shape->grid->originZ) / self->shape->grid->cellDepth);

        if (column >= 0 && column < self->shape->grid->columns && row >= 0 && row < self->shape->grid->rows) {
            int cell = self->shape->grid->rows * row + column;

            if (self->shape->grid->cells[cell].patch != 0) {
                height = y;
                if (fn_825C89B0(self, cell, &height, x, z, v, u))
                    return height;
            }
        }
    }
    if (self->shape->sloped != 0 && self->useSlope != 0 && fn_825CAF68(self, v, u) == 0) {
        level = self->shape->corner.vector4_f32[1];
        if (self->useWaves != 0)
            level = fn_825CADE0(self, x, z) + level;
        top = MaxOf(&self->shape->bumpHeight, &self->shape->rimHeight);
        rise = y - level;
        if (self->shape->bumpy != 0 && rise <= *top + 3.0f && rise > -3.0f)
            level = fn_825CB068(self, x, z, v, u) + level;
        return self->offset + level;
    }
    return -3.402823466e+38f;
}
