#include "xdk/vectorintrinsics.h"

typedef struct Body_8232BAD8 {
    char pad[0x80];
    __vector4 position;
    char pad90[0x10];
    __vector4 offset;
} Body_8232BAD8;

typedef struct Obj_8232BAD8 {
    int pad;
    Body_8232BAD8 *body;
} Obj_8232BAD8;

void fn_8232BAD8(__vector4 *out, Obj_8232BAD8 *o)
{
    *out = __vaddfp(o->body->position, o->body->offset);
}
