typedef struct Env {
    char pad[0x5b0];
    void *heap;
} Env;
typedef struct Obj {
    char pad[0x38];
    int v38;
    char pad2[0x50 - 0x3c];
    int v50;
} Obj;
typedef struct S {
    Env *env;
    int pad[0x1f];
    Obj *obj;
    int pad2[2];
    int v8c;
} S;
extern void *fn_82B7BD28(void *heap, int size);
extern int fn_82BB1DA0(int);
extern Obj *fn_82BC39C0(void *mem, Env *env);

Obj *fn_82BA92B0(S *s)
{
    if (s->obj == 0) {
        int v = fn_82BB1DA0(s->v8c);
        void *heap = s->env->heap;
        void **p = (void **)fn_82B7BD28(heap, 0x3c4);
        Obj *o;
        *p = heap;
        o = (p + 1) ? fn_82BC39C0(p + 1, s->env) : 0;
        s->obj = o;
        o->v38 = v;
        o->v50 = 0;
    }
    return s->obj;
}
