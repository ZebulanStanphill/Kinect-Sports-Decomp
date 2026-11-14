typedef struct Entry_82A05CB0 { unsigned int flags; char pad[0x1ec]; } Entry_82A05CB0;
typedef struct Obj_82A05CB0 { char pad[0x4f0]; Entry_82A05CB0 entries[1]; } Obj_82A05CB0;

static __forceinline int GetMode(Obj_82A05CB0 *o, int i) { if (o->entries[i].flags & 3) return 1; return 2; }

int fn_82A05CB0(Obj_82A05CB0 *self, int a, int b)
{
    int ma = GetMode(self, a);
    int mb = GetMode(self, b);
    if (ma == 0 || mb == 0) return 0;
    if (ma == 1 || mb == 1) return 1;
    return 2;
}
