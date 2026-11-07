extern unsigned int lbl_820E0214;

typedef struct Sub_82BBFDF0 {
    void *vt;
    void *owner;
    int extra;
} Sub_82BBFDF0;

typedef struct Obj_82BBFDF0 {
    void *vt;
    int field4;
    Sub_82BBFDF0 *cur;
    Sub_82BBFDF0 sub;
} Obj_82BBFDF0;

void fn_82BBFDF0(Obj_82BBFDF0 *o)
{
    Sub_82BBFDF0 *s;

    o->vt = &lbl_820E0214;
    s = &o->sub;
    s->vt = &lbl_820E0214;
    s->owner = 0;
    s->extra = 0;
    o->cur = s;
    o->field4 = 0;
    o->sub.owner = o;
    o->sub.extra = 0;
}
