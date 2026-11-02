typedef struct { void **vt; } Iface;
typedef struct { int pad[0x174]; Iface *dev; } Ctx;
typedef struct { int a; Ctx *ctx; int b; } Self;
extern char lbl_82196F10[];
extern int fn_82B7C800();
extern int fn_82B9AAA0();
extern void fn_82BA4998();
extern void fn_82AB15D0();
typedef int (*Fn)(Iface *);

void fn_82BA6C68(int *self)
{
  char *ctx = *(char **)(self + 3);
  Iface *d = *(Iface **)(ctx + 0x5d0);
  int r = fn_82B9AAA0(self[4], 0, ((Fn)d->vt[7])(d), (void *)fn_82B7C800, ctx);
  switch (r) {
  case 1: fn_82BA4998(self); break;
  case 3: fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", lbl_82196F10, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\cfg.cpp", 0x5b9); break;
  }
}
