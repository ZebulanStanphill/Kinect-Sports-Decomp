extern char lbl_8217D360[];
extern char lbl_8217D394[];
extern char lbl_8217D3AC[];
typedef struct Base_8303B348 { void *vt; } Base_8303B348;
typedef struct Obj_8303B348 { void *vt; Base_8303B348 b; int f8; int fc; } Obj_8303B348;
void fn_8303B348(Obj_8303B348 *o, int a, int b)
{
    Base_8303B348 *s = &o->b;
    s->vt = lbl_8217D360;
    o->vt = lbl_8217D3AC;
    o->b.vt = lbl_8217D394;
    o->f8 = a;
    o->fc = b;
}
