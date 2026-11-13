extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern int fn_82230040();
extern int fn_824A6728();
extern int fn_8265C9E0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uRam831c54e0;
extern unsigned int uStack_50;


void fn_824A64E0(int param_1,int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar10;
  int *piVar11;
  unsigned __int64 uVar9;
  unsigned int uVar12;
  unsigned int uStack_50;
  unsigned char auStack_4c [4];
  unsigned int auStack_48 [2];
  unsigned __int64 auStack_40 [8];
  
  (**(int (***)())*param_2)(param_2,auStack_4c,&uStack_50);
  (**(int (***)())(*param_2 + 4))(param_2,(unsigned __int64)uStack_50,auStack_48);
  (**(int (***)())(*param_2 + 4))(param_2,(unsigned __int64)uStack_50 - 1,auStack_48);
  uVar7 = (unsigned __int64)uRam831c54e0;
  uVar8 = uVar7;
  if ((*(unsigned int *)(param_1 + 0x48) & 3) == 0) {
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) <=
        ((unsigned __int64)*(unsigned int *)(param_1 + 0x4c) + 4 & 0xffffffff) >> 2) {
      fn_824A6728((int *)(param_1 + 0x3c));
      uVar8 = (unsigned __int64)uRam831c54e0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x48);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x44) << 2;
  }
  uVar12 = iVar4 - 1;
  uVar1 = uVar12 & 0xfffffffc;
  if (*(int *)(uVar1 + *(int *)(param_1 + 0x40)) == 0) {
    iVar4 = fn_8265C9E0(0x10);
    if (iVar4 == 0) {
      auStack_40[0] = 0x82002b0400000000;
                    /* WARNING: Subroutine does not return */
      fn_82230040(auStack_40);
    }
    uVar8 = (unsigned __int64)uRam831c54e0;
    *(int *)(uVar1 + *(int *)(param_1 + 0x40)) = iVar4;
  }
  puVar10 = (unsigned int *)(*(int *)(uVar1 + *(int *)(param_1 + 0x40)) + (uVar12 & 3) * 4);
  if (puVar10 != (unsigned int *)0x0) {
    *puVar10 = auStack_48[0];
  }
  *(unsigned int *)(param_1 + 0x48) = uVar12;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  while (uVar1 = *(unsigned int *)(param_1 + 0x4c), uVar7 < uVar1) {
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x4c) != 0) {
      lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4c) - 1;
      *(int *)(param_1 + 0x4c) = (int)lVar5;
      if (lVar5 == 0) {
        *(unsigned int *)(param_1 + 0x48) = 0;
      }
    }
  }
  if (uVar1 <= uVar8) {
    uVar8 = (unsigned __int64)uVar1;
  }
  lVar5 = 0;
  fVar3 = ltcg_pool_0_0f;
  if (uVar8 != 0) {
    piVar2 = *(int **)(param_1 + 0x3c);
    uVar7 = uVar8;
    do {
      piVar11 = (int *)0x0;
      if ((piVar2 != (int *)0x0) && (puVar10 = (unsigned int *)*piVar2, puVar10 != (unsigned int *)0x0))
      {
        piVar11 = (int *)*puVar10;
      }
      uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x48) + lVar5;
      if (((piVar11 == (int *)0x0) || ((int *)*piVar11 == (int *)0x0)) ||
         (piVar11 = *(int **)*piVar11, piVar11 == (int *)0x0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar11;
      }
      uVar9 = (uVar6 & 0xffffffff) >> 2;
      if (*(unsigned int *)(iVar4 + 8) <= uVar9) {
        uVar9 = uVar9 - *(unsigned int *)(iVar4 + 8);
      }
      lVar5 = lVar5 + 1;
      fVar3 = *(float *)(*(int *)((int)((uVar9 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) +
                        (int)((uVar6 & 3) << 2)) + fVar3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(float *)(param_1 + 0x54) = fVar3 / (float)uVar8;
  return;
}

