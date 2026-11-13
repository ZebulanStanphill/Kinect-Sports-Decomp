extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int fn_82EEA4E0(void *, void *);
typedef struct { char pad[0x50]; char cs[0x28]; char set[4]; } Obj_82EE94B0;
long fn_82EE94B0(Obj_82EE94B0 *o, void *a)
{
    long hr;
    RtlEnterCriticalSection(o->cs);
    hr = fn_82EEA4E0(o->set, a) ? 0 : 0x80004005;
    RtlLeaveCriticalSection(o->cs);
    return hr;
}
