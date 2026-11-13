extern int fn_82ABDF50();
extern int fn_82ABE8C8();
extern int fn_82F691F0();


unsigned __int64 fn_82ABE940(unsigned int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  iVar1 = *(int *)(param_1 & 0xfffff000);
  if ((param_2 & 0xffffffff) < 0x85) {
    uVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x90);
    if (((*(unsigned int *)(iVar1 + 0x8c) - uVar4) + 0x1000 & 0xffffffff) < (param_2 & 0xffffffff)) {
      iVar3 = (int)((((param_2 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
      puVar2 = *(unsigned int **)(iVar3 + iVar1);
      if (puVar2 != (unsigned int *)0x0) {
        *(unsigned int *)(iVar3 + iVar1) = *puVar2;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar2,0,param_2);
      }
      uVar4 = fn_82ABDF50(iVar1);
    }
    else {
      *(unsigned int *)(iVar1 + 0x90) = *(unsigned int *)(iVar1 + 0x90) + (int)param_2;
    }
  }
  else {
    uVar4 = fn_82ABE8C8(iVar1);
  }
  return uVar4;
}

