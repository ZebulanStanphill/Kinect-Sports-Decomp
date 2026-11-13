extern int fn_8267C498();
extern int fn_8278BF48();
extern int fn_8278DD08();


void fn_8278E0F0(int *param_1,unsigned __int64 param_2,int *param_3,unsigned int param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  int aiStack_40;
  
  piVar5 = (int *)*param_1;
  if (piVar5 == (int *)0x0) {
    lVar4 = 8;
  }
  else {
    if ((unsigned int)(*piVar5 * 5) <= (unsigned int)((piVar5[1] + 1) * 4)) goto LAB_8278e14c;
    lVar4 = ((unsigned __int64)(unsigned int)piVar5[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8278DD08(param_1,param_2,lVar4);
LAB_8278e14c:
  piVar5 = (int *)*param_1;
  param_4 = piVar5[1] & param_4;
  *piVar5 = *piVar5 + 1;
  iVar1 = *param_1;
  iVar6 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar6 + 8);
  puVar10 = (unsigned int *)(iVar6 + 8);
  uVar9 = param_4;
  if (iVar2 == -2) {
    iVar1 = *param_3;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    *puVar10 = 0xffffffff;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    *(int *)(iVar6 + 0x10) = iVar1;
    if (iVar1 != 0) {
      fn_8267C498();
    }
  }
  else {
    do {
      uVar9 = *(unsigned int *)(iVar1 + 4) & uVar9 + 1;
      iVar7 = uVar9 * 0xc + iVar1;
      piVar5 = (int *)(iVar7 + 8);
    } while (*(int *)(iVar7 + 8) != -2);
    uVar3 = *(unsigned int *)(iVar6 + 0xc);
    if (uVar3 == param_4) {
      if (piVar5 != (int *)0x0) {
        *piVar5 = iVar2;
        *(unsigned int *)(iVar7 + 0xc) = *(unsigned int *)(iVar6 + 0xc);
        iVar1 = *(int *)(iVar6 + 0x10);
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
        *(unsigned int *)(iVar7 + 0x10) = *(unsigned int *)(iVar6 + 0x10);
      }
      iVar1 = *param_3;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
      aiStack_40 = iVar1;
      fn_8278BF48(iVar6 + 0x10,&aiStack_40);
      if (iVar1 != 0) {
        fn_8267C498(iVar1);
      }
      *puVar10 = uVar9;
    }
    else {
      while (puVar8 = (unsigned int *)(uVar3 * 0xc + iVar1 + 8), *puVar8 != param_4) {
        uVar3 = *puVar8;
      }
      if (piVar5 != (int *)0x0) {
        *piVar5 = iVar2;
        *(unsigned int *)(iVar7 + 0xc) = *(unsigned int *)(iVar6 + 0xc);
        iVar1 = *(int *)(iVar6 + 0x10);
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
        *(unsigned int *)(iVar7 + 0x10) = *(unsigned int *)(iVar6 + 0x10);
      }
      *puVar8 = uVar9;
      iVar1 = *param_3;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
      aiStack_40 = iVar1;
      fn_8278BF48(iVar6 + 0x10,&aiStack_40);
      if (iVar1 != 0) {
        fn_8267C498(iVar1);
      }
      *puVar10 = 0xffffffff;
    }
  }
  *(unsigned int *)(iVar6 + 0xc) = param_4;
  return;
}

