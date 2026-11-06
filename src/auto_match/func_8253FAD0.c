typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_8253FAD0 {
    char pad0[0x90];
    __vector4 v90;
    __vector4 va0;
    __vector4 vb0;
    __vector4 vc0;
    float fd0;
    int fd4;
    int fd8;
    int fdc;
    char pade0[0xf0 - 0xe0];
    int active;
    char padf4[0x180 - 0xf4];
    char sub180[0x2d0 - 0x180];
    char sub2d0[0x3b0 - 0x2d0];
    __vector4 v3b0;
    char pad3c0[0x3f0 - 0x3c0];
} Entry_8253FAD0;

typedef struct Obj_8253FAD0 {
    char pad[0x758];
    Entry_8253FAD0 *begin;
    Entry_8253FAD0 *end;
} Obj_8253FAD0;

extern void fn_82604630(Obj_8253FAD0 *o);
extern void fn_82570F18(Obj_8253FAD0 *o);
extern void fn_82571978(void *a, int b, void *c, __vector4 v1, __vector4 v2, __vector4 v3,
                        __vector4 v4, __vector4 v5, float f);

void fn_8253FAD0(Obj_8253FAD0 *o)
{
    Entry_8253FAD0 *e;
    Entry_8253FAD0 *end;

    fn_82604630(o);
    fn_82570F18(o);
    end = o->end;
    for (e = o->begin; e < end; e++) {
        if (e->active == 1) {
            fn_82571978(e->sub2d0, e->fdc, e->sub180, e->vb0, e->vc0, e->v90, e->va0, e->v3b0, e->fd0);
        }
    }
}
