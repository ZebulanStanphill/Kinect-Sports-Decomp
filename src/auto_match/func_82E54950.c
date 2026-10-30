typedef struct Vt_82E54950 { void *f0; int (*f1)(void *); } Vt_82E54950;
typedef struct Obj_82E54950 { Vt_82E54950 *vt; } Obj_82E54950;
extern int memcmp(const void *a, const void *b, unsigned int n);
extern char lbl_8215467C[];
extern char lbl_8202F1FC[];

int fn_82E54950(Obj_82E54950 *self, const void *iid, void **out)
{
  int hr;
  if (out == 0) {
    return 0x80070057;
  }
  hr = 0;
  *out = 0;
  if (memcmp(iid, lbl_8215467C, 16) != 0 && memcmp(iid, lbl_8202F1FC, 16) != 0) {
    hr = 0x80004002;
  } else {
    *out = self;
    self->vt->f1(self);
  }
  return hr;
}
