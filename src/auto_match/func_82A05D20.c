typedef struct Entry_82A05D20 { unsigned int flags; char pad[0x1ec]; } Entry_82A05D20;
typedef struct Obj_82A05D20 { char pad[0x4f0]; Entry_82A05D20 entries[1]; } Obj_82A05D20;

static __forceinline int GetMode(Obj_82A05D20 *o, int i) { if (o->entries[i].flags & 3) return 1; return 2; }

int fn_82A05D20(Obj_82A05D20 *self, int a, int b)
{
    int ma = GetMode(self, a);
    int mb = GetMode(self, b);
    if (ma == 2 || mb == 2) return 2;
    if (ma == 1 || mb == 1) return 1;
    return 0;
}
