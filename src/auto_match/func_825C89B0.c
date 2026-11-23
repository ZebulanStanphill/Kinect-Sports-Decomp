typedef struct Triangle_825C89B0 {
    float x0; /* 0x00 */
    float z0; /* 0x04 */
    float x1; /* 0x08 */
    float z1; /* 0x0c */
    float x2; /* 0x10 */
    float z2; /* 0x14 */
} Triangle_825C89B0;

typedef struct TriangleList_825C89B0 {
    int count;                /* 0x0 */
    Triangle_825C89B0 *items; /* 0x4 */
} TriangleList_825C89B0;

typedef struct Patch_825C89B0 {
    float height;                    /* 0x0 */
    int flat;                        /* 0x4 */
    TriangleList_825C89B0 triangles; /* 0x8 */
} Patch_825C89B0;

typedef struct Cell_825C89B0 {
    int count;               /* 0x0 */
    Patch_825C89B0 *patches; /* 0x4 */
} Cell_825C89B0;

typedef struct Grid_825C89B0 {
    char pad00[0x98];
    Cell_825C89B0 *cells; /* 0x98 */
} Grid_825C89B0;

typedef struct Shape_825C89B0 {
    char pad000[0x10];
    int bumpy; /* 0x10 */
    char pad014[0x138 - 0x14];
    Grid_825C89B0 *grid; /* 0x138 */
    char pad13c[0x158 - 0x13c];
    float bumpHeight; /* 0x158 */
    float rimHeight;  /* 0x15c */
} Shape_825C89B0;

typedef struct Surface_825C89B0 {
    char pad00[0x24];
    float patchOffset; /* 0x24 */
    char pad28[0x54 - 0x28];
    Shape_825C89B0 *shape; /* 0x54 */
} Surface_825C89B0;

extern float fn_825CB068(Surface_825C89B0 *self, float x, float z, float u, float v);

static __forceinline const float *MaxOf(const float *a, const float *b)
{
    return *a < *b ? b : a;
}

static __forceinline float Edge(float ax, float az, float bx, float bz, float x, float z)
{
    return (bz - az) * (x - ax) - (bx - ax) * (z - az);
}

static __forceinline int Contains(const TriangleList_825C89B0 *list, float x, float z)
{
    const Triangle_825C89B0 *tri;
    float side;
    int i;

    for (i = 0; i < list->count; i++) {
        tri = &list->items[i];
        side = Edge(tri->x0, tri->z0, tri->x1, tri->z1, x, z);
        if (Edge(tri->x1, tri->z1, tri->x2, tri->z2, x, z) * side >= 0.0f &&
            Edge(tri->x2, tri->z2, tri->x0, tri->z0, x, z) * side >= 0.0f) {
            return 1;
        }
    }
    return 0;
}

int fn_825C89B0(Surface_825C89B0 *self, int cell, float *height, float x, float z, float u, float v)
{
    Patch_825C89B0 *patches;
    const float *top;
    float result;
    float bump;
    float rise;
    int found;
    int bumped;
    int i;

    found = 0;
    bumped = 0;
    result = -3.402823466e+38f;
    bump = 0.0f;
    if (self->shape->grid->cells[cell].count != 0) {
        patches = self->shape->grid->cells[cell].patches;
        for (i = 0; i < self->shape->grid->cells[cell].count; i++) {
            if (Contains(&patches[i].triangles, x, z)) {
                if (patches[i].flat == 1) {
                    if (patches[i].height > *height) {
                        break;
                    }
                } else {
                    if (bumped == 0) {
                        top = MaxOf(&self->shape->bumpHeight, &self->shape->rimHeight);
                        rise = *height - patches[i].height;
                        if (rise <= *top + 3.0f && rise > -3.0f) {
                            bumped = 1;
                            if (self->shape->bumpy != 0) {
                                bump = fn_825CB068(self, x, z, u, v);
                            }
                        }
                        bump = self->patchOffset + bump;
                    }
                    result = patches[i].height + bump;
                    found = 1;
                }
            }
        }
    }
    *height = result;
    return found;
}
