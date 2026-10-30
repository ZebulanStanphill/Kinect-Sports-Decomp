struct O_82C00718;
typedef struct VT_82C00718 {
    void *pad0[15];
    void (*f3c)(struct O_82C00718 *);
    void *pad1[5];
    void (*f54)(struct O_82C00718 *, int);
    void (*f58)(struct O_82C00718 *);
} VT_82C00718;
typedef struct A_82C00718 { struct { void *pad[18]; void (*f48)(struct A_82C00718 *); } *vt; } A_82C00718;
typedef struct B_82C00718 { struct { void *pad[2]; void (*f8)(struct B_82C00718 *); } *vt; } B_82C00718;
typedef struct O_82C00718 {
    VT_82C00718 *vt;
    char pad0[0x38 - 4];
    A_82C00718 *a;
    char pad1[0x28c - 0x3c];
    int flag;
    B_82C00718 *b;
} O_82C00718;

int fn_82C00718(O_82C00718 *o)
{
    o->vt->f54(o, 2);
    if (o->a != 0) {
        o->a->vt->f48(o->a);
        o->a = 0;
    }
    if (o->flag != 0) {
        if (o->b != 0) {
            o->b->vt->f8(o->b);
            o->b = 0;
        }
        o->flag = 0;
    }
    o->vt->f3c(o);
    o->vt->f58(o);
    return 0;
}
