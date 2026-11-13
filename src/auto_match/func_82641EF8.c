extern int fn_82641518();


void fn_82641EF8(int param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
  param_4 = param_4 + -4;
  do {
    lVar6 = LZCOUNT(param_2);
    param_2 = param_2 << lVar6;
    param_4 = lVar6 * 0x40 + param_4;
    lVar7 = LZCOUNT(~param_2);
    lVar8 = lVar7 * 0x10;
    param_3 = lVar6 * 0x10 + param_3;
    if (((lVar8 + 3) * 4 + uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x34)) {
      uVar4 = uVar5 & 0xf;
      if (uVar4 == 4) {
        uVar5 = uVar5 + 4;
        *(unsigned int *)uVar5 = 0x80000000;
      }
      else {
        iVar2 = (int)uVar5;
        if (uVar4 == 0) {
          *(unsigned int *)(iVar2 + 4) = 0x80000000;
          uVar5 = uVar5 + 8;
          *(unsigned int *)uVar5 = 0x80000000;
        }
        else if (uVar4 == 0xc) {
          *(unsigned int *)(iVar2 + 4) = 0x80000000;
          *(unsigned int *)(iVar2 + 8) = 0x80000000;
          uVar5 = uVar5 + 0xc;
          *(unsigned int *)uVar5 = 0x80000000;
        }
      }
      uVar5 = uVar5 + 4;
      *(unsigned int *)uVar5 = (unsigned int)((lVar8 - 1U & 0xffffffff) << 0x10) | (unsigned int)param_3;
      do {
        iVar2 = (int)param_4;
        puVar1 = (unsigned int *)(iVar2 + 4U & 0xfffffff0);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        lVar7 = lVar7 + -1;
        puVar3 = (unsigned int *)(iVar2 + 0x14U & 0xfffffff0);
        uVar20 = *puVar3;
        uVar21 = puVar3[1];
        uVar22 = puVar3[2];
        uVar23 = puVar3[3];
        param_2 = param_2 << 1;
        puVar3 = (unsigned int *)(iVar2 + 0x24U & 0xfffffff0);
        uVar16 = *puVar3;
        uVar17 = puVar3[1];
        uVar18 = puVar3[2];
        uVar19 = puVar3[3];
        puVar3 = (unsigned int *)(iVar2 + 0x34U & 0xfffffff0);
        uVar12 = *puVar3;
        uVar13 = puVar3[1];
        uVar14 = puVar3[2];
        uVar15 = puVar3[3];
        param_4 = param_4 + 0x40;
        iVar2 = (int)uVar5;
        puVar3 = (unsigned int *)(iVar2 + 4U & 0xfffffff0);
        *puVar3 = *puVar1;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        puVar1 = (unsigned int *)(iVar2 + 0x14U & 0xfffffff0);
        *puVar1 = uVar20;
        puVar1[1] = uVar21;
        puVar1[2] = uVar22;
        puVar1[3] = uVar23;
        puVar1 = (unsigned int *)(iVar2 + 0x24U & 0xfffffff0);
        *puVar1 = uVar16;
        puVar1[1] = uVar17;
        puVar1[2] = uVar18;
        puVar1[3] = uVar19;
        puVar1 = (unsigned int *)(iVar2 + 0x34U & 0xfffffff0);
        *puVar1 = uVar12;
        puVar1[1] = uVar13;
        puVar1[2] = uVar14;
        puVar1[3] = uVar15;
        uVar5 = uVar5 + 0x40;
      } while (lVar7 != 0);
    }
    else {
      uVar5 = fn_82641518(param_1,uVar5,param_3,param_4,lVar8,0x10);
      param_4 = lVar7 * 0x40 + param_4;
      param_2 = param_2 << lVar7;
    }
    param_3 = lVar8 + param_3;
  } while (param_2 != 0);
  *(int *)(param_1 + 0x30) = (int)uVar5;
  return;
}

