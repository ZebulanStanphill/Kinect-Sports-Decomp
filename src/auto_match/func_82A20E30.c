extern unsigned int *__imp__XexExecutableModuleHandle;
typedef struct { char pad[0x2c]; unsigned short count; short pad2; short *names; } XexMod_82A20E30;
extern XexMod_82A20E30 **__imp_XexExecutableModuleHandle;
extern int fn_82A20D78();

int fn_82A20E30(int param_1)
{
  char buf[512];
  XexMod_82A20E30 *h;
  unsigned n;
  unsigned i, nx;
  if (fn_82A20D78("default.xex", 0xc, param_1) != 0) return 1;
  h = *__imp_XexExecutableModuleHandle;
  n = h->count;
  if (n != 0) {
    i = 0;
    do {
      nx = (i + 1) & 0xffff;
      buf[i] = (char)h->names[i];
      n = h->count;
      i = nx;
    } while (nx < n);
  }
  return fn_82A20D78(buf, n, param_1) != 0;
}
