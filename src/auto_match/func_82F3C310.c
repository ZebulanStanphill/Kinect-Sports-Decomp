unsigned __int64 fn_82F3C310(int param_1,unsigned __int64 *param_2,__int64 *param_3)

{
  unsigned __int64 uVar1;
  int aiStack_30 [2];
  __int64 alStack_28;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else {
    alStack_28 = 0;
    aiStack_30[0] = 0;
    uVar1 = (**(int (***)())(**(int **)(param_1 + 0x54) + 0xc))
                      (*(int **)(param_1 + 0x54),0xffffffff8202e618,aiStack_30);
    if (-1 < (int)uVar1) {
      if (aiStack_30[0] == 0) {
        alStack_28 = *(__int64 *)(param_1 + 0x20);
      }
      else {
        uVar1 = (**(int (***)())(**(int **)(param_1 + 0x54) + 0x2c))
                          (*(int **)(param_1 + 0x54),&alStack_28);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        alStack_28 = alStack_28 + 0x1e;
      }
      if (param_2 != (unsigned __int64 *)0x0) {
        *param_2 = 0x1e;
      }
      if (param_3 != (__int64 *)0x0) {
        *param_3 = alStack_28;
      }
      *(__int64 *)(param_1 + 0x20) = alStack_28;
    }
  }
  return uVar1;
}

