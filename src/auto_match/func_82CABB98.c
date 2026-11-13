extern int fn_82C53970();


void fn_82CABB98(unsigned int *param_1)

{
  unsigned int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    if (*(unsigned int *)(iVar1 + 0xc) != 0) {
      fn_82C53970(*(int *)(iVar1 + 0xc));
      *(unsigned int *)(iVar1 + 0xc) = 0;
    }
    if (*param_1 != 0) {
      fn_82C53970(*param_1);
      *param_1 = 0;
    }
  }
  return;
}

