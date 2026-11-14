typedef struct { char pad[0x1c]; int count; } Obj_82DA0FF0;
typedef struct { int size; int extra; } Stats_82DA0FF0;

void fn_82DA0FF0(Obj_82DA0FF0 *self, void *unused, Stats_82DA0FF0 *out)
{
    int n = self->count;
    int e = n * 6;
    out->extra = e;
    out->size = (n * 2 + e) * 8 + ((n + 3) & ~3);
}
