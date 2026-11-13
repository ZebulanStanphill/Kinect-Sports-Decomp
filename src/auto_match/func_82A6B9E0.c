extern int fn_82F6B2A8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8208EDA8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A6B9E0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar5 = 0;
  dVar7 = (double)(lbl_82002AE0 / (float)(__int64)*(int *)(param_1 + 0x50));
  if (0 < *(int *)(param_1 + 0xf4)) {
    iVar4 = 0;
    dVar8 = (double)lbl_82002C5C;
    dVar9 = (double)lbl_8208EDA8;
    do {
      uVar1 = *(int *)(param_1 + 0xfc) / (1 << (uVar5 & 0x3f));
      dVar6 = (double)fn_82F6B2A8((double)(float)((double)(float)((double)(__int64)(int)uVar1 *
                                                                  dVar7) * dVar9 + dVar8));
      iVar3 = (int)dVar6;
      if (iVar3 < 4) {
        iVar3 = 4;
      }
      iVar2 = ((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
      uVar5 = uVar5 + 1;
      *(int *)(*(int *)(param_1 + 0x160) + iVar4) = iVar3;
      iVar4 = iVar4 + 4;
    } while ((int)uVar5 < *(int *)(param_1 + 0xf4));
  }
  *(unsigned int *)(param_1 + 0x138) = **(unsigned int **)(param_1 + 0x160);
  return;
}

