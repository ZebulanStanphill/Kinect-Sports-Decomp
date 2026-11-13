extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820959F8;


unsigned __int64 fn_82A7CF10(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  unsigned int uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  unsigned int *puVar8;
  
  fVar2 = lbl_82002C5C;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  fVar1 = lbl_82002AE0 / (float)(__int64)*(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x3c) == 1) {
    iVar6 = 0;
    **(int **)(param_1 + 0x19c) = **(int **)(param_1 + 0x154) + -1;
    if (0 < **(int **)(param_1 + 0x154)) {
      puVar8 = &lbl_820959F8;
      do {
        if (((__int64)*(float *)(param_1 + 0x18c) & 0xffffffffU) < (unsigned __int64)*puVar8) {
          **(int **)(param_1 + 0x19c) = iVar6;
          break;
        }
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar6 < **(int **)(param_1 + 0x154));
    }
    if (iVar6 == **(int **)(param_1 + 0x154)) {
      *(unsigned int *)(param_1 + 0x28) = 0;
    }
    if (**(int **)(param_1 + 0x19c) < 1) {
      return 0xffffffff80040000;
    }
  }
  else if (0 < *(int *)(param_1 + 0xf4)) {
    piVar3 = (int *)(*(int *)(param_1 + 0x158) + 4);
    iVar6 = 0;
    do {
      iVar7 = 1;
      *(int *)(*(int *)(param_1 + 0x19c) + iVar6) = *(int *)(iVar6 + *(int *)(param_1 + 0x154)) + -1
      ;
      piVar5 = piVar3;
      if (1 < *(int *)(iVar6 + *(int *)(param_1 + 0x154))) {
        do {
          if ((int)((float)(__int64)(*(int *)(param_1 + 0xfc) / (1 << (uVar4 & 0x3f))) *
                    *(float *)(param_1 + 0x18c) * fVar1 + fVar2) < *piVar5) {
            *(int *)(*(int *)(param_1 + 0x19c) + iVar6) = iVar7 + -1;
            break;
          }
          iVar7 = iVar7 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar7 < *(int *)(iVar6 + *(int *)(param_1 + 0x154)));
      }
      if (*(int *)(*(int *)(param_1 + 0x19c) + iVar6) < 1) {
        return 0xffffffff80040000;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 0x1d;
      iVar6 = iVar6 + 4;
    } while ((int)uVar4 < *(int *)(param_1 + 0xf4));
  }
  *(unsigned int *)(param_1 + 400) = **(unsigned int **)(param_1 + 0x19c);
  return 0;
}

