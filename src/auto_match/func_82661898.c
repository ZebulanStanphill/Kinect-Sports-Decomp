typedef unsigned short wchar_t;

extern int fn_8265CD00(wchar_t c);
extern unsigned int fn_8265CE08(const wchar_t *s);
extern void fn_8266C340(const wchar_t *format, ...);

/* Trims leading and trailing white space in place. */
void fn_82661898(wchar_t *text)
{
    wchar_t *pEnd;
    wchar_t *pStart;
    wchar_t *pTarget;

    if (text == 0) {
        return;
    }
    pStart = text;
    while (fn_8265CD00(*pStart)) {
        pStart++;
    }
    if (*pStart == 0) {
        *text = 0;
        return;
    }
    pEnd = pStart + fn_8265CE08(pStart) - 1;
    while (fn_8265CD00(*pEnd)) {
        pEnd--;
    }
    if (pEnd < pStart) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s",
                    L"d:\\work\\external\\xlip\\1.0\\XLip_x.h", 0x76, L"pEnd >= pStart");
    }
    pEnd[1] = 0;
    if (pStart > text) {
        for (pTarget = text; pStart <= pEnd + 1; pStart++, pTarget++) {
            *pTarget = *pStart;
        }
    }
}
