typedef struct _RTL_CRITICAL_SECTION { int w[7]; } RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern int fn_82692200(void *p, int a);

typedef struct Obj_8267B890 {
  unsigned char pad[0x48];
  RTL_CRITICAL_SECTION cs;
  unsigned char locked;
  void *impl;
} Obj_8267B890;

int fn_8267B890(Obj_8267B890 *o, int a)
{
  int r;
  if (o->locked) {
    RtlEnterCriticalSection(&o->cs);
    r = fn_82692200(o->impl, a);
    RtlLeaveCriticalSection(&o->cs);
    return r;
  }
  return fn_82692200(o->impl, a);
}
