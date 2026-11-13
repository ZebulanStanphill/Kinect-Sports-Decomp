extern char lbl_821968A4[];
extern char lbl_8217C35C[];
extern char lbl_8217C358[];
typedef struct Base_8300FA30 { void *vt; } Base_8300FA30;
typedef struct Ref_8300FA30 { char pad[0x5c]; int refs; } Ref_8300FA30;
typedef struct Obj_8300FA30 { void *vt; Base_8300FA30 b; char pad[0x2c]; Ref_8300FA30 *ref; } Obj_8300FA30;
void fn_8300FA30(Obj_8300FA30 *o, Ref_8300FA30 *r)
{
    Base_8300FA30 *s = &o->b;
    s->vt = lbl_821968A4;
    o->vt = lbl_8217C35C;
    o->b.vt = lbl_8217C358;
    o->ref = r;
    if (r != 0)
        r->refs++;
}
