#include "xdk/vectorintrinsics.h"

extern __vector4 lbl_8323B1A0;

typedef struct Vertex_82D11518 {
    struct Vertex_82D11518 *next; /* 0x00 */
    char padding[0x1c];
    int x; /* 0x20 */
    int y; /* 0x24 */
    int z; /* 0x28 */
} Vertex_82D11518;

typedef struct Hull_82D11518 {
    char padding[0x24];
    Vertex_82D11518 *vertices; /* 0x24 */
    int count;                 /* 0x28 */
    char padding2[0x54];
    __vector4 centroid; /* 0x80 */
    char padding3[0x60];
    __vector4 offset; /* 0xf0 */
    char padding4[0x10];
    __vector4 scale; /* 0x110 */
} Hull_82D11518;

static __forceinline __vector4 Broadcast_82D11518(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

__vector4 *fn_82D11518(Hull_82D11518 *self)
{
    __vector4 *centroid = &self->centroid;
    if (centroid->vector4_f32[3] == 3.40282e38f) {
        *centroid = lbl_8323B1A0;
        {
            Vertex_82D11518 *vertex;
            for (vertex = self->vertices; vertex != 0; vertex = vertex->next) {
                __vector4 point;
                point.vector4_f32[0] = (float)vertex->x;
                point.vector4_f32[1] = (float)vertex->y;
                point.vector4_f32[2] = (float)vertex->z;
                point.vector4_f32[3] = 0.0f;
                *centroid = __vaddfp(*centroid, __vmaddfp(point, self->scale, self->offset));
            }
        }
        if (self->count != 0) {
            *centroid = __vmulfp(*centroid, Broadcast_82D11518(1.0f / (float)self->count));
        }
        centroid->vector4_f32[3] = 0.0f;
    }
    return centroid;
}
