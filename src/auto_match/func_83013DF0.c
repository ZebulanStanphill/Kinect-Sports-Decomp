typedef struct { int p0; float val; int p8, pc; unsigned __int64 q; } Slot_83013DF0;
typedef struct {
  unsigned id;
  int p4;
  Slot_83013DF0 slot;
  char pad[8];
} Ent_83013DF0;
typedef struct {
  int p0;
  Ent_83013DF0 *begin;
  Ent_83013DF0 *end;
  int pc;
  char cs[0x20];
  unsigned __int64 q30;
} Obj_83013DF0;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

static __forceinline Slot_83013DF0 *findSlot(Obj_83013DF0 *o, unsigned id)
{
  Ent_83013DF0 *e;
  unsigned ok;
  for (e = o->begin; e != o->end && e->id != id; e++) {
  }
  ok = e != o->end;
  return ok ? &e->slot : 0;
}

void fn_83013DF0(Obj_83013DF0 *o, unsigned id, float v)
{
  Slot_83013DF0 *s = findSlot(o, id);
  if (s != 0) {
    RtlEnterCriticalSection(o->cs);
    s->q = o->q30;
    s->val = v;
    RtlLeaveCriticalSection(o->cs);
  }
}
