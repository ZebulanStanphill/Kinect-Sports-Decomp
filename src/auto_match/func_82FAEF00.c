typedef struct Child_82FAEF00 Child_82FAEF00;
typedef struct {
    char pad[0x44];
    void (*update)(Child_82FAEF00 *c, float dt, int arg, unsigned char flag);
} ChildVt_82FAEF00;
struct Child_82FAEF00 {
    ChildVt_82FAEF00 *vt;
    int f04[4];
    int f14;
    unsigned short f18;
};
typedef struct { int key; Child_82FAEF00 *child; } Pair_82FAEF00;
typedef struct {
    char pad[0x7c];
    Pair_82FAEF00 *begin;
    Pair_82FAEF00 *end;
} Obj_82FAEF00;

void fn_82FAEF00(Obj_82FAEF00 *o, float dt, int arg, unsigned char flag)
{
    Pair_82FAEF00 *p;
    for (p = o->begin; p != o->end; p++) {
        if (flag == 0 || p->child->f14 == 0) {
            Child_82FAEF00 *c = p->child;
            if (c->f18 != 0) {
                c->vt->update(c, dt, arg, flag);
            }
        }
    }
}
