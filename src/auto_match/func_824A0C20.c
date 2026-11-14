typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_824A0C20 Obj_824A0C20;

typedef struct {
    void *f0;
    int (*test)(Obj_824A0C20 *self);
} ObjVtbl_824A0C20;

struct Obj_824A0C20 { ObjVtbl_824A0C20 *vt; };

typedef struct Manager_824A0C20 {
    char pad0[0xec];
    void *table;            // 0xec
} Manager_824A0C20;

extern Obj_824A0C20 *fn_82F4EBE8(int id);
extern void fn_82F52188(__vector4 *out, Obj_824A0C20 *obj, int mode);
extern Manager_824A0C20 *fn_8249ABC0(void);
extern void fn_8249CF88(__vector4 *out, void *table, int id);

int fn_824A0C20(void *self, char *p)
{
    int result = 0;
    int id = *(int *)(p + 0x20);
    Obj_824A0C20 *o;
    __vector4 pos;
    __vector4 limit;
    int i;
    Manager_824A0C20 *m;

    if (id >= 0)
        o = fn_82F4EBE8(id);
    else
        o = 0;
    if (o && o->vt->test(o)) {
        fn_82F52188(&pos, o, 1);
        for (i = 0; i < 2 && result == 0; i++) {
            m = fn_8249ABC0();
            fn_8249CF88(&limit, m->table, i);
            result = 1;
            if (pos.vector4_f32[2] > limit.vector4_f32[2])
                result = 0;
        }
    }
    return result;
}
