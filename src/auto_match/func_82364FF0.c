extern int fn_824CD030(int x);

typedef struct Vec {
    int *begin;
    int *end;
} Vec;

typedef struct Pair {
    Vec *a;
    Vec *b;
} Pair;

typedef struct Obj {
    char pad[0x20];
    Pair *pair;
} Obj;

static int *find(int *p, int *e)
{
    while (p != e && !fn_824CD030(*p))
        p++;
    return p;
}

int fn_82364FF0(Obj *o)
{
    if (find(o->pair->a->begin, o->pair->a->end) != o->pair->a->end &&
        find(o->pair->b->begin, o->pair->b->end) != o->pair->b->end)
        return 1;
    return 0;
}
