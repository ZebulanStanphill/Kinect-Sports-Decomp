extern int fn_82CFBC28();
extern int fn_82E06158();


unsigned __int64 fn_82E06458(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  if (((param_2 & 0xffffffff) == 0) || (*(int *)(param_1 + 0x14) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x14);
    if (((uVar1 & 0xfffffffe) == 0) || (iVar3 = fn_82CFBC28(uVar1 & 0xfffffffe), iVar3 != 0)) {
      uVar2 = fn_82E06158(*(unsigned int *)(param_1 + 0x14),param_2);
    }
    else {
      uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
    }
  }
  return uVar2;
}

