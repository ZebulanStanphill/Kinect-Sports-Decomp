typedef struct { unsigned short hi; unsigned short lo[2]; } Pos_82E70910;
typedef struct { unsigned short id; } Hdr_82E70910;
typedef struct Obj_82E70910 Obj_82E70910;
typedef struct {
  void *f0[5];
  int (*f14)(Obj_82E70910 *);
  void *f18[4];
  int (*f28)(Obj_82E70910 *, Hdr_82E70910 *, unsigned __int64 *);
  int (*f2c)(Obj_82E70910 *, unsigned __int64);
  int (*f30)(Obj_82E70910 *, void *, void *, Hdr_82E70910 *, int *);
} Vt_82E70910;
struct Obj_82E70910 {
  Vt_82E70910 *vt;
  int pad4;
  unsigned short id;
  char pada[0x38 - 0xa];
  int f38;
  char pad3c[0x48 - 0x3c];
  unsigned __int64 f48;
  unsigned __int64 f50;
  char pad58[0x68 - 0x58];
  unsigned __int64 f68;
};

int fn_82E70910(Obj_82E70910 *self, void *a, void *b, Hdr_82E70910 *hdr, Pos_82E70910 *pos)
{
  int hr;
  unsigned __int64 n;
  unsigned __int64 t;
  int done;
  if (hdr == 0 || pos == 0) {
    return 0x80004003;
  }
  if (self->id != hdr->id) {
    return 0xC00D36B3;
  }
  n = self->f50;
  if (n > 0 && n - self->f48 > 0) {
    t = 0;
    hr = self->vt->f28(self, hdr, &t);
    if (hr < 0) return hr;
    hr = self->vt->f2c(self, t);
    if (hr < 0) return hr;
    if (self->f38 != 0) {
      hr = self->vt->f14(self);
      if (hr < 0) return hr;
    }
  }
  done = 0;
  hr = self->vt->f30(self, a, b, hdr, &done);
  if (hr >= 0 && done != 0) {
    self->f68 = ((unsigned __int64)pos->hi << 32) + *(unsigned int *)pos->lo;
    self->f50++;
  }
  return hr;
}
