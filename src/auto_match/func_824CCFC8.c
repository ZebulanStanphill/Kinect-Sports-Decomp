typedef struct Iface Iface;
struct Iface { int (**vt)(Iface *); };
typedef struct { char pad[0x20]; Iface *obj; char pad2[0xd4 - 0x24]; int d4; } Obj;

int fn_824CCFC8(Obj *p)
{
    if (p->obj && p->obj->vt[1](p->obj) && p->d4) {
        return 1;
    }
    return 0;
}
