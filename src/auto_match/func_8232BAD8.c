typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vaddfp(__vector4 a, __vector4 b);

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
