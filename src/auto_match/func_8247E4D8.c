extern int fn_8247E5B0();
extern int fn_8289D8D0();
extern int fn_82F68CC0();


unsigned __int64 fn_8247E4D8(unsigned __int64 param_1,int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  if (*(int **)(param_2 + 0x20) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(int (***)())(**(int **)(param_2 + 0x20) + 0x10))();
  }
  if (iVar2 == 0) {
    if (*(int **)(param_2 + 0x20) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(int (***)())(**(int **)(param_2 + 0x20) + 0x14))();
    }
    if (iVar2 == 0) {
      iVar2 = param_2 + 0xc;
      if (4 < *(unsigned int *)(param_2 + 0x10)) {
        iVar2 = *(int *)(param_2 + 0xc);
      }
      fn_82F68CC0(param_1,iVar2,0x428);
      return param_1;
    }
  }
  uVar1 = fn_8289D8D0(*(unsigned int *)(param_2 + 0x28));
  fn_8247E5B0(param_1,param_2,uVar1);
  return param_1;
}

