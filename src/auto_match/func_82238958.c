extern int fn_82381C38(void *p, int a);
extern int fn_82381D68(void *p, int a, int b);
extern void *fn_8265C9E0(int n);
extern int fn_8289D6D0(void *p, int n);
extern char lbl_82197100[];
extern char lbl_821B3AE4[];

void **fn_82238958(int param_1)
{
  void **p;

  p = fn_8265C9E0(0x338);
  if (p != 0) {
    fn_82381C38(p, param_1);
    p[0] = lbl_821B3AE4;
    fn_8289D6D0(p + 0x3c, 4);
    p[0x3c] = lbl_82197100;
    fn_8289D6D0(p + 0x51, 4);
    p[0x51] = lbl_82197100;
    fn_8289D6D0(p + 0x66, 4);
    p[0x66] = lbl_82197100;
    fn_82381D68(p + 0x7c, param_1, 0);
    return p;
  }
  return 0;
}
