typedef unsigned short wchar_t;

extern void fn_8266C340(const wchar_t *fmt, ...);
extern void free(void *p);
extern unsigned int lbl_831E7B18;
extern void (*lbl_831E7B28)(void *p);

/* XLipMem.cpp assert. */
#define XLIP_ASSERT(e, line) \
    if (!(e)) fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipMem.cpp", line, L#e)

void fn_8266C2B0(void *pvMem)
{
    XLIP_ASSERT(pvMem, 0x9a);
    if (lbl_831E7B18 != 0) {
        return;
    }
    if (lbl_831E7B28 != 0) {
        lbl_831E7B28(pvMem);
    } else {
        free(pvMem);
    }
}
