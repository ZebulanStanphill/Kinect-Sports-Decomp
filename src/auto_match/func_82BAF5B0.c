typedef struct Env {
    char pad[0x5ac];
    void *heap;
} Env;
typedef struct S {
    Env *env;
    int v4;
} S;
extern void *fn_82B7BD28(void *heap, int size);
extern void fn_82BC0400(int, void *);
extern void *fn_82BC1540(void *mem, int a, int b, int c, Env *env);

void *fn_82BAF5B0(S *s, int a, int b, int c)
{
    void *heap = s->env->heap;
    void **p = (void **)fn_82B7BD28(heap, 0x44);
    void *o;
    *p = heap;
    o = (p + 1) ? fn_82BC1540(p + 1, b, a, c, s->env) : 0;
    fn_82BC0400(s->v4, o);
    return o;
}
