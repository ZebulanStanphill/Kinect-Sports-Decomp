typedef struct { unsigned int cap; unsigned int size; unsigned int *data; } Vec_82BD0F28;
typedef struct { int pad; Vec_82BD0F28 *vec; int heap; } Obj_82BD0F28;
extern unsigned char fn_82BD0948();
extern void fn_82BD0998(Obj_82BD0F28 *, int, int);
extern unsigned int *fn_82BC0088(Vec_82BD0F28 *, int);
extern void fn_82BD06C0(unsigned int, int *, int *);
extern void fn_82BD0850(unsigned int, int *, int *, int);

void fn_82BD0F28(Obj_82BD0F28 *o, int a, int b)
{
    int idx;
    int blk;
    unsigned int *p;
    Vec_82BD0F28 *v;
    if (a != b) {
        if (fn_82BD0948() == 0) {
            fn_82BD0998(o, a, b);
            v = o->vec;
            if ((unsigned int)a < v->size) p = v->data + a; else p = fn_82BC0088(v, a);
            fn_82BD06C0(*p, &idx, &blk);
            v = o->vec;
            if ((unsigned int)a < v->size) p = v->data + a; else p = fn_82BC0088(v, a);
            fn_82BD0850(*p, &idx, &blk, o->heap);
            *(int *)(idx * 4 + blk) = b;
            v = o->vec;
            if ((unsigned int)b < v->size) p = v->data + b; else p = fn_82BC0088(v, b);
            fn_82BD06C0(*p, &idx, &blk);
            v = o->vec;
            if ((unsigned int)b < v->size) p = v->data + b; else p = fn_82BC0088(v, b);
            fn_82BD0850(*p, &idx, &blk, o->heap);
            *(int *)(idx * 4 + blk) = a;
        }
    }
}
