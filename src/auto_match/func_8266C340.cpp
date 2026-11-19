typedef char *va_list;
extern "C" void __cdecl __va_start(va_list *, ...);
extern "C" int fn_82F66D08(wchar_t *buf, unsigned int count, const wchar_t *fmt, va_list ap);
extern "C" void fn_82F96710(const wchar_t *text);
extern "C" int *fn_8265CF50(void *setting, int defaultValue);
extern "C" void fn_82A29A38(void);
extern "C" char lbl_831E7A1C[];

/* XLipDebug.cpp: reports a failed assertion, then breaks or throws as configured. */
extern "C" void fn_8266C340(const wchar_t *pcwszFormat, ...)
{
    va_list args;
    wchar_t buffer[0x400];
    int iWritten;

    if (pcwszFormat != 0) {
        __va_start(&args, pcwszFormat);
        iWritten = fn_82F66D08(buffer, 0x400, pcwszFormat, args);
        if (iWritten > 0) {
            fn_82F96710(buffer);
        } else {
            fn_82F96710(pcwszFormat);
        }
    } else {
        fn_82F96710(L"XLipAssert hit!");
    }
    switch (*fn_8265CF50(lbl_831E7A1C, 0)) {
    case 1:
        fn_82A29A38();
        break;
    case 3:
        throw "XLipAssert hit!";
    }
}
