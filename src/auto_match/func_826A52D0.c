extern int fn_826A4FF8();
extern int fn_826AB4D0();


void fn_826A52D0(int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  int *piVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  
  piVar6 = (int *)*param_1;
  if (piVar6 == (int *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((unsigned int)(*piVar6 * 5) <= (unsigned int)((piVar6[1] + 1) * 4)) goto LAB_826a532c;
    lVar5 = ((unsigned __int64)(unsigned int)piVar6[1] + 1 & 0x7fffffff) << 1;
  }
  fn_826A4FF8(param_1,param_2,lVar5);
LAB_826a532c:
  piVar6 = (int *)*param_1;
  param_4 = piVar6[1] & param_4;
  *piVar6 = *piVar6 + 1;
  iVar1 = *param_1;
  iVar8 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar8 + 8);
  puVar13 = (unsigned int *)(iVar8 + 8);
  uVar12 = param_4;
  if (iVar2 == -2) {
    *puVar13 = 0xffffffff;
    *(unsigned int *)(iVar8 + 0xc) = *param_3;
    iVar1 = param_3[1];
    if (iVar1 != 0) {
      *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
    }
    *(unsigned int *)(iVar8 + 0x10) = param_3[1];
  }
  else {
    do {
      uVar3 = *(unsigned int *)(iVar1 + 4);
      uVar12 = uVar12 + 1 & uVar3;
      iVar9 = uVar12 * 0xc + iVar1;
      piVar6 = (int *)(iVar9 + 8);
    } while (*(int *)(iVar9 + 8) != -2);
    puVar4 = (unsigned int *)(iVar8 + 0xc);
    iVar10 = 4;
    lVar5 = 4;
    uVar7 = 0x1505;
    do {
      iVar10 = iVar10 + -1;
      uVar7 = (unsigned int)*(unsigned char *)((int)puVar4 + iVar10) + uVar7 * 0x1003f;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if ((uVar7 & uVar3) == param_4) {
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar2;
        *(unsigned int *)(iVar9 + 0xc) = *puVar4;
        iVar1 = *(int *)(iVar8 + 0x10);
        if (iVar1 != 0) {
          *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
        }
        *(unsigned int *)(iVar9 + 0x10) = *(unsigned int *)(iVar8 + 0x10);
      }
      fn_826AB4D0(puVar4,param_3);
      *puVar13 = uVar12;
    }
    else {
      iVar10 = 4;
      uVar7 = 0x1505;
      lVar5 = 4;
      do {
        iVar10 = iVar10 + -1;
        uVar7 = (unsigned int)*(unsigned char *)((int)puVar4 + iVar10) + uVar7 * 0x1003f;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar7 = uVar7 & uVar3;
      while (puVar11 = (unsigned int *)(uVar7 * 0xc + iVar1 + 8), *puVar11 != param_4) {
        uVar7 = *puVar11;
      }
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar2;
        *(unsigned int *)(iVar9 + 0xc) = *puVar4;
        iVar1 = *(int *)(iVar8 + 0x10);
        if (iVar1 != 0) {
          *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
        }
        *(unsigned int *)(iVar9 + 0x10) = *(unsigned int *)(iVar8 + 0x10);
      }
      *puVar11 = uVar12;
      fn_826AB4D0(puVar4,param_3);
      *puVar13 = 0xffffffff;
    }
  }
  return;
}

