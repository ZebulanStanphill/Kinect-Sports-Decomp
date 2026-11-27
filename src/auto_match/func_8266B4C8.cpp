struct Culture_8266B4C8 {
    int unknown00;
    char name[0x38];   /* 0x04: std::string */
    char parent[0x1c]; /* 0x3c: std::string */
};

struct CultureTable_8266B4C8 {
    unsigned int size;   /* 0x00 */
    char language[0x58]; /* 0x04 */
};

struct Vector_8266B4C8 {
    void *data;
    void *end;
    void *capacity;
};

struct Settings_8266B4C8 {
    int unused;
    Vector_8266B4C8 languages; /* 0x04 */
};

struct AssetMgr_8266B4C8 {
    char pad0[0xc];
    char root[1]; /* 0xc */
};

extern "C" {
extern CultureTable_8266B4C8 lbl_831E7A98;
extern Settings_8266B4C8 lbl_831E7AF4;
void fn_82A2A370(unsigned int error);
unsigned int fn_82F69B70(const char *s);
void fn_8266C340(const wchar_t *format, ...);
Culture_8266B4C8 *fn_8265ED50(const char *language);
const char *fn_8265F570(void *string);
unsigned int fn_8265CF70(Vector_8266B4C8 *vector);
void **fn_8265CF50(Vector_8266B4C8 *vector, unsigned int index);
int fn_82F664B0(char *destination, int size, const char *source);
int fn_8266B4C8(AssetMgr_8266B4C8 *self, int index, char *buffer, int size);
}

int fn_8266B4C8(AssetMgr_8266B4C8 *self, int index, char *buffer, int size)
{
    if (index < 0) {
        fn_82A2A370(0x57);
        return -1;
    }
    if (buffer == 0 && size != 0) {
        fn_82A2A370(0x57);
        return -1;
    }
    if (buffer != 0 && size <= 0) {
        fn_82A2A370(0x57);
        return -1;
    }
    if (fn_82F69B70(self->root) == 0) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipDiskAssetMgr.cpp", 0x8d,
                    L"FALSE && \"referencing un-initialized FSRoot\"");
        fn_82A2A370(0x139f);
        return -1;
    }
    const char *name = 0;
    if (lbl_831E7A98.size == 0x5c) {
        Culture_8266B4C8 *culture = fn_8265ED50(lbl_831E7A98.language);
        for (int i = 0; i < index && culture != 0; i++) {
            culture = fn_8265ED50(fn_8265F570(culture->parent));
        }
        if (culture != 0) {
            name = fn_8265F570(culture->name);
        }
    }
    if (name == 0 && (unsigned int)index < fn_8265CF70(&lbl_831E7AF4.languages)) {
        name = fn_8265F570(*fn_8265CF50(&lbl_831E7AF4.languages, index));
    }
    if (name == 0) {
        fn_82A2A370(0x585);
    } else {
        int crterr = fn_82F664B0(buffer, size, name);
        if (!(crterr == 0)) {
            fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipDiskAssetMgr.cpp", 0xbf,
                        L"crterr==0");
        }
        if (crterr == 0) {
            return fn_82F69B70(buffer) + 1;
        }
        fn_82A2A370(0x54f);
    }
    return -1;
}
