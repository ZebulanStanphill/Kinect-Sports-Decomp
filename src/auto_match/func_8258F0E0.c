typedef struct { void *data; unsigned int size, cap; } Vec_8258F0E0;
typedef struct { char pad[0x1c]; Vec_8258F0E0 a; int gap; Vec_8258F0E0 b; } Inner_8258F0E0;
typedef struct { char pad[0x10]; Inner_8258F0E0 inner; } Obj_8258F0E0;
extern void fn_8265CA20(void *);
extern void fn_825F0E10(Inner_8258F0E0 *);
extern void fn_82230300(Inner_8258F0E0 *, int, int);

static __forceinline void clear(Vec_8258F0E0 *v)
{
    if (v->data)
        fn_8265CA20(v->data);
    v->data = 0;
    v->size = 0;
    v->cap = 0;
}

void fn_8258F0E0(Obj_8258F0E0 *o)
{
    Inner_8258F0E0 *s = &o->inner;

    fn_825F0E10(s);
    clear(&s->b);
    clear(&s->a);
    fn_82230300(s, 1, 0);
}
