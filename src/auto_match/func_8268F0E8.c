extern int fn_8268E5C8();
extern int fn_8268F070();


int fn_8268F0E8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_8268F070(param_1 + 0xc);
  if (iVar1 != 0) {
    fn_8268E5C8(param_1 + 0x10,iVar1);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *(int *)(iVar1 + 0x24);
  }
  return iVar1;
}

