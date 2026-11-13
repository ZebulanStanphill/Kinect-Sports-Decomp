typedef struct Vt_82C046A8 {
  void *f0[3];
  void (*fc)(int *);
  void (*f10)(void);
  void (*f14)(int *);
  void *f18[24];
  void (*f78)(int *);
} Vt_82C046A8;

int fn_82C046A8(int *self, unsigned __int64 delta)
{
  Vt_82C046A8 *vt = *(Vt_82C046A8 **)self;
  vt->fc(self);
  self[0x4f] = self[0x4f] + 1;
  { unsigned __int64 *tp = (unsigned __int64 *)(self + 0x4c); *tp = (unsigned)self[0x53] + delta; }
  if ((unsigned)self[0x4f] % 5 == 0) {
    (*(Vt_82C046A8 **)self)->f78(self);
  }
  (*(Vt_82C046A8 **)self)->f14(self);
  return 0;
}
