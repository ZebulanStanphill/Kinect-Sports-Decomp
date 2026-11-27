#include "xdk/vectorintrinsics.h"

typedef struct Vertex_82D2A8A0 {
    char padding[0x10];
    __vector4 position; /* 0x10 */
} Vertex_82D2A8A0;

typedef struct Triangle_82D2A8A0 {
    char padding[0x8];
    Vertex_82D2A8A0 *vertices[3]; /* 0x08 */
} Triangle_82D2A8A0;

typedef struct Shape_82D2A8A0 {
    void *vtable;                /* 0x00 */
    Triangle_82D2A8A0 *triangle; /* 0x04 */
} Shape_82D2A8A0;

void fn_82D2A8A0(Shape_82D2A8A0 *self, const __vector4 *direction, __vector4 *out)
{
    float maximum;
    float distance;
    int i;

    *out = self->triangle->vertices[0]->position;
    *(unsigned int *)&out->vector4_f32[3] = 0x3f000000;
    __stvewx(__vmsum3fp(*direction, *out), &maximum, 0);
    for (i = 1; i < 3; i++) {
        __vector4 position = self->triangle->vertices[i]->position;
        __stvewx(__vmsum3fp(*direction, position), &distance, 0);
        if (distance > maximum) {
            *out = position;
            maximum = distance;
            *(unsigned int *)&out->vector4_f32[3] = i | 0x3f000000;
        }
    }
}
