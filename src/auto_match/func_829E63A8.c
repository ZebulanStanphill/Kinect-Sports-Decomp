extern void fn_829E7640(void);
extern void *fn_829E77C0(void *);
extern const char *fn_829D36C8(void);
extern int fn_829E7918(void *, char *);
extern void *fn_82A28568(void *, int, int);
extern int fn_82F664B0(char *, int, const char *);
extern int fn_82F69A80(char *, int, const char *);
extern char *lbl_832179FC;

int fn_829E63A8(void **out)
{
  char buf[0x104];
  void *a;
  void *o;
  fn_829E7640();
  a = fn_82A28568(*(void **)(lbl_832179FC + 0x8f4cc), 0, 0x4c);
  if (a != 0) {
    o = fn_829E77C0(a);
  } else {
    o = 0;
  }
  *out = o;
  if (o == 0) {
    return 0x8007000e;
  }
  {
    int hr;
    if (fn_82F664B0(buf, 0x104, fn_829D36C8()) != 0) {
      hr = 0x80004005;
    } else if (fn_82F69A80(buf, 0x104, "NuiIdentityNN.bin.be") != 0) {
      hr = 0x80004005;
    } else {
      hr = fn_829E7918(*out, buf);
      hr = hr < 0 ? 0x80004005 : 0;
    }
    return hr;
  }
}
