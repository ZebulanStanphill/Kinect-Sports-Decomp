extern unsigned char fn_828647C0(void *, void *);
extern void fn_828785B0(void *, void *, void *);

int fn_82877DD8(char *param_1, void *param_2)
{
  char buf[16];
  char *end = *(char **)(param_1 + 0x14);
  char *p;
  for (p = *(char **)(param_1 + 0x10); p != end; p += 0x2c) {
    if (fn_828647C0(p + 4, param_2) != 0) break;
  }
  if (p != *(char **)(param_1 + 0x14)) {
    fn_828785B0(buf, param_1 + 0x10, p);
    param_1[0xc] = 1;
    return 0x20340000;
  }
  return 0xA0340000;
}
