#include "xdk/vectorintrinsics.h"

typedef struct Array_823D9428 {
    void **begin; /* 0x0 */
    void **end;   /* 0x4 */
} Array_823D9428;

typedef struct Plane_823D9428 {
    char pad0[0x4];
    __vector4 *point; /* 0x4 */
} Plane_823D9428;

typedef struct Field_823D9428 {
    char pad0[0x1c];
    Plane_823D9428 *plane;   /* 0x1c */
    Array_823D9428 **arrays; /* 0x20 */
} Field_823D9428;

typedef struct Body_823D9428 {
    char pad0[0x1c];
    void *handle; /* 0x1c */
    char pad20[0xc];
    int team; /* 0x2c */
    char pad30[0x50];
    __vector4 position; /* 0x80 */
} Body_823D9428;

extern __vector4 *fn_822AA718(__vector4 *out, void *handle);
extern void fn_823D9208(Field_823D9428 *self, __vector4 *min, __vector4 *max, __vector4 point);

static __forceinline float Dot3(__vector4 a, __vector4 b)
{
    __vector4 dot = __vmsum3fp(a, b);
    return dot.vector4_f32[0];
}

int fn_823D9428(Field_823D9428 *self, Body_823D9428 *body)
{
    Array_823D9428 *array = self->arrays[body->team];
    if (array->end - array->begin != 0) {
        __vector4 position;
        float bodyDistance;
        float planeDistance;
        position = body->position;
        {
            __vector4 direction;
            {
                __vector4 sample;
                fn_822AA718(&sample, body->handle);
                direction = sample;
            }
            bodyDistance = Dot3(position, direction);
            planeDistance = Dot3(*self->plane->point, direction);
        }
        if (bodyDistance > planeDistance) {
            __vector4 min;
            __vector4 max;
            fn_823D9208(self, &min, &max, position);
            if (position.vector4_f32[0] >= min.vector4_f32[0] &&
                position.vector4_f32[0] <= max.vector4_f32[0] &&
                position.vector4_f32[2] >= min.vector4_f32[2] &&
                position.vector4_f32[2] <= max.vector4_f32[2]) {
                return 1;
            }
        }
    }
    return 0;
}
