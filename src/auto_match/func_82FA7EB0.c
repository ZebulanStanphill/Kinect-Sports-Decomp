typedef struct CRITICAL_SECTION_82FA7EB0 CRITICAL_SECTION_82FA7EB0;

extern void RtlEnterCriticalSection(CRITICAL_SECTION_82FA7EB0 *cs);
extern void RtlLeaveCriticalSection(CRITICAL_SECTION_82FA7EB0 *cs);
extern int *fn_83014128(void *self, int key);
extern void fn_82A1E968(void *p);

int fn_82FA7EB0(char *self, int key)
{
    CRITICAL_SECTION_82FA7EB0 *cs = (CRITICAL_SECTION_82FA7EB0 *)(self + 0xc);
    int *e;

    RtlEnterCriticalSection(cs);
    e = fn_83014128(self, key);
    if (e != 0) {
        e[0] = 0;
        e[1] = 0;
        e[2] = 0;
        e[3] = 0;
        e[4] = 0;
        fn_82A1E968(e + 6);
        RtlLeaveCriticalSection(cs);
        return 1;
    }
    RtlLeaveCriticalSection(cs);
    return 2;
}
