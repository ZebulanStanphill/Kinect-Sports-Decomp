struct Dev_82BD9FD8;
typedef struct DevVT_82BD9FD8 { void *f0, *f4, *f8, *fc; void (*f10)(struct Dev_82BD9FD8 *); } DevVT_82BD9FD8;
typedef struct Dev_82BD9FD8 { DevVT_82BD9FD8 *vt; char pad[0x14]; int f18; } Dev_82BD9FD8;
typedef struct Obj_82BD9FD8 {
    long long f0;
    void *f8;
    Dev_82BD9FD8 *items2[2];
    unsigned int n2;
    Dev_82BD9FD8 *items1[2];
    unsigned int n1;
} Obj_82BD9FD8;
extern void fn_82BD52C0(void *a, long long b, int c, int *d, int *e);
extern void fn_82BD7B10(Dev_82BD9FD8 *d, int a, int b);

int fn_82BD9FD8(Obj_82BD9FD8 *o)
{
    unsigned int i;
    int a, b;
    for (i = 0; i < o->n1; i++) {
        fn_82BD52C0(o->f8, o->f0, o->items1[i]->f18, &a, &b);
        fn_82BD7B10(o->items1[i], a, b);
    }
    for (i = 0; i < o->n2; i++)
        o->items2[i]->vt->f10(o->items2[i]);
    return 0;
}
