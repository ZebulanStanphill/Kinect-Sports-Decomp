typedef struct Params_82A48BD8 {
  int f00;
  int pad04[6];
  int size;
  void *arg;
  int pad24;
  void *cb1;
  void *cb2;
  void *context;
} Params_82A48BD8;

typedef struct Self_82A48BD8 {
  int pad0;
  int started;
} Self_82A48BD8;

extern void fn_82A47B10(void);
extern void fn_82A4B170(void);
extern int fn_82BFE230(Params_82A48BD8 *params, Self_82A48BD8 *self);

int fn_82A48BD8(Self_82A48BD8 *self, void *arg)
{
  int hr;
  if (self->started != 0) {
    return 0x8000ffff;
  }
  {
    Params_82A48BD8 p = {0};
    p.arg = arg;
    p.context = self;
    p.size = sizeof(p);
    p.cb1 = (void *)fn_82A47B10;
    p.cb2 = (void *)fn_82A4B170;
    hr = fn_82BFE230(&p, self);
    if (hr >= 0) {
      self->started = 1;
    }
    return hr;
  }
}
