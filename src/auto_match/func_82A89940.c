extern unsigned char fn_82A88CC8(int *a, int b, int c, int d, int e);
extern unsigned char fn_82A892D0(int *a, int b, int c, int d, int e);

unsigned char fn_82A89940(int a, int b, int c, unsigned int kind)
{
  int ctx;

  if (kind == 2) {
    ctx = 0;
    return fn_82A892D0(&ctx, a, b, c, 0x24);
  }
  else if (kind == 1) {
    ctx = 0;
    return fn_82A88CC8(&ctx, a, b, c, 0x20);
  }
  return 0;
}
