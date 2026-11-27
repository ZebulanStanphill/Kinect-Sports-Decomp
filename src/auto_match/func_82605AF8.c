#include "xdk/vectorintrinsics.h"

typedef struct Body_82605AF8 {
    short pad0;
    short id; /* 0x2 */
    char pad4[0x270 - 4];
    float weight; /* 0x270 */
    char pad274[8];
    float scale; /* 0x27c */
    char pad280[0x2b0 - 0x280];
    char target[0x2b0]; /* 0x2b0 */
} Body_82605AF8;

typedef struct BodyList_82605AF8 {
    Body_82605AF8 *begin; /* 0x0 */
    Body_82605AF8 *end;   /* 0x4 */
} BodyList_82605AF8;

extern void fn_82605F88(void *context, int id, void *target, __vector4 *force, int mode);

void fn_82605AF8(BodyList_82605AF8 *bodies, void *context, const __vector4 *force)
{
    Body_82605AF8 *body;
    Body_82605AF8 *end;
    float factor;
    __vector4 scaled;
    short id;

    body = bodies->begin;
    end = bodies->end;
    for (; body < end; body++) {
        if (body->weight > 0.0f) {
            id = body->id;
            factor = -(body->scale * body->weight);
            scaled = __vmulfp(*force, __vspltw(__lvlx(&factor, 0), 0));
            fn_82605F88(context, id, body->target, &scaled, 4);
        }
    }
}
