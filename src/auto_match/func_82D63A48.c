struct Obj_82D63A48;
typedef struct VT_82D63A48 {
    void (*f0)(void *self, int flag);
    int pad4[4];
    void (*f14)(void *self, unsigned id, int arg);
} VT_82D63A48;
typedef struct Owner_82D63A48 {
    VT_82D63A48 *vt;
} Owner_82D63A48;
typedef struct Obj_82D63A48 {
    VT_82D63A48 *vt;
    int f4;
    Owner_82D63A48 *owner;
    unsigned short ids[3];
} Obj_82D63A48;

void fn_82D63A48(Obj_82D63A48 *p, int a)
{
    unsigned short *ip;
    int n;

    ip = p->ids;
    n = 3;
    do {
        if (*ip != 0xffff)
            p->owner->vt->f14(p->owner, *ip, a);
        n--;
        ip++;
    } while (n != 0);
    if (p != 0)
        p->vt->f0(p, 1);
}
