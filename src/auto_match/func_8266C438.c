typedef unsigned short wchar_t;
typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern void fn_8266C340(const wchar_t *fmt, ...);
extern int fn_82F66D08(wchar_t *buf, unsigned int count, const wchar_t *fmt, va_list ap);
extern void fn_82F96710(const wchar_t *text);

/* XLipDebug.cpp assert. */
#define XLIP_ASSERT(e, line) \
    if (!(e)) fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipDebug.cpp", line, L#e)

void fn_8266C438(const wchar_t *pcwszFormat, ...)
{
    va_list args;
    wchar_t buffer[0x400];
    int iWritten;

    XLIP_ASSERT(pcwszFormat, 0x41);
    __va_start(&args, pcwszFormat);
    iWritten = fn_82F66D08(buffer, 0x400, pcwszFormat, args);
    if (iWritten > 0) {
        fn_82F96710(buffer);
    } else {
        fn_82F96710(pcwszFormat);
    }
}
