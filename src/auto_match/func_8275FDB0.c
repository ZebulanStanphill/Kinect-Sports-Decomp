typedef unsigned char bool;
extern int fn_8275E498();

int fn_8275FDB0(int *param_1)
{
  unsigned char buf[32];
  bool b;
  for (;;) {
    unsigned char s = *(unsigned char *)(*param_1 + 0x20);
    b = (s == 1) || !(s & 0x80);
    if (b) return param_1[1];
    fn_8275E498(param_1, buf);
  }
}
