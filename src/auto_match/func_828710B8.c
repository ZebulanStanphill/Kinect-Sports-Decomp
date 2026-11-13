extern int fn_822924C0();
extern int fn_828684F8();


unsigned __int64
fn_828710B8(int param_1,unsigned int param_2,unsigned int *param_3,unsigned __int64 param_4,
             unsigned char param_5)

{
  fn_828684F8();
  *(unsigned int *)(param_1 + 0x14) = param_2;
  *(unsigned char *)(param_1 + 0x3c) = 0;
  *(unsigned char *)(param_1 + 0x3d) = 0;
  *(unsigned int *)(param_1 + 0x40) = *param_3;
  fn_822924C0(param_1 + 0x18,param_4);
  *(unsigned char *)(param_1 + 0x44) = param_5;
  fn_828684F8();
  return 0x201d0000;
}

