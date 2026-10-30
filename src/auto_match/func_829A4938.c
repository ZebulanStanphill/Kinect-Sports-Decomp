extern int fn_829548C8(int);
extern int fn_8295D0A8(int, int);
extern int fn_829A44B8(int, unsigned int, unsigned int);

int fn_829A4938(int param_1)
{
  int r;
  unsigned int a = *(unsigned int *)(param_1 + 0x230);
  unsigned int b;

  if (a != 0 && (b = *(unsigned int *)(param_1 + 0x224)) != 0) {
    if (*(unsigned short *)(param_1 + 0xca) != 0x104) {
      return 0x80004005;
    }
    fn_829A44B8(param_1, a, b);
    r = fn_8295D0A8(param_1, 0xfffd);
    if (r < 0) {
      return r;
    }
    r = fn_829548C8(param_1);
    if (r < 0) {
      return r;
    }
  }
  return fn_829A44B8(param_1, *(unsigned int *)(param_1 + 0x234), *(unsigned int *)(param_1 + 0x228));
}
