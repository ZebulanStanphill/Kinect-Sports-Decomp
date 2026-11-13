extern int fn_8265C940();
extern int fn_8265C990();


unsigned __int64 fn_82F2CC40(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  unsigned __int64 uVar1;
  
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  if (param_5 < 0) {
    param_5 = -param_5;
  }
  *(int *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x5c) = param_3;
  *(int *)(param_1 + 0x60) = param_4;
  *(int *)(param_1 + 100) = param_5;
  *(unsigned int *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x80),0x248c8000);
    *(unsigned int *)(param_1 + 0x80) = 0;
  }
  if (param_2 <= param_4) {
    param_2 = param_4;
  }
  if (param_3 <= param_5) {
    param_3 = param_5;
  }
  uVar1 = fn_8265C940(((__int64)(param_3 + 2) * (__int64)(param_2 + 2) & 0x3fffffffU) << 2,
                            0x248c8000);
  *(int *)(param_1 + 0x80) = (int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
    uVar1 = 1;
    *(unsigned int *)(param_1 + 0x54) = 1;
  }
  return uVar1;
}

