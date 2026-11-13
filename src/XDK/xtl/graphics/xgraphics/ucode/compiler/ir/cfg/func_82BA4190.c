typedef struct { void **vt; } Iface;
extern char lbl_82196F10[];
extern int fn_82B7C800();
extern int fn_82B9A6C0();
extern int fn_82B9A7F0();
extern void fn_82BA10A0();
extern void fn_82BA11F0();
extern void fn_82AB15D0();
typedef int (*Fn)(Iface *);

void fn_82BA4190(int *self)
{
  char *ctx = *(char **)(self + 3);
  Iface *d = *(Iface **)(ctx + 0x5d0);
  int r = fn_82B9A6C0(self[4], 0, ((Fn)d->vt[7])(d), (void *)fn_82B7C800, ctx);
  switch (r) {
  case 1:
    ctx = *(char **)(self + 3);
    d = *(Iface **)(ctx + 0x5d0);
    if (fn_82B9A7F0(self[4], 0, ((Fn)d->vt[7])(d), (void *)fn_82B7C800, ctx) == 1) {
      fn_82BA10A0(self);
    } else {
      fn_82BA11F0(self);
    }
    break;
  case 3: fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", lbl_82196F10, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\cfg.cpp", 0x3f5); break;
  }
}
