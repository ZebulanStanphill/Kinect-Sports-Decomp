extern int fn_82ABE5F8();


void fn_82AF04D0(int param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 4);
  while (iVar1 != 0) {
    if (*(unsigned int *)(iVar1 + 0x10) == 0) {
      *piVar2 = *(int *)(iVar1 + 8);
      fn_82ABE5F8(param_2,iVar1,0x14,0x1a);
    }
    else {
      piVar2 = (int *)(iVar1 + 8);
    }
    iVar1 = *piVar2;
  }
  return;
}

