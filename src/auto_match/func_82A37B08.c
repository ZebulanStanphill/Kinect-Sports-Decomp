typedef struct CRITICAL_SECTION_82A37B08 { int words[7]; } CRITICAL_SECTION_82A37B08;

extern void RtlEnterCriticalSection(CRITICAL_SECTION_82A37B08 *cs);
extern void RtlLeaveCriticalSection(CRITICAL_SECTION_82A37B08 *cs);
extern int NtClearEvent(void *handle);
extern long _InterlockedIncrement(long *p);

typedef struct Obj_82A37B08 {
    char pad0[0x10];
    CRITICAL_SECTION_82A37B08 lock;
    void *event;
    long count;
} Obj_82A37B08;

void fn_82A37B08(Obj_82A37B08 *o)
{
    RtlEnterCriticalSection(&o->lock);
    if (_InterlockedIncrement(&o->count) == 1)
        NtClearEvent(o->event);
    RtlLeaveCriticalSection(&o->lock);
}
