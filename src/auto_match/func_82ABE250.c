extern int fn_82ABDF50();
extern int fn_82F691F0();


unsigned __int64 fn_82ABE250(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x3cc;
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x45c);
  if (((*(unsigned int *)(param_1 + 0x458) - uVar3) + 0x1000 & 0xffffffff) < (param_2 & 0xffffffff)) {
    iVar2 = (int)((((param_2 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
    puVar1 = *(unsigned int **)(iVar2 + iVar4);
    if (puVar1 != (unsigned int *)0x0) {
      *(unsigned int *)(iVar2 + iVar4) = *puVar1;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(puVar1,0,param_2);
    }
    uVar3 = fn_82ABDF50(iVar4);
  }
  else {
    *(unsigned int *)(param_1 + 0x45c) = *(unsigned int *)(param_1 + 0x45c) + (int)param_2;
  }
  return uVar3;
}

