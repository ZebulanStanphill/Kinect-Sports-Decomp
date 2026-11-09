typedef struct Callback_828CB510 {
    int data[2];
} Callback_828CB510;

typedef struct Obj_828CB510 {
    void *vt;
    int f4;
    int f8;
    int fc;
    Callback_828CB510 callback;
} Obj_828CB510;

extern char lbl_82026478[];
extern char lbl_82026458[];
extern Callback_828CB510 *fn_828B5580(Callback_828CB510 *self, const Callback_828CB510 *other);

Obj_828CB510 *fn_828CB510(Obj_828CB510 *o, Obj_828CB510 *src)
{
    int v = *(src != 0 ? &src->f4 : 0);

    o->vt = lbl_82026478;
    o->f4 = v;
    o->f8 = src->f8;
    o->fc = src->fc;
    o->vt = lbl_82026458;
    fn_828B5580(&o->callback, &src->callback);
    return o;
}
