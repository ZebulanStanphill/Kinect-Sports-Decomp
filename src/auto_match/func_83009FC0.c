extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_83009630(void *p);
extern void *lbl_832645AC;
extern char lbl_832645B4[];

void fn_83009FC0(void)
{
    RtlEnterCriticalSection(lbl_832645B4);
    if (lbl_832645AC != 0) {
        fn_83009630(lbl_832645AC);
    }
    RtlLeaveCriticalSection(lbl_832645B4);
}
