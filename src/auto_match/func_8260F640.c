extern int fn_82F68B7C();
extern unsigned int lbl_82192734;


void fn_8260F640(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  
  if (param_5 == 0) {
    *(unsigned int *)(param_1 + 0x11c) = 1;
    *(unsigned int *)(param_1 + 0x120) = 0;
    uVar1 = *(unsigned int *)(param_3 + 8);
  }
  else {
    if (param_5 != 1) {
      return;
    }
    uVar1 = lbl_82192734;
    if (*(int *)(param_1 + 0x11c) != 0) {
      fn_82F68B7C((double)(*(float *)(param_3 + 4) / *(float *)(param_1 + 0x94)));
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x124) = uVar1;
  return;
}

