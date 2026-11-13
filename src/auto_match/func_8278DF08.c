extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826DAA10();
extern int fn_8278BEE8();
extern int fn_8278DB90();


void fn_8278DF08(int *param_1,unsigned __int64 param_2,int *param_3,unsigned int param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  int aiStack_40 [16];
  
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
    lVar4 = 8;
  }
  else {
    if ((unsigned int)(*piVar8 * 5) <= (unsigned int)((piVar8[1] + 1) * 4)) goto LAB_8278df64;
    lVar4 = ((unsigned __int64)(unsigned int)piVar8[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8278DB90(param_1,param_2,lVar4);
LAB_8278df64:
  piVar8 = (int *)*param_1;
  param_4 = piVar8[1] & param_4;
  *piVar8 = *piVar8 + 1;
  iVar1 = *param_1;
  iVar6 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar6 + 8);
  puVar10 = (unsigned int *)(iVar6 + 8);
  uVar9 = param_4;
  if (iVar2 == -2) {
    iVar1 = *param_3;
    if (iVar1 != 0) {
      fn_8267C4C8(iVar1);
    }
    *puVar10 = 0xffffffff;
    aiStack_40[0] = iVar1;
    fn_826DAA10(iVar6 + 0x10,aiStack_40);
    if (iVar1 != 0) {
      fn_8267C4F0(iVar1);
    }
  }
  else {
    do {
      uVar9 = *(unsigned int *)(iVar1 + 4) & uVar9 + 1;
      iVar7 = uVar9 * 0xc + iVar1;
      piVar8 = (int *)(iVar7 + 8);
    } while (*piVar8 != -2);
    uVar3 = *(unsigned int *)(iVar6 + 0xc);
    if (uVar3 == param_4) {
      if (piVar8 != (int *)0x0) {
        *piVar8 = iVar2;
        *(unsigned int *)(iVar7 + 0xc) = *(unsigned int *)(iVar6 + 0xc);
        fn_826DAA10(iVar7 + 0x10,iVar6 + 0x10);
      }
      iVar1 = *param_3;
      if (iVar1 != 0) {
        fn_8267C4C8(iVar1);
      }
      aiStack_40[0] = iVar1;
      fn_8278BEE8(iVar6 + 0x10,aiStack_40);
      if (iVar1 != 0) {
        fn_8267C4F0(iVar1);
      }
      *puVar10 = uVar9;
    }
    else {
      while (iVar5 = uVar3 * 0xc + iVar1, puVar11 = (unsigned int *)(iVar5 + 8),
            *(unsigned int *)(iVar5 + 8) != param_4) {
        uVar3 = *puVar11;
      }
      if (piVar8 != (int *)0x0) {
        *piVar8 = iVar2;
        *(unsigned int *)(iVar7 + 0xc) = *(unsigned int *)(iVar6 + 0xc);
        fn_826DAA10(iVar7 + 0x10,iVar6 + 0x10);
      }
      *puVar11 = uVar9;
      iVar1 = *param_3;
      if (iVar1 != 0) {
        fn_8267C4C8(iVar1);
      }
      aiStack_40[0] = iVar1;
      fn_8278BEE8(iVar6 + 0x10,aiStack_40);
      if (iVar1 != 0) {
        fn_8267C4F0(iVar1);
      }
      *puVar10 = 0xffffffff;
    }
  }
  *(unsigned int *)(iVar6 + 0xc) = param_4;
  return;
}

