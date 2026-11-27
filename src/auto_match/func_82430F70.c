/* Predicts a position: the tracked object's position (zero without an object) plus the source's
   velocity times `time`; a result below the ground plane falls back to the start position. */

#include "xdk/vectorintrinsics.h"

typedef struct Position_82430F70 {
    __vector4 value;
} Position_82430F70;

typedef struct Object_82430F70 {
    char padding00[0x50];
    __vector4 position; /* 0x50 */
} Object_82430F70;

typedef struct Source_82430F70 Source_82430F70;

typedef struct SourceVtable_82430F70 {
    void *unknown00[3];
    void (*getVelocity)(__vector4 *result, Source_82430F70 *self); /* 0x0c */
} SourceVtable_82430F70;

struct Source_82430F70 {
    SourceVtable_82430F70 *vtable; /* 0x00 */
    Object_82430F70 **object;      /* 0x04 */
};

typedef struct Owner_82430F70 {
    char padding00[0x38];
    Source_82430F70 *source; /* 0x38 */
} Owner_82430F70;

typedef struct Self_82430F70 {
    char padding000[0x244];
    Owner_82430F70 *owner; /* 0x244 */
} Self_82430F70;

Position_82430F70 *fn_82430F70(Position_82430F70 *out, Self_82430F70 *self, float time)
{
    __vector4 result;
    __vector4 start;
    __vector4 scale;
    Object_82430F70 *object;

    object = *self->owner->source->object;
    if (object != 0) {
        start = object->position;
    } else {
        start = __VMXGetReg(77);
    }
    self->owner->source->vtable->getVelocity(&result, self->owner->source);
    scale = __vspltw(__lvlx(&time, 0), 0);
    result = __vmaddfp(result, scale, start);
    if (result.vector4_f32[1] < 0.0f) {
        result = start;
    }
    out->value = result;
    return out;
}
