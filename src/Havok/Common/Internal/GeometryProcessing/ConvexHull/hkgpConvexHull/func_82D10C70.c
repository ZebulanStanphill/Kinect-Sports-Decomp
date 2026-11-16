typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float values[4];
} __vector4;

extern __vector4 __vaddfp(__vector4 a, __vector4 b);
extern __vector4 __vmulfp(__vector4 a, __vector4 b);
extern __vector4 __lvlx(const void *base, int offset);
extern __vector4 __vspltw(__vector4 value, unsigned int lane);
extern __vector4 lbl_8323B1A0;

typedef struct Vertex_82D10C70 {
    struct Vertex_82D10C70 *next; /* 0x00 */
    char padding[12];
    __vector4 position; /* 0x10 */
} Vertex_82D10C70;

typedef struct Hull_82D10C70 {
    char padding[0x24];
    Vertex_82D10C70 *vertices; /* 0x24 */
    int count;                 /* 0x28 */
    char padding2[0x44];
    __vector4 centroid; /* 0x70 */
} Hull_82D10C70;

static __forceinline __vector4 Broadcast_82D10C70(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

__vector4 *fn_82D10C70(Hull_82D10C70 *self)
{
    __vector4 *centroid = &self->centroid;
    if (centroid->values[3] != 3.40282e38f) {
        return centroid;
    }
    *centroid = lbl_8323B1A0;
    {
        Vertex_82D10C70 *vertex;
        for (vertex = self->vertices; vertex != 0; vertex = vertex->next) {
            *centroid = __vaddfp(*centroid, vertex->position);
        }
    }
    if (self->count != 0) {
        *centroid = __vmulfp(*centroid, Broadcast_82D10C70(1.0f / (float)self->count));
    }
    centroid->values[3] = 0.0f;
    return centroid;
}
