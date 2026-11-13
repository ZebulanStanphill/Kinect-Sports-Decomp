extern int fn_8280B788();
extern int fn_8280B828();
extern int fn_8280B900();
extern int fn_828611B8();
extern int fn_828616F0();


void fn_828618B0(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0x18) & 1) == 0) {
    if ((*(unsigned char *)(param_1 + 0x18) & 2) == 0) {
      fn_8280B828((double)*(float *)(param_1 + 0x114),(double)*(float *)(param_1 + 0x118),
                        (double)*(float *)(param_1 + 0x11c),(double)*(float *)(param_1 + 0x120),
                        param_1 + 0xa0);
      fn_828616F0(param_1 + 0x114,param_1 + 0x60,param_1 + 0x124);
    }
    else {
      fn_8280B900((double)*(float *)(param_1 + 0xfc),(double)*(float *)(param_1 + 0x100),
                   (double)*(float *)(param_1 + 0x104),(double)*(float *)(param_1 + 0x108),
                   (double)*(float *)(param_1 + 0x10c),(double)*(float *)(param_1 + 0x110));
    }
  }
  else {
    fn_8280B788((double)*(float *)(param_1 + 0xfc),(double)*(float *)(param_1 + 0x100),
                 (double)*(float *)(param_1 + 0x104),(double)*(float *)(param_1 + 0x108),
                 (double)*(float *)(param_1 + 0x10c),(double)*(float *)(param_1 + 0x110));
    fn_828611B8(param_1 + 0xfc,param_1 + 0x60,0xfc,0xfc,param_1 + 0x124);
  }
  return;
}

