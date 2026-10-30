typedef struct Dev {
    char pad[0x10];
    unsigned __int64 flags;
    char pad2[0x2ed8 - 0x18];
    int x2ed8;
} Dev;

typedef struct Obj {
    Dev *dev;
    int x4, x8, xc;
    int x10, x14, x18, x1c, x20, x24, x28, x2c;
    unsigned int x30;
    int pad[0x2014 - 13];
    int x8050;
} Obj;

void fn_82542ED0(Obj *p)
{
    Dev *d = p->dev;
    unsigned __int64 *f = &d->flags;
    p->x10 = 0;
    p->x14 = 0;
    p->x1c = 0;
    p->x20 = 0;
    p->x24 = 0;
    p->x28 = 0;
    p->x2c = 0;
    p->x30 = -1;
    p->x18 = -1;
    p->x8050 = -1;
    d->x2ed8 = 0;
    *f |= 0x80000;
}
