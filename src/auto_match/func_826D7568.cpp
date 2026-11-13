extern "C" void RtlEnterCriticalSection(void *);
extern "C" void RtlLeaveCriticalSection(void *);
struct Lock_826D7568 { void *cs; Lock_826D7568(void *c) : cs(c) { RtlEnterCriticalSection(cs); } ~Lock_826D7568() { RtlLeaveCriticalSection(cs); } };
typedef struct { char pad[0x48]; int *data; unsigned count; char pad2[4]; char cs[0x1c]; } Obj_826D7568;
extern "C" int fn_826D7568(Obj_826D7568 *o, unsigned i)
{
  Lock_826D7568 lock(o->cs);
  if (i >= o->count) return 0;
  return o->data[i];
}
