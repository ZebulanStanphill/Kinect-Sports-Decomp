#define true 1
extern int fn_82BDE2B0();
extern unsigned int iStack0000001c;
extern unsigned int lbl_8329EC80;


void fn_82BDE5A8(__int64 param_1, int param_2, int param_3, __int64 param_4, int param_5, int param_6, int param_7, int *param_8, unsigned __int64 unused_arg_9, unsigned int in_stack_0000005c)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  int *piVar13;
  int iStack0000001c;
  int *in_stack_00000054;

  
  *param_8 = 0;
  lVar8 = (__int64)(param_2 >> 1) + -1;
  iVar12 = 0;
  if (0 < lVar8) {
    do {
      iVar5 = *param_8;
      *param_8 = iVar5 + 1;
      iVar2 = *(int *)(iVar5 * 4 + param_7) * 4;
      *(int *)(iVar2 + param_6) = *(int *)(iVar2 + param_6) + 1;
    } while (iVar5 + 1 < (int)lVar8);
  }
  uVar4 = lbl_8329EC80;
  uVar10 = (unsigned __int64)in_stack_0000005c;
  iStack0000001c = param_2;
  if (0 < (int)param_1) {
    uVar3 = (unsigned __int64)lbl_8329EC80;
    uVar11 = uVar10;
    lVar8 = param_4;
    piVar13 = in_stack_00000054;
    do {
      puVar9 = (unsigned int *)((param_5 - (int)in_stack_00000054) + (int)piVar13);
      iVar5 = *(int *)((int)puVar9 + (param_6 - param_5));
      if ((iVar5 < 7) && (-1 < iVar5)) {
        iVar5 = fn_82BDE2B0(iVar5,*puVar9,lVar8,uVar11);
        *piVar13 = iVar5;
      }
      else {
        *piVar13 = 0;
      }
      param_1 = param_1 + -1;
      lVar8 = (uVar3 & 0x3fffffff) * 4 + lVar8;
      iVar12 = *piVar13 + iVar12;
      uVar11 = uVar11 + 0x10;
      piVar13 = piVar13 + 1;
    } while (param_1 != 0);
  }
  while ((iVar12 < param_3 && (0 < *param_8))) {
    iVar5 = *param_8 + -1;
    *param_8 = iVar5;
    uVar1 = *(unsigned int *)(iVar5 * 4 + param_7);
    iVar5 = uVar1 * 4;
    lVar8 = (unsigned __int64)*(unsigned int *)(iVar5 + param_6) - 1;
    *(int *)(iVar5 + param_6) = (int)lVar8;
    if (lVar8 < 0) {
      *(unsigned int *)(iVar5 + param_6) = 0;
    }
    iVar2 = *(int *)(iVar5 + param_6);
    iVar7 = in_stack_00000054[uVar1];
    if ((iVar2 < 7) && (-1 < iVar2)) {
      iVar5 = fn_82BDE2B0(iVar2,*(unsigned int *)(iVar5 + param_5),
                            ((__int64)(int)uVar4 * (__int64)(int)uVar1 & 0x3fffffffU) * 4 +
                            param_4,((unsigned __int64)uVar1 & 0xfffffff) * 0x10 + uVar10);
      in_stack_00000054[uVar1] = iVar5;
    }
    else {
      in_stack_00000054[uVar1] = 0;
    }
    iVar12 = in_stack_00000054[uVar1] + (iVar12 - iVar7);
  }
  while( true ) {
    if (iVar12 <= param_3) {
      return;
    }
    iVar5 = *param_8 + 1;
    if (iStack0000001c <= iVar5) break;
    uVar1 = *(unsigned int *)(*param_8 * 4 + param_7);
    iVar7 = uVar1 * 4;
    iVar2 = in_stack_00000054[uVar1];
    lVar8 = (unsigned __int64)*(unsigned int *)(iVar7 + param_6) + 1;
    iVar6 = (int)lVar8;
    *(int *)(iVar7 + param_6) = iVar6;
    if ((iVar6 < 7) && (-1 < iVar6)) {
      iVar7 = fn_82BDE2B0(lVar8,*(unsigned int *)(iVar7 + param_5),
                            ((__int64)(int)uVar4 * (__int64)(int)uVar1 & 0x3fffffffU) * 4 +
                            param_4,((unsigned __int64)uVar1 & 0xfffffff) * 0x10 + uVar10);
      in_stack_00000054[uVar1] = iVar7;
    }
    else {
      in_stack_00000054[uVar1] = 0;
    }
    iVar7 = in_stack_00000054[uVar1];
    *param_8 = iVar5;
    iVar12 = iVar7 + (iVar12 - iVar2);
  }
  return;
}

