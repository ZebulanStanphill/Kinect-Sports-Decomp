extern int fn_8265C9E0();
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_82467200(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int iVar7;
  int *piVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int *puVar11;
  
  piVar8 = (int *)(param_1 + 0x200);
  puVar11 = (unsigned int *)0x0;
  uVar9 = 0;
  do {
    if (*piVar8 == *(int *)(param_1 + 0x8c)) {
      puVar11 = (unsigned int *)((uVar9 + 0xd) * 0x28 + param_1);
      break;
    }
    uVar9 = uVar9 + 1;
    piVar8 = piVar8 + 10;
  } while (uVar9 < 0xc);
  iVar10 = *(int *)(param_1 + 4);
  if (10 < iVar10) {
    iVar10 = 0xb;
  }
  iVar10 = (iVar10 + 0x41) * 0x10;
  iVar7 = iVar10 + param_1;
  uVar5 = *(unsigned int *)(iVar10 + param_1);
  uVar1 = *(unsigned int *)(iVar7 + 4);
  uVar2 = *(unsigned int *)(iVar7 + 8);
  uVar3 = *(unsigned int *)(iVar7 + 0xc);
  puVar6 = (unsigned int *)fn_8265C9E0(0x4c);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    uVar9 = *(unsigned int *)(param_1 + 500);
    puVar6[1] = *(unsigned int *)(param_1 + 0x84);
    uVar4 = *(unsigned int *)(param_1 + 0x88);
    puVar6[6] = ltcg_pool_0_0f;
    puVar6[2] = uVar4;
    puVar6[3] = uVar9;
    puVar6[7] = *(unsigned int *)(param_1 + 0x8c);
    puVar6[8] = *(unsigned int *)(param_1 + 0x90);
    puVar6[0xd] = *(unsigned int *)(param_1 + 0x9c);
    uVar4 = *(unsigned int *)(param_1 + 0xa0);
    puVar6[0xf] = uVar5;
    puVar6[0x10] = uVar1;
    puVar6[0xe] = uVar4;
    puVar6[0x11] = uVar2;
    puVar6[0x12] = uVar3;
    *puVar6 = *(unsigned int *)(param_1 + 0x80);
    puVar6[10] = *(unsigned int *)(param_1 + 0x94);
    puVar6[0xb] = *(unsigned int *)(param_1 + 0x98);
    puVar6[0xc] = *(unsigned int *)(param_1 + 0xa8);
    puVar6[9] = *puVar11;
    if (*(int *)(param_1 + 0x84) == 0) {
      *(unsigned int *)((int)(((unsigned __int64)uVar9 + 4 & 0xffffffff) << 2) + (int)puVar6) = 0;
      *(unsigned int *)((int)((5 - (unsigned __int64)uVar9 & 0xffffffff) << 2) + (int)puVar6) = 1;
    }
    else {
      puVar6[4] = 0;
      puVar6[5] = 1;
    }
  }
  return puVar6;
}

