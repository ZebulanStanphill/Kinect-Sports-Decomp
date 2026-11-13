typedef struct { unsigned key; int val; } Ent_8300A3F0;
typedef struct { char pad0[0xc]; unsigned id; char pad10[0x38]; Ent_8300A3F0 *first; Ent_8300A3F0 *last; } Obj_8300A3F0;
typedef struct { char pad0[0xc]; unsigned id; char pad10[4]; int busy; } Msg_8300A3F0;

static __forceinline int sel(Ent_8300A3F0 *e, int ok) { return ok ? (int)&e->val : 0; }

int fn_8300A3F0(Obj_8300A3F0 *o, Msg_8300A3F0 *m)
{
  int r = 1;
  Ent_8300A3F0 *end;
  Ent_8300A3F0 *e;
  unsigned k;
  int d;
  if (m->busy != 0) return 0x15;
  end = o->last; e = o->first; k = m->id;
  while (e != end && e->key != k) e++;
  d = (unsigned)end - (unsigned)e;
  if (sel(e, d != 0) != 0) {
    r = 5;
  } else if (o->id == k) {
    r = 0x17;
  }
  return r;
}
