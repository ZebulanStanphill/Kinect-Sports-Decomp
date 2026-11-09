typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void __stdcall RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void __stdcall RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern int fn_82FF5200(void *p, void *key);

unsigned char fn_82FF50F0(char *self, void *key)
{
    unsigned char found;
    RtlEnterCriticalSection((RTL_CRITICAL_SECTION *)(self + 0x88));
    found = fn_82FF5200(self + 4, key) != 0;
    RtlLeaveCriticalSection((RTL_CRITICAL_SECTION *)(self + 0x88));
    return found;
}
