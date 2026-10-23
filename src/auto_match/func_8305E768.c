typedef struct {
    char pad[0x28];
    void *ctx;
    int *items;
    int count;
    char sub[0x10];
} Obj;

typedef struct { int v[8]; } A;
typedef struct { int v[4]; } B;

extern void fn_8305E188(Obj *o, void *sub);
extern int fn_8305F7A0(void *ctx, int item);
extern int fn_83060570(void *ctx, B *b);
extern int fn_83066788(A *a, int x, float t);
extern void fn_83066E20(A *a, int x, B *b);
extern void fn_83066F18(A *a, void *sub, int x);

void fn_8305E768(Obj *o, float t)
{
    A a;
    B b;
    int i;

    fn_8305E188(o, o->sub);
    fn_83066F18(&a, o->sub, fn_8305F7A0(o->ctx, o->items[0]));
    for (i = 1; i < o->count; i++) {
        if (fn_83066788(&a, fn_8305F7A0(o->ctx, o->items[i]), t) != 2) {
            fn_83066E20(&a, fn_8305F7A0(o->ctx, o->items[i]), &b);
            o->items[i] = fn_83060570(o->ctx, &b);
        }
    }
}
