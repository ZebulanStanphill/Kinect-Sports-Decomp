typedef struct Range_828E71B8 {
    int begin;
    int end;
} Range_828E71B8;

typedef struct Obj_828E71B8 {
    void *vt;
    int f4;
    int f8;
    int fc;
    Range_828E71B8 range;
} Obj_828E71B8;

extern char lbl_82026478[];
extern char lbl_82027454[];
extern void fn_828CCCC0(Range_828E71B8 *dst, int begin, int end, int flag);

Obj_828E71B8 *fn_828E71B8(Obj_828E71B8 *o, Obj_828E71B8 *src)
{
    int v = *(src != 0 ? &src->f4 : 0);

    o->vt = lbl_82026478;
    o->f4 = v;
    o->f8 = src->f8;
    o->fc = src->fc;
    o->vt = lbl_82027454;
    o->range.begin = 0;
    o->range.end = 0;
    fn_828CCCC0(&o->range, src->range.begin, src->range.end, 0);
    return o;
}
