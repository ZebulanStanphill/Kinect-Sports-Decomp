#include "xdk/vectorintrinsics.h"

typedef union Vertex_82A0D7E0 {
    __vector4 position;

    struct {
        char pad[0xc];
        unsigned short id;    /* 0x0c */
        unsigned short flags; /* 0x0e */
    } info;
} Vertex_82A0D7E0;

Vertex_82A0D7E0 *fn_82A0D7E0(__vector4 *point, Vertex_82A0D7E0 *vertex, int count, float maxDistance,
                             unsigned int value, unsigned int mask, unsigned int excludeId)
{
    Vertex_82A0D7E0 *nearest = 0;
    float best = 3.402823466e+38F;
    __vector4 delta;
    __vector4 distance;

    do {
        if ((vertex->info.flags & mask) == value && vertex->info.id != excludeId) {
            delta = __vsubfp(*point, vertex->position);
            distance = __vmsum3fp(delta, delta);
            if (distance.vector4_f32[0] < best) {
                nearest = vertex;
                best = distance.vector4_f32[0];
            }
        }
        vertex++;
    } while (--count);
    if (best > maxDistance)
        return 0;
    return nearest;
}
