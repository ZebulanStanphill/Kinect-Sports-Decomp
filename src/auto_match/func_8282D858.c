extern unsigned fn_828252D0(unsigned);
extern void fn_8282ABD0(int);
extern void fn_8282B1C8(int);
extern void fn_8282B788(int);
extern void fn_828319F8(int, int);
extern void fn_82832C80(int);

void fn_8282D858(int param_1)
{
  unsigned x;

  *(unsigned *)(param_1 + 0x2c) = 0;
  *(unsigned *)(param_1 + 0x34) = 0;
  *(unsigned *)(param_1 + 0x3c) = 0;
  *(unsigned *)(param_1 + 0x44) = 0;
  *(unsigned char *)(param_1 + 1000) = 1;
  if (*(char *)(param_1 + 0x3ef) == '\0') {
    *(unsigned *)(param_1 + 0x30) = 0;
  }
  else {
    fn_8282B788(param_1);
    fn_82832C80(param_1);
  }
  fn_8282B1C8(param_1);
  fn_8282ABD0(param_1);
  fn_828319F8(param_1, 0);
  x = ((*(unsigned *)(param_1 + 0x24) * 0xd + *(unsigned *)(param_1 + 0x3c) + *(unsigned *)(param_1 + 0x2c)) * 5
       + (*(unsigned *)(param_1 + 0x44) + *(unsigned *)(param_1 + 0x34)) * 3
       + *(unsigned *)(param_1 + 0x48) + *(unsigned *)(param_1 + 0x40)
       + *(unsigned *)(param_1 + 0x38) + *(unsigned *)(param_1 + 0x30)
       + *(unsigned *)(param_1 + 0x24) + 0x44) * 4
      + *(unsigned *)(param_1 + 0x28) * 0xe
      + *(unsigned char *)(param_1 + 0x51) * 0x21;
  if (*(char *)(param_1 + 0x3f0) != '\0') {
    x = ((*(unsigned *)(param_1 + 0x3e0) * 2 + *(unsigned char *)(param_1 + 0x51)) * 8) + x;
  }
  *(unsigned *)(param_1 + 0x2e4) = fn_828252D0(x);
  *(unsigned *)(param_1 + 0x2d8) = 0;
}
