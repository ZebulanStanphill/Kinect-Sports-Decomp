typedef struct { int begin; unsigned count; } Vec_82A9D2A8;
typedef struct { int pad[0x11]; Vec_82A9D2A8 *v; } Obj_82A9D2A8;
typedef struct { int a; int b; unsigned w; unsigned flags; } Ent_82A9D2A8;

void fn_82A9D2A8(Obj_82A9D2A8 *o, unsigned *tab)
{
  int p;
  unsigned end;

  p = o->v->begin;
  end = o->v->count * 0x10 + o->v->begin;
  for (; p < end; p += 0x10) {
    Ent_82A9D2A8 *e = (Ent_82A9D2A8 *)p;
    if ((e->flags & 0xfe00) == 0xe400) {
      e->w = ((tab[(e->w & 0xfc) / 4] & 0x3f) << 2) | (e->w & 3);
    }
    end = o->v->count * 0x10 + o->v->begin;
  }
}
