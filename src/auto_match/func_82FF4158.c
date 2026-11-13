void fn_82FF4158(int param_1,int (*param_2)(),unsigned int param_3,int param_4)

{
  unsigned int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x7c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    if ((param_3 == 0) ||
       (param_3 == *(unsigned int *)(iVar1 + 0x70))) {
      (*param_2)(iVar1,param_3,param_4);
    }
  }
  return;
}

