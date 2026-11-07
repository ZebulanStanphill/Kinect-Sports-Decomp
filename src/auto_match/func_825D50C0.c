extern unsigned int lbl_821C9844;

typedef struct Link_825D50C0 {
    struct Link_825D50C0 *p0;
    struct Link_825D50C0 *p1;
} Link_825D50C0;

typedef struct Obj_825D50C0 {
    void *vt;
    int pad[3];
    Link_825D50C0 link;
} Obj_825D50C0;

void fn_825D50C0(Obj_825D50C0 *o)
{
    Link_825D50C0 *l = &o->link;
    o->vt = &lbl_821C9844;
    if (l->p0 != 0) {
        l->p0->p1 = l->p1;
    }
    if (l->p1 != 0) {
        l->p1->p0 = l->p0;
    }
    l->p0 = 0;
    l->p1 = 0;
}
