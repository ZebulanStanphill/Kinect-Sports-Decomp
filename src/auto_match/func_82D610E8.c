struct Obj_82D610E8;
typedef struct VT_82D610E8 {
    void (*f0)(void *self, int flag);
    int pad4[4];
    void (*f14)(void *self, unsigned id, int arg);
} VT_82D610E8;
typedef struct Owner_82D610E8 {
    VT_82D610E8 *vt;
} Owner_82D610E8;
typedef struct Obj_82D610E8 {
    VT_82D610E8 *vt;
    int f4;
    Owner_82D610E8 *owner;
    int pad[4];
    unsigned short ids[8];
} Obj_82D610E8;

void fn_82D610E8(Obj_82D610E8 *p, int a)
{
    unsigned short *ip;
    int n;

    ip = p->ids;
    n = 8;
    do {
        if (*ip != 0xffff)
            p->owner->vt->f14(p->owner, *ip, a);
        n--;
        ip++;
    } while (n != 0);
    if (p != 0)
        p->vt->f0(p, 1);
}
