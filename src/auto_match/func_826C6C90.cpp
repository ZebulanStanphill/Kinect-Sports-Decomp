struct Vec_82698FC8 {
    void Method_82698FC8(unsigned int a);
};

struct Obj_826C6C90;
struct ObjVt_826C6C90 {
    char pad[0x28];
    unsigned int (*get)(Obj_826C6C90 *self);
};
struct Obj_826C6C90 {
    ObjVt_826C6C90 *vt;
};

struct Ent_826C6C90 {
    char pad0[0x10];
    unsigned int val;
    char pad14[4];
    unsigned char flag;
};

struct Flags_826C6C90 {
    char pad[0xb00];
    unsigned int flags;
};

struct Self_826C6C90;
struct SelfVt_826C6C90 {
    char pad[0x124];
    void (*f)(Self_826C6C90 *self, int a);
};

struct Self_826C6C90 {
    SelfVt_826C6C90 *vt;
    char pad04[0x9c - 0x04];
    Obj_826C6C90 *obj;          /* 0x9c */
    Flags_826C6C90 *fl;         /* 0xa0 */
    char padA4[0xa8 - 0xa4];
    char vec[0xbc - 0xa8];      /* 0xa8 */
    unsigned int count;         /* 0xbc */
    char padC0[0x1ac - 0xc0];
    Ent_826C6C90 *ent;          /* 0x1ac */
    char pad1B0[0x1cc - 0x1b0];
    unsigned char bits;         /* 0x1cc */
};

extern "C" void fn_826C6C90(Self_826C6C90 *p)
{
    Ent_826C6C90 *e = p->ent;
    unsigned int a;
    unsigned int b;

    p->count++;
    if (e != 0 && e->flag == 0) {
        a = e->val;
    } else {
        a = p->obj->vt->get(p->obj);
    }
    b = p->obj->vt->get(p->obj);
    if (a < b && p->count >= a) {
        p->count = a != 0 ? a - 1 : 0;
    } else if (p->count >= b) {
        p->count = 0;
        p->bits |= 2;
        if (b > 1) {
            ((Vec_82698FC8 *)p->vec)->Method_82698FC8(0);
            p->fl->flags |= 0x400;
        } else {
            p->vt->f(p, 1);
        }
    }
}
