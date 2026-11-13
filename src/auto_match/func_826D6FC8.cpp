extern "C" void RtlEnterCriticalSection(void *);
extern "C" void RtlLeaveCriticalSection(void *);
struct Lock_826D6FC8 { void *cs; Lock_826D6FC8(void *c) : cs(c) { RtlEnterCriticalSection(cs); } ~Lock_826D6FC8() { RtlLeaveCriticalSection(cs); } };
struct Pair_826D6FC8 { int a; int b; };
typedef struct { char pad[0xd4]; char cs[0x28]; Pair_826D6FC8 *data; unsigned count; } Obj_826D6FC8;
extern "C" int fn_826D6FC8(Obj_826D6FC8 *o, Pair_826D6FC8 *out, unsigned i)
{
  Lock_826D6FC8 lock(o->cs);
  if (i >= o->count) return 0;
  Pair_826D6FC8 *e = &o->data[i]; out->a = e->a; out->b = e->b;
  return 1;
}
