extern int fn_8265CA20();
extern int fn_8288BD00();
extern int fn_82F622A8();
extern int fn_82F63CA0();


void fn_828C49F8(int param_1,unsigned int param_2)

{
  int iVar2;
  __int64 lVar1;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  uVar9 = *(unsigned int *)(param_1 + 8);
  if (param_2 <= 0xfffffff - uVar9) {
    uVar8 = uVar9 >> 1;
    if (uVar8 < 8) {
      uVar8 = 8;
    }
    if ((param_2 < uVar8) && (uVar9 <= 0xfffffff - uVar8)) {
      param_2 = uVar8;
    }
    uVar8 = *(unsigned int *)(param_1 + 0xc) >> 2;
    iVar2 = fn_8288BD00(param_1 + 0x15,uVar9 + param_2);
    iVar3 = uVar8 * 4;
    iVar4 = iVar3 + *(int *)(param_1 + 4);
    lVar6 = ((unsigned __int64)(unsigned int)((*(int *)(param_1 + 8) * 4 - iVar4) + *(int *)(param_1 + 4) >> 2) &
            0x3fffffff) * 4;
    lVar1 = fn_82F63CA0(iVar3 + iVar2,iVar4,lVar6);
    lVar1 = lVar1 + lVar6;
    if (param_2 < uVar8) {
      fn_82F63CA0(lVar1,*(unsigned int *)(param_1 + 4),((int)(param_2 * 4) >> 2) << 2);
      iVar4 = param_2 * 4 + *(int *)(param_1 + 4);
      iVar7 = ((iVar3 - iVar4) + *(int *)(param_1 + 4) >> 2) * 4;
      iVar3 = fn_82F63CA0(iVar2,iVar4,iVar7);
      if (param_2 != 0) {
        puVar5 = (unsigned int *)(iVar3 + iVar7 + -4);
        uVar9 = param_2;
        do {
          puVar5 = puVar5 + 1;
          *puVar5 = 0;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else {
      iVar4 = param_2 - uVar8;
      iVar7 = (iVar3 >> 2) * 4;
      iVar3 = fn_82F63CA0(lVar1,*(unsigned int *)(param_1 + 4),iVar7);
      if (iVar4 != 0) {
        puVar5 = (unsigned int *)(iVar3 + iVar7 + -4);
        do {
          puVar5 = puVar5 + 1;
          *puVar5 = 0;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (uVar8 != 0) {
        puVar5 = (unsigned int *)(iVar2 + -4);
        do {
          puVar5 = puVar5 + 1;
          *puVar5 = 0;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    if (*(int *)(param_1 + 4) != 0) {
      fn_8265CA20();
    }
    *(int *)(param_1 + 4) = iVar2;
    *(unsigned int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff821a8018);
}

