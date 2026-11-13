typedef unsigned char bool;


void fn_82ED6B90(int param_1,unsigned short *param_2,short *param_3,unsigned __int64 param_4,int param_5,
                  int *param_6,int *param_7,int param_8)

{
  bool bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  short sVar9;
  int iVar7;
  int iVar8;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned short *puVar12;
  unsigned short *puVar13;
  __int64 lVar14;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  unsigned short *puStack_40;
  
  puVar13 = puStack_40;
  puVar12 = puStack_40;
  if (5 < (param_4 - 1 & 0xffffffff)) goto LAB_82ed6d30;
  bVar1 = (int)(param_4 - 1) != 0;
  if (param_4 == 2 && bVar1) {
    puVar12 = param_2 + -0x80;
    if (in_stack_00000064 == 0) {
      puStack_40 = *(unsigned short **)(param_1 + 0x4480);
      puVar13 = puStack_40;
    }
    else {
      puStack_40 = param_2 + (0x80 - *(int *)(param_1 + 0x4bfc));
      puVar13 = param_2 + (0x100 - *(int *)(param_1 + 0x4bfc));
    }
    goto LAB_82ed6d30;
  }
  if (param_4 == 3 && bVar1) {
    puVar13 = param_2 + -0x100;
    if (in_stack_0000005c != 0) {
      puStack_40 = param_2 + -0x380;
      puVar13 = param_2 + -0x100;
      puVar12 = param_2 + -0x280;
      goto LAB_82ed6d30;
    }
    puVar12 = *(unsigned short **)(param_1 + 0x4480);
LAB_82ed6c1c:
    puStack_40 = *(unsigned short **)(param_1 + 0x4480);
  }
  else {
    if (param_4 == 4 && bVar1) {
      puStack_40 = param_2 + -0x180;
      puVar13 = param_2 + -0x100;
      puVar12 = param_2 + -0x80;
      goto LAB_82ed6d30;
    }
    if (param_4 == 5 && bVar1) {
      puVar12 = param_2 + -0x300;
      if (in_stack_0000005c == 0) {
        puVar12 = *(unsigned short **)(param_1 + 0x4484);
      }
      if (in_stack_00000064 == 0) {
LAB_82ed6d00:
        puVar13 = *(unsigned short **)(param_1 + 0x4484);
      }
      else {
        puVar13 = param_2 + -(*(unsigned int *)(param_1 + 0x4bfc) & 0x7fffffff);
      }
    }
    else {
      if (!bVar1) {
        puVar12 = param_2 + -0x280;
        if (in_stack_0000005c == 0) {
          puVar12 = *(unsigned short **)(param_1 + 0x4480);
        }
        if (in_stack_00000064 == 0) {
          puVar13 = *(unsigned short **)(param_1 + 0x4480);
        }
        else {
          puVar13 = param_2 + (0x100 - *(int *)(param_1 + 0x4bfc));
        }
        if (in_stack_0000006c != 0) {
          puStack_40 = param_2 + -(*(int *)(param_1 + 0x4bfc) + 0x180U & 0x7fffffff);
          goto LAB_82ed6d30;
        }
        goto LAB_82ed6c1c;
      }
      puVar12 = param_2 + -0x300;
      if (in_stack_0000005c == 0) {
        puVar12 = *(unsigned short **)(param_1 + 0x4484);
      }
      if (in_stack_00000064 == 0) goto LAB_82ed6d00;
      puVar13 = param_2 + -(*(unsigned int *)(param_1 + 0x4bfc) & 0x7fffffff);
    }
    if (in_stack_0000006c == 0) {
      puStack_40 = *(unsigned short **)(param_1 + 0x4484);
    }
    else {
      puStack_40 = param_2 + -(*(int *)(param_1 + 0x4bfc) + 0x300U & 0x7fffffff);
    }
  }
LAB_82ed6d30:
  uVar10 = (int)(short)*puStack_40 - (int)(short)*puVar13;
  uVar6 = (int)(short)*puStack_40 - (int)(short)*puVar12;
  uVar3 = (int)uVar10 >> 0x1f;
  uVar4 = (int)uVar6 >> 0x1f;
  uVar11 = 1;
  iVar5 = (int)((param_4 & 0x3fffffff) << 2);
  if ((int)((uVar6 ^ uVar4) - uVar4) < (int)((uVar10 ^ uVar3) - uVar3)) {
    *(unsigned int *)((int)((param_4 + 7 & 0xffffffff) << 2) + param_5) = 1;
    lVar14 = 7;
    iVar8 = (int)param_3 - (int)param_2;
    *param_3 = *param_2 - *puVar13;
    *(unsigned int *)(iVar5 + param_8) = 0;
    *(unsigned int *)(iVar5 + in_stack_00000054) = 0;
    do {
      param_2 = param_2 + 1;
      uVar4 = uVar11 >> 2;
      uVar11 = uVar11 + 1;
      sVar9 = *param_2 - *(short *)((int)puVar13 + (int)param_2 + (iVar8 - (int)param_3));
      *(short *)(iVar8 + (int)param_2) = sVar9;
      *(unsigned int *)(iVar5 + param_8) =
           (int)sVar9 + (-(unsigned int)(sVar9 == 0) - (sVar9 + -1)) + *(int *)(iVar5 + param_8);
      uVar3 = (int)*(short *)(iVar8 + (int)param_2) >> 0x1f;
      iVar7 = ((int)*(short *)(iVar8 + (int)param_2) ^ uVar3) - uVar3;
      *param_7 = (iVar7 >> 1) * uVar4 + *param_7 + iVar7;
      uVar2 = *param_2;
      *(unsigned int *)(iVar5 + in_stack_00000054) =
           (unsigned int)uVar2 + (-(unsigned int)(uVar2 == 0) - (uVar2 - 1)) + *(int *)(iVar5 + in_stack_00000054);
      uVar3 = (int)(short)*param_2 >> 0x1f;
      iVar7 = ((int)(short)*param_2 ^ uVar3) - uVar3;
      *param_6 = (iVar7 >> 1) * uVar4 + iVar7 + *param_6;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    *(unsigned int *)((int)((param_4 + 7 & 0xffffffff) << 2) + param_5) = 0;
    lVar14 = 7;
    *param_3 = *param_2 - *puVar12;
    *(unsigned int *)(iVar5 + param_8) = 0;
    iVar8 = (int)puVar12 - (int)param_2;
    *(unsigned int *)(iVar5 + in_stack_00000054) = 0;
    do {
      param_2 = param_2 + 8;
      uVar4 = uVar11 >> 2;
      uVar11 = uVar11 + 1;
      sVar9 = *param_2 - *(short *)(iVar8 + (int)param_2);
      param_3[1] = sVar9;
      *(unsigned int *)(iVar5 + param_8) =
           (int)sVar9 + (-(unsigned int)(sVar9 == 0) - (sVar9 + -1)) + *(int *)(iVar5 + param_8);
      param_3 = param_3 + 1;
      uVar3 = (int)*param_3 >> 0x1f;
      iVar7 = ((int)*param_3 ^ uVar3) - uVar3;
      *param_7 = (iVar7 >> 1) * uVar4 + iVar7 + *param_7;
      uVar2 = *param_2;
      *(unsigned int *)(iVar5 + in_stack_00000054) =
           (unsigned int)uVar2 + (-(unsigned int)(uVar2 == 0) - (uVar2 - 1)) + *(int *)(iVar5 + in_stack_00000054);
      uVar3 = (int)(short)*param_2 >> 0x1f;
      iVar7 = ((int)(short)*param_2 ^ uVar3) - uVar3;
      *param_6 = (iVar7 >> 1) * uVar4 + iVar7 + *param_6;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

