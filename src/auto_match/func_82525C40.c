typedef struct Quad_82525C40 {
    int v[4];
} Quad_82525C40;

typedef struct Obj_82525C40 {
    char pad0[0x9cc];
    Quad_82525C40 a;
    char pad9dc[0x9f0 - 0x9dc];
    Quad_82525C40 b;
} Obj_82525C40;

void fn_82525C40(Obj_82525C40 *o, Quad_82525C40 *a, Quad_82525C40 *b)
{
    if (a != 0) {
        o->a.v[0] = a->v[0];
        o->a.v[1] = a->v[1];
        o->a.v[2] = a->v[2];
        o->a.v[3] = a->v[3];
    } else {
        o->a.v[0] = 0;
        o->a.v[1] = 0;
        o->a.v[2] = 0;
        o->a.v[3] = 0;
    }
    if (b != 0) {
        o->b.v[0] = b->v[0];
        o->b.v[1] = b->v[1];
        o->b.v[2] = b->v[2];
        o->b.v[3] = b->v[3];
    } else {
        o->b.v[0] = 0;
        o->b.v[1] = 0;
        o->b.v[2] = 0;
        o->b.v[3] = 0;
    }
}
