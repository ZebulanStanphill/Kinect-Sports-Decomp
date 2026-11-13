extern int fn_82ABE9F0();
extern int fn_82AE5AC8();
extern int fn_82F691F0();


int fn_82ADE7E8(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  puVar1 = *(unsigned int **)(param_1 + 0x2c0);
  if (puVar1 != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x2c0) = *puVar1;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(puVar1,0,200);
  }
  iVar3 = fn_82ABE9F0(param_1,((unsigned __int64)*(unsigned int *)(param_1 + 0x2a0) & 0x7ffffff) * 0x20 +
                                    0xd0,0x34);
  *(unsigned int *)(iVar3 + 200) = *(unsigned int *)(param_1 + 0x2b8);
  *(int *)(param_1 + 0x2b8) = iVar3;
  iVar7 = iVar3 + 0xd0;
  piVar8 = (int *)(iVar3 + 0x20);
  piVar6 = (int *)(iVar3 + 0x10);
  *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
  lVar5 = 4;
  do {
    *piVar6 = iVar7;
    iVar2 = *(int *)(param_1 + 0x2a0);
    *piVar8 = param_1;
    iVar7 = iVar2 * 8 + iVar7;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8[4] = 0;
    piVar8[5] = 0;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[8] = 0;
    piVar8[9] = 0;
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x318);
    if (uVar4 == 0) {
      uVar4 = 0x20;
    }
    if (uVar4 < 0x40) {
      fn_82AE5AC8(piVar8,uVar4,0x40 - uVar4);
    }
    lVar5 = lVar5 + -1;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 10;
  } while (lVar5 != 0);
  return iVar3;
}

