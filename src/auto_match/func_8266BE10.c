typedef unsigned short wchar_t;

typedef struct Asset_8266BE10 {
    void *vtable;      /* 0x00 */
    char signature[8]; /* 0x04 */
    char name[1];      /* 0x0c */
} Asset_8266BE10;

extern int fn_8266BF60(const Asset_8266BE10 *);
extern void fn_8266C340(const wchar_t *, ...);
extern int stricmp(const char *, const char *);

unsigned char fn_8266BE10(Asset_8266BE10 *self, const Asset_8266BE10 *other)
{
    const Asset_8266BE10 *source;
    if (other == 0) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipDiskAssetMgr.cpp", 0x1a6,
                    L"pOther != NULL");
    }
    if (fn_8266BF60(other) != 0) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipDiskAssetMgr.cpp", 0x1a7,
                    L"CheckSignature( pOther ) == 0");
    }
    if (other == 0) {
        return 0;
    }
    if (fn_8266BF60(other) == 0) {
        return 0;
    }
    source = other;
    return stricmp(self->name, source->name) == 0;
}
