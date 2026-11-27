#include "xdk/vectorintrinsics.h"

typedef struct Ray_82334BD0 {
    char pad00[0x50];
    __vector4 origin; /* 0x50 */
    char pad60[0xd0 - 0x60];
    __vector4 direction; /* 0xd0 */
} Ray_82334BD0;

typedef struct Tracer_82334BD0 {
    char pad00[0x28];
    Ray_82334BD0 *ray; /* 0x28 */
} Tracer_82334BD0;

typedef struct Box_82334BD0 {
    char pad000[0x1f0];
    __vector4 min; /* 0x1f0 */
    __vector4 max; /* 0x200 */
} Box_82334BD0;

static __forceinline float GetX(__vector4 v)
{
    return v.vector4_f32[0];
}

static __forceinline float GetZ(__vector4 v)
{
    return v.vector4_f32[2];
}

/* The nearest positive distance along the tracer's ray to the sides of a box in the ground plane,
   or 0 when the ray starts outside the box. */
float fn_82334BD0(Tracer_82334BD0 *self, Box_82334BD0 *box)
{
    float times[4];
    float nearest;
    int i;

    if (GetX(self->ray->origin) > GetX(box->min) && GetX(self->ray->origin) < GetX(box->max) &&
        GetZ(self->ray->origin) > GetZ(box->min) && GetZ(self->ray->origin) < GetZ(box->max)) {
        if (GetX(self->ray->direction) != 0.0f) {
            times[0] = (GetX(box->min) - GetX(self->ray->origin)) / GetX(self->ray->direction);
        } else {
            times[0] = 3.402823466e+38f;
        }
        if (GetX(self->ray->direction) != 0.0f) {
            times[1] = (GetX(box->max) - GetX(self->ray->origin)) / GetX(self->ray->direction);
        } else {
            times[1] = 3.402823466e+38f;
        }
        if (GetZ(self->ray->direction) != 0.0f) {
            times[2] = (GetZ(box->min) - GetZ(self->ray->origin)) / GetZ(self->ray->direction);
        } else {
            times[2] = 3.402823466e+38f;
        }
        if (GetZ(self->ray->direction) != 0.0f) {
            times[3] = (GetZ(box->max) - GetZ(self->ray->origin)) / GetZ(self->ray->direction);
        } else {
            times[3] = 3.402823466e+38f;
        }
        nearest = 3.402823466e+38f;
        for (i = 0; i < 4; i++) {
            if (times[i] > 0.0f && times[i] < nearest) {
                nearest = times[i];
            }
        }
        return nearest;
    }
    return 0.0f;
}
