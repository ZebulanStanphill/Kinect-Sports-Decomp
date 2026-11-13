typedef struct _GUID { unsigned long Data1; unsigned short Data2; unsigned short Data3; unsigned char Data4[8]; } GUID;

extern int memcmp(const void *, const void *, unsigned);
extern GUID lbl_82154AD8;
extern GUID lbl_82154AE8;
extern GUID lbl_82154AF8;
extern GUID lbl_8202E618;
extern GUID lbl_8214C020;
extern GUID lbl_8214C030;

GUID fn_82E3ACD8(void *self, const GUID *id)
{
    GUID r = lbl_8202E618;
    if (memcmp(&lbl_8202E618, id, 16) == 0) {
        r = lbl_82154AD8;
    } else if (memcmp(&lbl_8214C020, id, 16) == 0) {
        r = lbl_82154AE8;
    } else if (memcmp(&lbl_8214C030, id, 16) == 0) {
        r = lbl_82154AF8;
    }
    return r;
}
