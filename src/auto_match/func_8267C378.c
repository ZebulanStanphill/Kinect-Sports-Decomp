typedef struct Desc_8267C378 {
    int words[6];
    int global;
    int pad;
} Desc_8267C378;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void *fn_8267C0B8(char *mgr, const char *name, int flags, Desc_8267C378 *desc);
extern char *lbl_831E7E60;
extern void *lbl_831E7E64;

void *fn_8267C378(const Desc_8267C378 *desc)
{
    void *cs;
    Desc_8267C378 local;

    if (lbl_831E7E60 == 0)
        return 0;
    cs = lbl_831E7E60 + 0x2c4;
    RtlEnterCriticalSection(cs);
    if (lbl_831E7E64 != 0) {
        RtlLeaveCriticalSection(cs);
        return 0;
    }
    local = *desc;
    local.global = 1;
    lbl_831E7E64 = fn_8267C0B8(lbl_831E7E60, "Global", 0, &local);
    RtlLeaveCriticalSection(cs);
    return lbl_831E7E64;
}
