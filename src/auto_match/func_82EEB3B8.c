void fn_82EEB3B8(unsigned __int64 param_1,unsigned int *param_2,int *param_3)

{
  unsigned int iVar1;
  
  if (*param_3 == *param_2) {
    *param_2 = *(int *)(*param_3 + 0xc);
  }
  iVar1 = *(int *)(*param_3 + 0x10);
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(*param_3 + 0xc);
  }
  iVar1 = *(int *)(*param_3 + 0xc);
  if (iVar1 == 0) {
    return;
  }
  *(unsigned int *)(iVar1 + 0x10) = *(unsigned int *)(*param_3 + 0x10);
  return;
}

