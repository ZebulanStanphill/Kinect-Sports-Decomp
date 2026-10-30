typedef struct { unsigned a; unsigned flags; unsigned c; } Elem_82FF1138;
typedef struct { Elem_82FF1138 *first; Elem_82FF1138 *last; } Vec_82FF1138;
typedef struct { int pad[7]; Vec_82FF1138 v; } Obj_82FF1138;

static void Erase_82FF1138(Vec_82FF1138 *v, Elem_82FF1138 *e)
{
    if (1 < (unsigned)(v->last - v->first)) {
        *e = v->last[-1];
    }
    v->last = v->last - 1;
}

void fn_82FF1138(Obj_82FF1138 *p)
{
    Elem_82FF1138 *e = p->v.first;

    if (e != p->v.last) {
        do {
            if ((e->flags & 0x40000000) == 0) {
                Erase_82FF1138(&p->v, e);
            } else {
                e = e + 1;
            }
        } while (e != p->v.last);
    }
}
