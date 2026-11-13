void fn_822C9EF8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  
  if (param_2 != param_1) {
    uVar1 = *param_2;
    if (uVar1 == 0) {
      uVar1 = *param_1;
      if (uVar1 != 0) {
        if ((uVar1 & 1) == 0) {
          if (*(int (***)())(uVar1 & 0xfffffffe) != (int (**)())0x0) {
            (**(int (***)())(uVar1 & 0xfffffffe))(param_1 + 2,param_1 + 2,2);
          }
        }
        *param_1 = 0;
      }
    }
    else {
      *param_1 = uVar1;
      if ((uVar1 & 1) == 0) {
        (**(int (***)())(uVar1 & 0xfffffffe))(param_2 + 2,param_1 + 2,1);
      }
      else {
        *(unsigned __int64 *)(param_1 + 2) = *(unsigned __int64 *)(param_2 + 2);
        *(unsigned __int64 *)(param_1 + 4) = *(unsigned __int64 *)(param_2 + 4);
        *(unsigned __int64 *)(param_1 + 6) = *(unsigned __int64 *)(param_2 + 6);
      }
      *param_2 = 0;
    }
  }
  return;
}

