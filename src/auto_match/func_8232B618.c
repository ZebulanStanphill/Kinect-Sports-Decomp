extern int fn_82575DF0();
extern int fn_8265CA20();


void fn_8232B618(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if (*(unsigned int *)(iVar1 + 0xf8) != 0) {
      fn_82575DF0(*(unsigned int *)(*(int *)(iVar1 + 0xfc) + 0x93c),*(unsigned int *)(iVar1 + 0xf8));
      *(unsigned int *)(iVar1 + 0xf8) = 0;
    }
    fn_8265CA20(iVar1);
  }
  return;
}

