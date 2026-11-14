typedef struct Viewport_82639F28 {
    unsigned int x;
    unsigned int y;
    unsigned int width;
    unsigned int height;
    float minZ;
    float maxZ;
} Viewport_82639F28;

typedef struct Obj_82639F28 {
    char pad0[0x3218];
    float x;
    float y;
    float width;
    float height;
    float minZ;
    float maxZ;
} Obj_82639F28;

void fn_82639F28(Obj_82639F28 *self, Viewport_82639F28 *out)
{
    out->x = (unsigned int)self->x;
    out->y = (unsigned int)self->y;
    out->width = (unsigned int)self->width;
    out->height = (unsigned int)self->height;
    out->minZ = self->minZ;
    out->maxZ = self->maxZ;
}
