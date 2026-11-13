extern int fn_82F6B2A8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8208EDA8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82C2E310(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar7 = 0;
  dVar9 = (double)(lbl_82002AE0 / (float)(__int64)*(int *)(param_1 + 0x50));
  if (0 < *(int *)(param_1 + 0xf4)) {
    iVar6 = 0;
    dVar10 = (double)lbl_82002C5C;
    dVar11 = (double)lbl_8208EDA8;
    do {
      uVar2 = *(unsigned int *)(param_1 + 0xfc);
      uVar3 = 1 << (uVar7 & 0x3f);
      uVar1 = (int)uVar2 / (int)uVar3;
      trapWord(6,(unsigned __int64)uVar3,0);
      trapWord(5,(unsigned __int64)uVar3 &
                 ~((((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1),0xffff);
      dVar8 = (double)fn_82F6B2A8((double)(float)((double)(float)((double)(__int64)(int)uVar1 *
                                                                  dVar9) * dVar11 + dVar10));
      iVar5 = (int)dVar8;
      if (iVar5 < 4) {
        iVar5 = 4;
      }
      iVar4 = ((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
      uVar7 = uVar7 + 1;
      *(int *)(iVar6 + *(int *)(param_1 + 0x160)) = iVar5;
      iVar6 = iVar6 + 4;
    } while ((int)uVar7 < *(int *)(param_1 + 0xf4));
  }
  *(unsigned int *)(param_1 + 0x138) = **(unsigned int **)(param_1 + 0x160);
  return;
}

