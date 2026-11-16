typedef unsigned short wchar_t;
extern unsigned char lbl_831E7A18;
extern unsigned int lbl_831E7A98;
extern void fn_82A2A370(unsigned int);
extern void fn_8266C340(const wchar_t *, ...);
extern int fn_82F6A3F8(void *, unsigned int, const void *, unsigned int);

unsigned int fn_8266A4E8(unsigned int *settings)
{
    int status;
    if (lbl_831E7A18 == 0) {
        fn_82A2A370(0x15);
        return 0;
    }
    if (settings == 0) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipSettings.cpp", 0x98,
                    L"pSettings!=NULL");
    }
    if (settings == 0) {
        fn_82A2A370(0x57);
        return 0;
    }
    if (*settings != 0x5c) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipSettings.cpp", 0x9f,
                    L"pSettings->cbSize == sizeof(XLIPUSERSETTINGS)");
    }
    if (*settings != 0x5c) {
        fn_82A2A370(0x57);
        return 0;
    }
    if (lbl_831E7A98 != 0x5c) {
        fn_82A2A370(0xd);
        return 0;
    }
    status = fn_82F6A3F8(settings, *settings, &lbl_831E7A98, lbl_831E7A98);
    if (status != 0) {
        fn_82A2A370(0x54f);
        return 0;
    }
    return 1;
}
