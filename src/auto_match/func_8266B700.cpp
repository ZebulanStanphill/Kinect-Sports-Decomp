struct AssetMgr_8266B700 {
    char pad0[0xc];
    char root[1]; /* 0xc */
};

struct FindData_8266B700 {
    char data[0x140];
};

class FindHandle_8266B700
{
  public:
    FindHandle_8266B700(const int &handle);
    virtual ~FindHandle_8266B700();
    int *Get();

    int handle; /* 0x4 */
};

extern "C" {
void fn_82A2A370(unsigned int error);
unsigned int fn_82F69B70(const char *s);
int fn_8266C020(char *buffer, const char *format, ...);
void fn_8266C340(const wchar_t *format, ...);
int fn_8266BFE8(const char *pattern);
int fn_82A1F4F8(const char *szPath);
int fn_82A2A438(const char *szPath, FindData_8266B700 *findFileData);
unsigned int fn_8266B700(AssetMgr_8266B700 *self, const char *dir, const char *file);
}

unsigned int fn_8266B700(AssetMgr_8266B700 *self, const char *dir, const char *file)
{
    if (dir == 0) {
        fn_82A2A370(0x57);
        return 0;
    }
    if (file == 0) {
        fn_82A2A370(0x57);
        return 0;
    }
    if (fn_82F69B70(self->root) == 0) {
        fn_82A2A370(0x139f);
        return 0;
    }
    if (fn_82F69B70(self->root) + fn_82F69B70(dir) + fn_82F69B70(file) + 3 > 260) {
        fn_82A2A370(0xa1);
        return 0;
    }
    char szPath[260];
    int iRet = fn_8266C020(szPath, "%s\\%s\\%s", self->root, file, dir);
    if (!(iRet > 0)) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipDiskAssetMgr.cpp", 0xe7,
                    L"iRet > 0");
    }
    if (!(iRet > 0)) {
        fn_82A2A370(0x54f);
        return 0;
    }
    if (fn_8266BFE8(dir) == 0) {
        int attributes = fn_82A1F4F8(szPath);
        if (attributes != -1) {
            return 1;
        }
    } else {
        FindData_8266B700 findFileData;
        FindHandle_8266B700 hFind(fn_82A2A438(szPath, &findFileData));
        if (*hFind.Get() != -1) {
            return 1;
        }
    }
    fn_82A2A370(0x490);
    return 0;
}
