extern void fn_8266C340(const unsigned short *format, ...);
extern int fn_82F69B70(const char *string);
extern int fn_82F69CA0(char *string, unsigned int size);
extern char *fn_8247E6E0(const char *string, const char *pattern);
extern char *fn_8257B0F8(const char *string, int character);
extern void fn_826670F0(char *string, int length, char *position);

#define XLIP_ASSERT(condition, line)                                                                         \
    if (!(condition)) {                                                                                      \
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipComponent.cpp", line,      \
                    L#condition);                                                                            \
    }

void fn_82665488(char *pszPath)
{
    int cchPath;
    char *pszScan;
    char *pszDrive;

    XLIP_ASSERT(pszPath, 0x323);
    cchPath = fn_82F69B70(pszPath);
    XLIP_ASSERT(cchPath > 0, 0x327);
    fn_82F69CA0(pszPath, cchPath + 1);
    pszDrive = fn_8247E6E0(pszPath, ":\\");
    if (pszDrive == 0) {
        pszDrive = pszPath;
    } else {
        pszDrive = pszDrive + 2;
    }
    pszScan = pszDrive;
    while (pszScan != 0 && *pszScan != 0) {
        if (*pszScan == '\\') {
            while (*pszScan == '\\') {
                fn_826670F0(pszPath, cchPath, pszScan);
                cchPath--;
            }
            pszScan++;
        } else {
            pszScan = fn_8257B0F8(pszScan, '\\');
            if (pszScan != 0) {
                pszScan++;
            }
        }
    }
    if (pszPath[cchPath - 1] == '\\') {
        cchPath--;
        pszPath[cchPath] = 0;
    }
}
