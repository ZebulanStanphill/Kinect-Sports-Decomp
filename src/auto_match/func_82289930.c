extern void fn_82289408(int, int, int, int);
extern int fn_82484768(int);
extern void fn_8234F338(int, int, int *, int *);
extern void fn_8228A728(char *, int, int, int, int *, int *);
extern void fn_8229E090(int, int, int);

void fn_82289930(unsigned int param_1, int param_2)
{
  int v;
  int a;
  int b;
  char buf[1008];

  switch (param_1) {
  case 1:
    v = 1;
    break;
  case 0:
    fn_82289408(param_2, 2, 0, 0);
    { int r = fn_82484768(*(int *)(param_2 + 0x11f0)); fn_8234F338(*(int *)(param_2 + 0x11f0) + 0x234, r, &b, &a); }
    fn_8228A728(buf, param_2, 2, fn_82484768(*(int *)(param_2 + 0x11f0)), &b, &a);
    v = 7;
    break;
  default:
    return;
  }
  *(int *)(param_2 + 0x604) = v;
  if (*(unsigned *)(param_2 + 0x11f8) != 0) {
    fn_8229E090(*(int *)(param_2 + 0x11f8), 0, 1);
    *(int *)(param_2 + 0x11f8) = 0;
  }
}
