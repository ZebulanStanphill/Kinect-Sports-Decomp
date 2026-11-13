typedef struct _RTL_CRITICAL_SECTION { int w[7]; } RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern int fn_82692370(void *p, int a, int b);

typedef struct Obj_8267B8F0 {
  unsigned char pad[0x48];
  RTL_CRITICAL_SECTION cs;
  unsigned char locked;
  void *impl;
} Obj_8267B8F0;

int fn_8267B8F0(Obj_8267B8F0 *o, int a, int b)
{
  int r;
  if (o->locked) {
    RtlEnterCriticalSection(&o->cs);
    r = fn_82692370(o->impl, a, b);
    RtlLeaveCriticalSection(&o->cs);
    return r;
  }
  return fn_82692370(o->impl, a, b);
}
