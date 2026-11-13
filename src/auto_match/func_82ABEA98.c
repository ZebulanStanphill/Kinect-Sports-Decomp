extern int fn_82ABDF50();
extern int fn_82ABE8C8();
extern int fn_82F691F0();


unsigned __int64 fn_82ABEA98(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  
  iVar5 = param_1 + 0x3cc;
  uVar2 = param_2 + 3U & 0xfffffffc;
  if (uVar2 < 0x85) {
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x45c);
    if (((*(unsigned int *)(param_1 + 0x458) - uVar4) + 0x1000 & 0xffffffff) < uVar2) {
      iVar3 = (int)(((uVar2 >> 2) - 1 & 0xffffffff) << 2);
      puVar1 = *(unsigned int **)(iVar3 + iVar5);
      if (puVar1 != (unsigned int *)0x0) {
        *(unsigned int *)(iVar3 + iVar5) = *puVar1;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar1,0,uVar2);
      }
      uVar4 = fn_82ABDF50(iVar5);
    }
    else {
      *(unsigned int *)(param_1 + 0x45c) = *(unsigned int *)(param_1 + 0x45c) + (int)uVar2;
    }
  }
  else {
    uVar4 = fn_82ABE8C8(iVar5);
  }
  return uVar4;
}

