typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct {
    __vector4 v;
} Vec;

typedef struct {
    char pad[0x850];
    char a[0x1040 - 0x850];
    char b[0x10];
} Sub;

typedef struct {
    char pad[0xc94];
    float f;
    char pad2[0xcf0 - 0xc98];
    Sub *sub;
} Obj;

extern void fn_82F53970(void *p, int v);
extern void fn_82F4FBE8(Obj *o, void *src);
extern float fn_82F4FD98(Obj *o, void *src);
extern void fn_82F4F578(void *src);
extern Vec fn_82F538A0(void *src, int i);
extern Vec fn_82F538B0(void *src, int i);
extern int fn_82F538E0(void *src, int i);
extern void fn_82F53900(void *p, int i, __vector4 v);
extern void fn_82F53928(void *p, int i, __vector4 v);
extern void fn_82F53958(void *p, int i, int v);

void fn_82F50188(Obj *o, void *src)
{
    int i;
    fn_82F53970(o->sub->b, 0);
    fn_82F4FBE8(o, src);
    o->f = fn_82F4FD98(o, src);
    fn_82F4F578(src);
    for (i = 0; i < 25; i++) {
        fn_82F53900(o->sub->a, i, fn_82F538A0(src, i).v);
        fn_82F53928(o->sub->a, i, fn_82F538B0(src, i).v);
        fn_82F53958(o->sub->a, i, fn_82F538E0(src, i));
    }
}
