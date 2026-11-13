extern unsigned int *auStack_30;


unsigned __int64 fn_82E6E238(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 auStack_30;
  
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80004003;
  }
  *param_2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    auStack_30 = 0;
    uVar1 = (**(int (***)())(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),&auStack_30);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (*(unsigned __int64 *)(param_1 + 0x10) <= auStack_30) {
      if (*(unsigned __int64 *)(param_1 + 0x18) < auStack_30 - *(unsigned __int64 *)(param_1 + 0x10)) {
        *param_2 = 0;
        return uVar1;
      }
      *param_2 = 1;
      return uVar1;
    }
  }
  return 0xffffffffc00d36bb;
}

