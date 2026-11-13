typedef struct Params_82A4B9B0 {
  int f00;
  int pad04[6];
  int size;
  void *arg;
  int pad24;
  void *cb1;
  void *cb2;
  void *context;
} Params_82A4B9B0;

typedef struct Self_82A4B9B0 {
  int pad0;
  int started;
} Self_82A4B9B0;

extern void fn_82A4AE78(void);
extern void fn_82A4B170(void);
extern int fn_82BFE230(Params_82A4B9B0 *params, Self_82A4B9B0 *self);

int fn_82A4B9B0(Self_82A4B9B0 *self, void *arg)
{
  int hr;
  if (self->started != 0) {
    return 0x8000ffff;
  }
  {
    Params_82A4B9B0 p = {0};
    p.arg = arg;
    p.context = self;
    p.size = sizeof(p);
    p.cb1 = (void *)fn_82A4AE78;
    p.cb2 = (void *)fn_82A4B170;
    hr = fn_82BFE230(&p, self);
    if (hr >= 0) {
      self->started = 1;
    }
    return hr;
  }
}
