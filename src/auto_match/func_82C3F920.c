extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820F3FA0;


unsigned __int64 fn_82C3F920(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  unsigned int uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  unsigned int *puVar10;
  
  fVar4 = lbl_82002C5C;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  fVar3 = lbl_82002AE0 / (float)(__int64)*(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x3c) == 1) {
    iVar8 = 0;
    **(int **)(param_1 + 0x19c) = **(int **)(param_1 + 0x154) + -1;
    if (0 < **(int **)(param_1 + 0x154)) {
      puVar10 = &lbl_820F3FA0;
      do {
        if (((__int64)*(float *)(param_1 + 0x18c) & 0xffffffffU) < (unsigned __int64)*puVar10) {
          **(int **)(param_1 + 0x19c) = iVar8;
          break;
        }
        iVar8 = iVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar8 < **(int **)(param_1 + 0x154));
    }
    if (iVar8 == **(int **)(param_1 + 0x154)) {
      *(unsigned int *)(param_1 + 0x28) = 0;
    }
    if (**(int **)(param_1 + 0x19c) < 1) {
      return 0xffffffff80040000;
    }
  }
  else if (0 < *(int *)(param_1 + 0xf4)) {
    piVar5 = (int *)(*(int *)(param_1 + 0x158) + 4);
    iVar8 = 0;
    do {
      uVar2 = 1 << (uVar6 & 0x3f);
      trapWord(6,(unsigned __int64)uVar2,0);
      iVar9 = 1;
      *(int *)(*(int *)(param_1 + 0x19c) + iVar8) = *(int *)(iVar8 + *(int *)(param_1 + 0x154)) + -1
      ;
      uVar1 = *(unsigned int *)(param_1 + 0xfc);
      trapWord(5,(unsigned __int64)uVar2 &
                 ~((((unsigned __int64)uVar1 & 0x7fffffff) << 1 | (unsigned __int64)(uVar1 >> 0x1f)) - 1),0xffff);
      piVar7 = piVar5;
      if (1 < *(int *)(iVar8 + *(int *)(param_1 + 0x154))) {
        do {
          if ((int)((float)(__int64)((int)uVar1 / (int)uVar2) * *(float *)(param_1 + 0x18c) * fVar3
                   + fVar4) < *piVar7) {
            *(int *)(*(int *)(param_1 + 0x19c) + iVar8) = iVar9 + -1;
            break;
          }
          iVar9 = iVar9 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar9 < *(int *)(iVar8 + *(int *)(param_1 + 0x154)));
      }
      if (*(int *)(*(int *)(param_1 + 0x19c) + iVar8) < 1) {
        return 0xffffffff80040000;
      }
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 0x1d;
      iVar8 = iVar8 + 4;
    } while ((int)uVar6 < *(int *)(param_1 + 0xf4));
  }
  *(unsigned int *)(param_1 + 400) = **(unsigned int **)(param_1 + 0x19c);
  return 0;
}

