typedef struct { char pad[0x12c]; int f12c; unsigned char f130; } Ent_82E79970;
typedef struct { char pad[0x178]; char tab[0x68]; unsigned count; } Obj_82E79970;
extern int fn_82E78690(void *, unsigned, Ent_82E79970 **);
static Ent_82E79970 *Get_82E79970(int ok, Ent_82E79970 *v) { return ok ? v : 0; }
short fn_82E79970(Obj_82E79970 *o)
{
  unsigned short n = 0;
  unsigned i;
  Ent_82E79970 *e, *out;
  for (i = 0; i < o->count; i++) {
    int ok = fn_82E78690(o->tab, i, &out);
    e = Get_82E79970(ok, out);
    if (e == 0) return n;
    if (e->f12c == 0 || e->f130 == 0) n++;
  }
  return n;
}
