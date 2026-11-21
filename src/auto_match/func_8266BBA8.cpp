struct AssetMgr_8266BBA8 {
    char pad0[0xc];
    char root[1]; /* 0xc */
};

class Version_8266BBA8
{
  public:
    Version_8266BBA8();

    unsigned short major; /* 0x0 */
    unsigned short minor; /* 0x2 */
};

extern "C" {
void fn_82A2A370(unsigned int error);
unsigned int fn_82A1F470(void);
unsigned int fn_82F69B70(const char *s);
int fn_8266C020(char *buffer, const char *format, ...);
void fn_8266C340(const wchar_t *format, ...);
int fn_82665D08(const char *path, Version_8266BBA8 *version);
unsigned int fn_8266BBA8(AssetMgr_8266BBA8 *self, const char *dir, unsigned short *major,
                         unsigned short *minor);
}

unsigned int fn_8266BBA8(AssetMgr_8266BBA8 *self, const char *dir, unsigned short *major,
                         unsigned short *minor)
{
    if (dir == 0) {
        fn_82A2A370(0x57);
        return 0;
    }
    if (major == 0) {
        fn_82A2A370(0x57);
        return 0;
    }
    if (minor == 0) {
        fn_82A2A370(0x57);
        return 0;
    }
    if (fn_82F69B70(self->root) == 0) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipDiskAssetMgr.cpp", 0x169,
                    L"FALSE && \"referencing un-initialized FSRoot\"");
        fn_82A2A370(0x139f);
        return 0;
    }
    if (fn_82F69B70(self->root) + fn_82F69B70(dir) + fn_82F69B70("lang.ini") + 3 > 260) {
        fn_82A2A370(0xa1);
        return 0;
    }
    char szPath[260];
    int iRet = fn_8266C020(szPath, "%s\\%s\\%s", self->root, dir, "lang.ini");
    if (!(iRet > 0)) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipDiskAssetMgr.cpp", 0x179,
                    L"iRet > 0");
    }
    if (!(iRet > 0)) {
        fn_82A2A370(0x54f);
        return 0;
    }
    Version_8266BBA8 langVersion;
    int hr = fn_82665D08(szPath, &langVersion);
    if (hr < 0 && fn_82A1F470() != 2) {
        return 0;
    }
    *major = langVersion.major;
    *minor = langVersion.minor;
    return 1;
}
