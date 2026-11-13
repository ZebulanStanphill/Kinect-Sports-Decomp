extern int fn_825B51E8();


void fn_825F1108(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  int in_r0;
  int iVar5;
  int *piVar6;
  __int64 lVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xbc) + 0x200);
  puVar2 = (unsigned int *)(param_1 + 0x80U & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  iVar8 = (uVar1 + (((int)uVar1 >> 2) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 3) != 0) & 0x3fffffff) *
                   -4) * 0xe0 + param_1;
  puVar3 = (unsigned int *)(in_r0 + iVar8 + 0xd0 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  puVar2 = (unsigned int *)(param_1 + 0x90U & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  puVar3 = (unsigned int *)(iVar8 + 0xe0U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  puVar2 = (unsigned int *)(param_1 + 0xa0U & 0xfffffff0);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  *(unsigned int *)(iVar8 + 0x108) = uVar1;
  puVar2 = (unsigned int *)(iVar8 + 0xf0U & 0xfffffff0);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  iVar5 = *(int *)(param_1 + 0xbc);
  uVar1 = *(unsigned int *)(iVar5 + 0x200);
  lVar7 = (unsigned __int64)uVar1 +
          ((__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0) &
          0x7fffffff) * -2;
  iVar4 = (int)((lVar7 + 0xdaU & 0x3fffffff) << 2);
  *(int *)((int)((((unsigned __int64)*(unsigned int *)(iVar4 + iVar5) + 0x6e & 0x7fffffff) * 2 + lVar7 & 0xffffffff
                 ) << 2) + iVar5) = iVar8 + 0xd0;
  *(int *)(iVar4 + iVar5) = *(int *)(iVar4 + iVar5) + 1;
  if (*(unsigned int *)(param_1 + 0x48) != 0) {
    lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x48) - 1;
    *(int *)(param_1 + 0x48) = (int)lVar7;
    if (lVar7 == 0) {
      iVar5 = (**(int (***)())(**(int **)(param_1 + 0x40) + 0x1c))();
      uVar9 = *(unsigned int *)(*(int *)(iVar5 + 0x10) + 0x48);
      piVar6 = (int *)(**(int (***)())(**(int **)(param_1 + 0x40) + 0x3c))(*(int **)(param_1 + 0x40));
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x44) + 4) * 4 + *(int *)(*piVar6 + 0x98)) != 0) {
        fn_825B51E8(uVar9,*(unsigned int *)(*(int *)(iVar5 + 0x10) + 0x50));
        *(unsigned int *)
         (*(int *)(*(int *)(param_1 + 0x44) + 4) * 0x20 + *(int *)(*(int *)(iVar5 + 0x10) + 0x50) +
         0x14) = 0;
      }
    }
  }
  return;
}

