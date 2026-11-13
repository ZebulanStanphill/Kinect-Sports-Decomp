extern unsigned int *auStack_30;


unsigned __int64 fn_82E6F788(int param_1,unsigned __int64 param_2,__int64 *param_3)

{
  unsigned __int64 uVar1;
  unsigned int auStack_30 [2];
  __int64 alStack_28;
  
  if (param_3 == (__int64 *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    *param_3 = 0;
    if (param_2 < 0x100000000) {
      alStack_28 = 0;
      uVar1 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x44))
                        (*(int **)(param_1 + 0x58),param_2 & 0xffffffff,&alStack_28,0);
      if (-1 < (int)uVar1) {
        auStack_30[0] = 0;
        uVar1 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x40))
                          (*(int **)(param_1 + 0x58),auStack_30);
        if (-1 < (int)uVar1) {
          *param_3 = *(__int64 *)(param_1 + 0x30) + (unsigned __int64)auStack_30[0] + alStack_28;
        }
      }
    }
    else {
      uVar1 = 0xffffffffc00d3a9d;
    }
  }
  return uVar1;
}

