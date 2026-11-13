typedef struct { unsigned key; int val; } Ent_83032A08;
typedef struct { char pad0[0xc]; unsigned id; char pad10[0x38]; Ent_83032A08 *first; Ent_83032A08 *last; } Obj_83032A08;
typedef struct { char pad0[0xc]; unsigned id; } Msg_83032A08;

static int sel(Ent_83032A08 *e, int ok) { return ok ? (int)&e->val : 0; }

int fn_83032A08(Obj_83032A08 *o, Msg_83032A08 *m)
{
  int r = 1;
  Ent_83032A08 *end = o->last;
  unsigned k = m->id;
  Ent_83032A08 *e = o->first;
  int d;
  while (e != end && e->key != k) e++;
  d = (unsigned)end - (unsigned)e;
  if (sel(e, d != 0) != 0) {
    r = 5;
  } else if (o->id == k) {
    r = 0x17;
  }
  return r;
}
