extern int fn_82AB15D0();
extern int fn_82AB4A28();


void fn_82AB5B20(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6ab4,0xffffffff820d68b0,0x8b4);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a64,0xffffffff820d68b0,0x8b5);
  }
  if (param_1[4] != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a9c,0xffffffff820d68b0,0x8b8);
  }
  if (param_1[5] != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a88,0xffffffff820d68b0,0x8b9);
  }
  *param_1 = (int)param_2;
  uVar1 = fn_82AB4A28(param_2);
  param_1[4] = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820d6a74,0xffffffff820d68b0,0x8c2);
  }
  *(unsigned int *)(param_1[4] + 0xc) = 0;
  *(unsigned int *)(param_1[4] + 8) = param_1[4];
  *(unsigned int *)(param_1[4] + 4) = param_1[4];
  param_1[5] = 0;
  param_1[6] = 1;
  return;
}

