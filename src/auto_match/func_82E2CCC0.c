typedef struct _GUID { unsigned long Data1; unsigned short Data2; unsigned short Data3; unsigned char Data4[8]; } GUID;

extern int memcmp(const void *, const void *, unsigned);
extern GUID lbl_82153828;
extern GUID lbl_8202E618;
extern GUID lbl_821533E8;
extern GUID lbl_821533D8;
extern GUID lbl_82153838;
extern int fn_82E2A8E8(void *self, GUID id, void **out);

int fn_82E2CCC0(void *self, GUID id, void **out)
{
    int hr;

    if (memcmp(&id, &lbl_82153828, 16) == 0) {
        hr = fn_82E2A8E8(self, lbl_8202E618, out);
    } else if (memcmp(&id, &lbl_821533E8, 16) == 0) {
        hr = fn_82E2A8E8(self, lbl_821533E8, out);
    } else if (memcmp(&id, &lbl_821533D8, 16) == 0) {
        hr = fn_82E2A8E8(self, lbl_821533D8, out);
    } else if (memcmp(&id, &lbl_82153838, 16) == 0) {
        hr = fn_82E2A8E8(self, lbl_82153838, out);
    } else {
        hr = 0xc00d36b7;
    }
    return hr;
}
