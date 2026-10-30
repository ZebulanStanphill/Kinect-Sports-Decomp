typedef struct Obj_82EEA4E0 {
  void **vt;
} Obj_82EEA4E0;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Obj_82EEA4E0 *fn_82EE9E20(void *cs, unsigned __int64 id);

int fn_82EEA4E0(void *cs, unsigned __int64 id)
{
  Obj_82EEA4E0 *o;
  if (id != 0) {
    RtlEnterCriticalSection(cs);
    o = fn_82EE9E20(cs, id);
    RtlLeaveCriticalSection(cs);
    if (o != 0) {
      (*(void (*)(Obj_82EEA4E0 *))o->vt[2])(o);
      return 1;
    }
  }
  return 0;
}
