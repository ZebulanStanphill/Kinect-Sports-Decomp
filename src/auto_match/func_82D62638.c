struct Obj_82D62638;
typedef struct VT_82D62638 {
    void (*f0)(void *self, int flag);
    int pad4[4];
    void (*f14)(void *self, unsigned id, int arg);
} VT_82D62638;
typedef struct Owner_82D62638 {
    VT_82D62638 *vt;
} Owner_82D62638;
typedef struct Obj_82D62638 {
    VT_82D62638 *vt;
    int f4;
    Owner_82D62638 *owner;
    unsigned short ids[3];
} Obj_82D62638;

void fn_82D62638(Obj_82D62638 *p, int a)
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
