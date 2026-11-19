typedef unsigned short wchar_t;

extern int fn_8265CCA8(int c);
extern unsigned int fn_8265CE30(const char *s);
extern void fn_8266C340(const wchar_t *format, ...);

void fn_82667720(char *text)
{
    char *pEnd;
    char *pStart;
    char *pTarget;

    if (text == 0) {
        return;
    }
    pStart = text;
    while (fn_8265CCA8((unsigned char)*pStart) != 0) {
        pStart++;
    }
    if (*pStart == 0) {
        *text = 0;
        return;
    }
    pEnd = pStart + fn_8265CE30(pStart) - 1;
    while (fn_8265CCA8((unsigned char)*pEnd) != 0) {
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
