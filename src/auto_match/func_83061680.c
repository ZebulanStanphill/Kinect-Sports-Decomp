typedef struct { void *a; void *b; } Pair;
typedef struct { Pair *begin; Pair *end; } Vec;
typedef struct { int pad; Vec v; } Obj;
typedef struct { Pair *p; } Iter;
extern void fn_83062AD8(Iter *out, Vec *v, Pair *where);
static int size(Vec *v) { return v->end - v->begin; }
static Pair *at(Vec *v, int i) { return &v->begin[i]; }
static Pair *beginp(Vec *v) { return v->begin; }

int fn_83061680(Obj *a, Obj *b, void *key)
{
    Iter it;
    int n = 0;
    int i;

    {
        Vec *va = &a->v;
        for (i = 0; i < size(&a->v); ) {
            if (at(&a->v, i)->b == key && at(&a->v, i)->a == b) {
                fn_83062AD8(&it, va, beginp(&a->v) + i);
                n++;
            } else {
                i++;
            }
        }
    }
    {
        Vec *vb = &b->v;
        for (i = 0; i < size(&b->v); ) {
            if (at(vb, i)->b == key && at(vb, i)->a == a) {
                fn_83062AD8(&it, vb, beginp(vb) + i);
            } else {
                i++;
            }
        }
    }
    return n;
}
