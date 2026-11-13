typedef struct _GUID { unsigned long Data1; unsigned short Data2; unsigned short Data3; unsigned char Data4[8]; } GUID;

extern int memcmp(const void *, const void *, unsigned);
extern GUID lbl_820F8EA8;
extern GUID lbl_820F8EB8;
extern GUID lbl_820F8EC8;
extern GUID lbl_820F8ED8;

int fn_82E59348(GUID id)
{
    if (memcmp(&lbl_820F8EA8, &id, 16) == 0 || memcmp(&lbl_820F8EB8, &id, 16) == 0
        || memcmp(&lbl_820F8EC8, &id, 16) == 0 || memcmp(&lbl_820F8ED8, &id, 16) == 0) {
        return 1;
    }
    return 0;
}
