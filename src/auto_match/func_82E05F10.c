extern int fn_82CE4040();
extern int fn_82CE4118();


int * fn_82E05F10(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_40;
  
  if ((unsigned __int64)*(unsigned int *)(param_2 + 0x18) == (param_3 & 0xffffffff)) {
    if (*(unsigned int *)(param_2 + 0x18) != 0) {
      fn_82CE4040();
    }
    *param_1 = *(int *)(param_2 + 0x18);
  }
  else {
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 0x2c)) {
      iVar2 = 0;
      do {
        fn_82E05F10(&aiStack_40,*(unsigned int *)(iVar2 + *(int *)(param_2 + 0x28)),param_3);
        if (aiStack_40 != 0) {
          fn_82CE4040();
          *param_1 = aiStack_40;
          if (aiStack_40 == 0) {
            return param_1;
          }
          fn_82CE4118();
          return param_1;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
        aiStack_40 = 0;
      } while (iVar1 < *(int *)(param_2 + 0x2c));
    }
    *param_1 = 0;
  }
  return param_1;
}

