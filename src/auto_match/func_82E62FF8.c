typedef struct Vt_82E62FF8 { void *f0; int (*f1)(void *); } Vt_82E62FF8;
typedef struct Obj_82E62FF8 { Vt_82E62FF8 *vt; } Obj_82E62FF8;
extern int memcmp(const void *a, const void *b, unsigned int n);
extern char lbl_82153DCC[];
extern char lbl_8202F1FC[];

int fn_82E62FF8(Obj_82E62FF8 *self, const void *iid, void **out)
{
  int hr;
  if (out == 0) {
    return 0x80070057;
  }
  hr = 0;
  *out = 0;
  if (memcmp(iid, lbl_82153DCC, 16) != 0 && memcmp(iid, lbl_8202F1FC, 16) != 0) {
    hr = 0x80004002;
  } else {
    *out = self;
    self->vt->f1(self);
  }
  return hr;
}
