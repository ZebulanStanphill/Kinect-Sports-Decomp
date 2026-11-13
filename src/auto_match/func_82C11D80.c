extern int fn_82C10B28();


unsigned __int64 fn_82C11D80(int param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  unsigned int * apuStack_30;
  
  uVar1 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_4 == (unsigned int *)0x0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    apuStack_30 = *(unsigned int **)(param_2 + 0x18);
    while (apuStack_30 != (unsigned int *)0x0) {
      if (apuStack_30[0xf] != 0) {
        *(unsigned int *)(apuStack_30[0xf] + 0x38) = 0;
      }
      *(unsigned int *)(param_2 + 0x18) = apuStack_30[0xf];
      (**(int (***)())(param_4[6] + 0x24))(param_4[6],*apuStack_30);
      if (apuStack_30[0xb] != 0) {
        uVar1 = fn_82C10B28(*param_4,0x20,apuStack_30[0xb]);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_82C10B28(*param_4,0x20,apuStack_30 + 0xb);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
      }
      uVar1 = fn_82C10B28(*param_4,0x20,&apuStack_30);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      apuStack_30 = *(unsigned int **)(param_2 + 0x18);
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
    }
    *(unsigned int *)(param_2 + 0x14) = 0;
    *(unsigned int *)(param_2 + 0x20) = 0;
    *(unsigned int *)(param_2 + 0x1c) = 0;
    *(unsigned int *)(param_2 + 0x18) = 0;
  }
  return uVar1;
}

