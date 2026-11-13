extern int fn_8265C990();
extern int fn_82ABDF50();
extern int fn_82ABE8C8();
extern int fn_82AE7308();
extern int fn_82F68CC0();
extern int fn_82F691F0();


__int64 fn_82B84E28(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned int uVar8;
  int iVar9;
  __int64 lVar10;
  
  uVar6 = *(unsigned int *)(param_1 + 0x10);
  lVar7 = (unsigned __int64)uVar6 + 1;
  uVar5 = lVar7 * 0x28;
  iVar9 = param_1 + 0x32c;
  if ((uVar5 & 0xffffffff) < 0x85) {
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3bc);
    if (((*(unsigned int *)(param_1 + 0x3b8) - uVar4) + 0x1000 & 0xffffffff) < (uVar5 & 0xffffffff)) {
      iVar3 = (int)((((uVar5 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
      puVar1 = *(unsigned int **)(iVar3 + iVar9);
      if (puVar1 != (unsigned int *)0x0) {
        *(unsigned int *)(iVar3 + iVar9) = *puVar1;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar1,0,uVar5);
      }
      uVar4 = fn_82ABDF50(iVar9);
    }
    else {
      *(unsigned int *)(param_1 + 0x3bc) = *(unsigned int *)(param_1 + 0x3bc) + (int)uVar5;
    }
  }
  else {
    uVar4 = fn_82ABE8C8(iVar9);
  }
  lVar10 = (unsigned __int64)uVar6 * 0x28 + uVar4;
  fn_82F68CC0(uVar4,*(unsigned int *)(param_1 + 0xc));
  fn_82F68CC0(lVar10,param_2,0x28);
  puVar1 = *(unsigned int **)(param_1 + 0xc);
  uVar6 = *(int *)(param_1 + 0x14) * 0x28;
  if (uVar6 < 0x85) {
    iVar3 = ((uVar6 >> 2) - 1) * 4;
    *puVar1 = *(unsigned int *)(iVar3 + iVar9);
    *(unsigned int **)(iVar3 + iVar9) = puVar1;
  }
  else {
    puVar2 = (unsigned int *)((unsigned int)(puVar1 + -3) & 0xfffffffe);
    *(unsigned int *)(puVar2[1] & 0xfffffffe) = *puVar2;
    *(unsigned int *)(*puVar2 & 0xfffffffe) = puVar2[1];
    fn_8265C990(puVar1 + -3,0x618d0000);
  }
  uVar8 = (unsigned int)lVar7;
  *(unsigned int *)(param_1 + 0x10) = uVar8;
  *(int *)(param_1 + 0xc) = (int)uVar4;
  *(unsigned int *)(param_1 + 0x14) = uVar8;
  iVar9 = (int)lVar10;
  *(unsigned int *)(iVar9 + 0x18) = 0;
  *(unsigned int *)(iVar9 + 4) = (param_3 & 7) << 4 | *(unsigned int *)(iVar9 + 4) & 0xffffff8f;
  if (*(int *)(iVar9 + 0x1c) != 0) {
    *(unsigned int *)(iVar9 + 0x1c) = 0;
    fn_82AE7308(param_1,(iVar9 - *(int *)(param_1 + 0xc)) / 0x28);
  }
  return lVar10;
}

