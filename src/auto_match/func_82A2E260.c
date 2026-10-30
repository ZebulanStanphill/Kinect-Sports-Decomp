typedef struct Ent_82A2E260 { unsigned int key; unsigned char b4, b5, b6, flags; } Ent_82A2E260;
typedef struct Obj_82A2E260 {
  char pad0[0x30]; Ent_82A2E260 *ents;
  char pad1[0xc8 - 0x34]; unsigned char count; char pad2; unsigned char extra;
} Obj_82A2E260;

extern int fn_82A2D670(Obj_82A2E260 *, unsigned int, Ent_82A2E260 *);

int fn_82A2E260(Obj_82A2E260 *o, unsigned int lo, unsigned int hi)
{
  Ent_82A2E260 *ents = o->ents;
  unsigned int count = o->count;
  unsigned int maxp, pass, i;
  Ent_82A2E260 *e;
  int hr;

  if (hi == 0xffffffff) {
    maxp = o->extra + 1;
  } else {
    maxp = 0;
  }
  pass = 0;
  do {

    for (i = 0, e = ents; i < count; i++, e++) {
      if ((e->flags & 3) == pass && (e->flags & 0x40) != 0 && e->key >= lo && e->key <= hi) {
        hr = fn_82A2D670(o, i, e);
        if (hr < 0) return hr;
      }
    }
    pass++;
  } while (pass <= maxp);
  return 0;
}
