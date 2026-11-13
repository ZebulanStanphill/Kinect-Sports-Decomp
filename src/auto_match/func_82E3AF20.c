typedef struct _GUID { unsigned long Data1; unsigned short Data2; unsigned short Data3; unsigned char Data4[8]; } GUID;
extern int memcmp(const void *, const void *, unsigned);
extern GUID lbl_8202E618;
extern GUID lbl_8214C020;
extern GUID lbl_8214C030;

int fn_82E3AF20(void *self, const GUID *id)
{
    int r = 2;
    if (memcmp(&lbl_8202E618, id, 16) == 0) r = 3;
    else if (memcmp(&lbl_8214C020, id, 16) == 0) r = 1;
    else if (memcmp(&lbl_8214C030, id, 16) == 0) r = 2;
    return r;
}
