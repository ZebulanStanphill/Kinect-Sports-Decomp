typedef struct Dev_82542D90 {
    char pad[0x10];
    unsigned __int64 flags;
    char pad2[0x2ed8 - 0x18];
    int x2ed8;
} Dev_82542D90;

typedef struct Obj_82542D90 {
    Dev_82542D90 *dev;
    int x4, x8, xc;
    int x10, x14, x18, x1c, x20, x24, x28, x2c;
    unsigned int x30;
    int pad[0x2014 - 13];
    int x8050;
} Obj_82542D90;

typedef struct Entry_82542D90 { void *items; unsigned int count; } Entry_82542D90;
typedef struct Set_82542D90 { char pad[0x14]; Entry_82542D90 *entries; } Set_82542D90;

extern void fn_82542F28(Obj_82542D90 *p, Set_82542D90 *s, unsigned int i, int a);

static __forceinline void Reset_82542D90(Obj_82542D90 *p)
{
    Dev_82542D90 *d = p->dev;
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

void fn_82542D90(Obj_82542D90 *p, Set_82542D90 *s, unsigned int i, int a)
{
    if (s->entries == 0) {
        return;
    }
    if (s->entries[i].count == 0) {
        return;
    }
    Reset_82542D90(p);
    fn_82542F28(p, s, i, a);
}
