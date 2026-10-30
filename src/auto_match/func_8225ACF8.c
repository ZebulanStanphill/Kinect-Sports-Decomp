extern void *fn_8265C9E0(unsigned int size);
extern char lbl_821984AC[];

typedef struct Obj {
    void *vt;
    float v;
} Obj;

Obj *fn_8225ACF8(Obj *src)
{
    Obj *o = (Obj *)fn_8265C9E0(8);
    if (o != 0) {
        o->vt = lbl_821984AC;
        o->v = src->v;
        return o;
    }
    return 0;
}
