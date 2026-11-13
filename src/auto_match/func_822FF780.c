typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Target_822FF780 {
    char pad[0x80];
    __vector4 position;   /* 0x80 */
    __vector4 rotation;   /* 0x90 */
} Target_822FF780;

typedef struct Obj_822FF780 Obj_822FF780;
typedef struct ObjVt_822FF780 {
    void *f0;
    void *f4;
    char *(*getState)(Obj_822FF780 *self);   /* 0x8 */
} ObjVt_822FF780;

struct Obj_822FF780 {
    ObjVt_822FF780 *vt;
    char pad[0xb8];
    Target_822FF780 *target;   /* 0xbc */
};

extern unsigned char fn_8288B760(Obj_822FF780 *self);
extern void fn_822CA5B0(Obj_822FF780 *self);
extern void fn_822CB140(void *dst, __vector4 *value);
extern void fn_822CB0A0(void *dst, __vector4 *value);

void fn_822FF780(Obj_822FF780 *self)
{
    Target_822FF780 *target = self->target;
    if (target != 0) {
        if (fn_8288B760(self)) {
            __vector4 v;
            char *(*get)(Obj_822FF780 *) = self->vt->getState;
            v = target->position;
            fn_822CB140(get(self) + 0x144, &v);
            get = self->vt->getState;
            v = target->rotation;
            fn_822CB0A0(get(self) + 0xf0, &v);
        } else {
            fn_822CA5B0(self);
        }
    }
}
