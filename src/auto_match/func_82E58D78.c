typedef struct Vt_82E58D78 { void *f0; int (*f1)(void *); } Vt_82E58D78;
typedef struct Obj_82E58D78 { Vt_82E58D78 *vt; } Obj_82E58D78;
extern int memcmp(const void *a, const void *b, unsigned int n);
extern char lbl_82154D30[];
extern char lbl_82089D90[];

int fn_82E58D78(Obj_82E58D78 *self, const void *iid, void **out)
{
  int hr;
  if (out == 0) {
    return 0x80070057;
  }
  hr = 0;
  *out = 0;
  if (memcmp(iid, lbl_82154D30, 16) != 0 && memcmp(iid, lbl_82089D90, 16) != 0) {
    hr = 0x80004002;
  } else {
    *out = self;
    self->vt->f1(self);
  }
  return hr;
}
