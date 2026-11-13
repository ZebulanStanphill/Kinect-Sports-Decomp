extern int fn_82591730();


unsigned __int64 fn_82618408(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned __int64 in_r0;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  for (iVar1 = *(int *)(param_1 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    (**(int (***)())(**(int **)(iVar1 + 4) + 8))(*(int **)(iVar1 + 4),param_2,param_3);
  }
  if ((int)param_2 == 5) {
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0x10);
    *(unsigned int *)(*(int *)(param_1 + 4) + 400) = 1;
  }
  else {
    if ((int)param_2 != 0x18) {
      uVar7 = fn_82591730(param_1,param_2,param_3);
      return uVar7;
    }
    for (piVar2 = *(int **)(param_1 + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      iVar1 = *(int *)(param_1 + 4);
      iVar3 = *piVar2;
      iVar5 = (int)in_r0;
      puVar4 = (unsigned int *)(iVar5 + iVar1 + 0x10 & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar5 + iVar3 + 0x10 & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar1 + 0x20U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar3 + 0x20U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar1 + 0x30U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar3 + 0x30U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar1 + 0x40U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar3 + 0x40U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar1 + 0x50U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar3 + 0x50U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar5 + iVar1 + 0x60 & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar5 + iVar3 + 0x60 & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar1 + 0x70U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar3 + 0x70U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar1 + 0x80U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar3 + 0x80U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar1 + 0x90U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar3 + 0x90U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar1 + 0xa0U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar3 + 0xa0U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar1 + 0xb0U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar3 + 0xb0U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar1 + 0xc0U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar3 + 0xc0U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      puVar4 = (unsigned int *)(iVar1 + 0xd0U & 0xfffffff0);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar6 = (unsigned int *)(iVar3 + 0xd0U & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar8;
      puVar6[2] = uVar9;
      puVar6[3] = uVar10;
      *(unsigned char *)(iVar3 + 0xe0) = *(unsigned char *)(iVar1 + 0xe0);
      *(unsigned char *)(iVar3 + 0xe1) = *(unsigned char *)(iVar1 + 0xe1);
      *(unsigned char *)(iVar3 + 0xe2) = *(unsigned char *)(iVar1 + 0xe2);
      *(unsigned char *)(iVar3 + 0xe3) = *(unsigned char *)(iVar1 + 0xe3);
      *(unsigned int *)(iVar3 + 0xe4) = *(unsigned int *)(iVar1 + 0xe4);
      *(unsigned int *)(iVar3 + 0xe8) = *(unsigned int *)(iVar1 + 0xe8);
      *(unsigned int *)(iVar3 + 0xec) = *(unsigned int *)(iVar1 + 0xec);
      *(unsigned int *)(iVar3 + 0xf0) = *(unsigned int *)(iVar1 + 0xf0);
      *(unsigned int *)(iVar3 + 0xf4) = *(unsigned int *)(iVar1 + 0xf4);
      *(unsigned int *)(iVar3 + 0xf8) = *(unsigned int *)(iVar1 + 0xf8);
      *(unsigned int *)(iVar3 + 0xfc) = *(unsigned int *)(iVar1 + 0xfc);
      *(unsigned int *)(iVar3 + 0x100) = *(unsigned int *)(iVar1 + 0x100);
    }
  }
  return 0;
}

