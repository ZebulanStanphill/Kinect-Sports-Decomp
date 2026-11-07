typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct Ptr_822F06B0 {
    void *first;
    void *rep;
} Ptr_822F06B0;

typedef struct Target_822F06B0 {
    char pad0[0x10];
    __vector4 pos;
    int f20;
    float x;
    float y;
    float z;
    char pad30[0x10];
    int f40;
    char f44[4];
} Target_822F06B0;

typedef struct TargetPtr_822F06B0 {
    Target_822F06B0 *first;
    void *rep;
} TargetPtr_822F06B0;

typedef struct Info_822F06B0 {
    char pad0[0x28];
    int f28;
    int f2C;
} Info_822F06B0;

typedef struct Owner_822F06B0 {
    char pad0[0x84];
    void *f84;
} Owner_822F06B0;

typedef struct Obj_822F06B0 {
    char pad0[0xc];
    Info_822F06B0 *info;
    Owner_822F06B0 *owner;
    char pad14[0x10];
    void *f24;
} Obj_822F06B0;

extern int fn_82396DA8(Owner_822F06B0 *owner);
extern Ptr_822F06B0 *fn_822EFBF0(Ptr_822F06B0 *out, void *src);
extern TargetPtr_822F06B0 *fn_823A73C0(TargetPtr_822F06B0 *out, void *p, int a, int b);
extern void fn_822315A0(void *rep);
extern void fn_823AFE00(void *p, __vector4 v);
extern int fn_822F09C0(Obj_822F06B0 *o, int a, float x, float y, float z, int b, void *c);

int fn_822F06B0(Obj_822F06B0 *o)
{
    int result = 0;
    void *src = o->owner->f84;

    if (src != 0 && fn_82396DA8(o->owner) != 0) {
        int b = o->info->f2C;
        int a = o->info->f28;
        Ptr_822F06B0 sp;
        TargetPtr_822F06B0 t;
        Target_822F06B0 *e;

        fn_823A73C0(&t, fn_822EFBF0(&sp, src)->first, a, b);
        if (sp.rep != 0) {
            fn_822315A0(sp.rep);
        }
        e = t.first;
        if (e != 0) {
            fn_823AFE00(o->f24, e->pos);
            result = fn_822F09C0(o, e->f20, e->x, e->y, e->z, e->f40, e->f44);
        }
        if (t.rep != 0) {
            fn_822315A0(t.rep);
        }
    }
    return result;
}
