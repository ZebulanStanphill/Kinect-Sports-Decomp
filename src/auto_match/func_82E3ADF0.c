typedef struct _GUID { unsigned long Data1; unsigned short Data2; unsigned short Data3; unsigned char Data4[8]; } GUID; 

extern int memcmp(const void *, const void *, unsigned);
extern char lbl_82154AC8[];
extern char lbl_82154AD8[];
extern char lbl_82154AE8[];
extern char lbl_82154AF8[];
extern GUID lbl_8202E618;
extern GUID lbl_8214C020;
extern GUID lbl_8214C030;

GUID fn_82E3ADF0(void *self, const char *iid)
{
  if (memcmp(lbl_82154AC8, iid, 16) != 0 && memcmp(lbl_82154AD8, iid, 16) != 0) {
    if (memcmp(lbl_82154AE8, iid, 16) == 0) {
      return lbl_8214C020;
    }
    if (memcmp(lbl_82154AF8, iid, 16) == 0) {
      return lbl_8214C030;
    }
  }
  return lbl_8202E618;
}
