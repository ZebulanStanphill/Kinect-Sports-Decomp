typedef unsigned char bool;
#define true 1


void fn_826182E0(double param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  bool bVar6;
  int in_r0;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  iVar1 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 0x14) != *(int *)(iVar1 + 400)) {
    for (piVar2 = *(int **)(param_2 + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      *(unsigned int *)(*piVar2 + 400) = *(unsigned int *)(*(int *)(param_2 + 4) + 400);
    }
    iVar1 = *(int *)(param_2 + 4);
    *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(iVar1 + 400);
  }
  if (((*(char *)(iVar1 + 0xe2) != '\0') || (*(char *)(iVar1 + 0xe0) != '\0')) &&
     (*(int *)(iVar1 + 400) != 0)) {
    bVar6 = true;
    for (piVar2 = *(int **)(param_2 + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      iVar1 = *piVar2;
      if (*(char *)(iVar1 + 0x1a6) == '\0') {
        bVar6 = (bool)(*(int *)(iVar1 + 400) == 0 & bVar6);
      }
      *(unsigned int *)(iVar1 + 0xfc) = *(unsigned int *)(*(int *)(param_2 + 4) + 0xfc);
      *(unsigned int *)(*piVar2 + 0xe4) = *(unsigned int *)(*(int *)(param_2 + 4) + 0xe4);
      iVar1 = *piVar2;
      iVar3 = *(int *)(param_2 + 4);
      puVar4 = (unsigned int *)(in_r0 + iVar3 + 0x60 & 0xfffffff0);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar5 = (unsigned int *)(in_r0 + iVar1 + 0x60 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
      puVar5[3] = uVar9;
      puVar4 = (unsigned int *)(iVar3 + 0x70U & 0xfffffff0);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar5 = (unsigned int *)(iVar1 + 0x70U & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
      puVar5[3] = uVar9;
      puVar4 = (unsigned int *)(iVar3 + 0x80U & 0xfffffff0);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar5 = (unsigned int *)(iVar1 + 0x80U & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
      puVar5[3] = uVar9;
      puVar4 = (unsigned int *)(iVar3 + 0x90U & 0xfffffff0);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar5 = (unsigned int *)(iVar1 + 0x90U & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
      puVar5[3] = uVar9;
      *(unsigned char *)(*piVar2 + 0xe3) = *(unsigned char *)(*(int *)(param_2 + 4) + 0xe3);
    }
    if (bVar6) {
      *(unsigned char *)(*(int *)(param_2 + 4) + 0x1a6) = 1;
    }
  }
  *(float *)(param_2 + 0x10) = (float)param_1;
  return;
}

