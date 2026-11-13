extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_8202EE28;
extern unsigned int lbl_820DBF48;
extern unsigned int lbl_820DBF4C;


unsigned int fn_82B8FDD0(int param_1,int param_2)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  fVar3 = lbl_8202EE28;
  iVar7 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x14) == 0) {
    if ((iVar7 == 1) || (iVar7 == 4)) {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar7 = 0;
        do {
          iVar6 = param_2 + 8 + iVar7;
          uVar4 = uVar4 + 1;
          fVar2 = SQRT(*(float *)(iVar6 + -8)) * fVar3;
          uVar1 = (unsigned int)fVar2;
          iVar5 = uVar1 * 4;
          *(float *)(*(int *)(param_1 + 0x58) + iVar7) =
               (*(float *)(&lbl_820DBF4C + iVar5) - *(float *)(&lbl_820DBF48 + iVar5)) *
               (fVar2 - (float)uVar1) + *(float *)(&lbl_820DBF48 + iVar5);
          fVar2 = SQRT(*(float *)(iVar6 + -4)) * fVar3;
          uVar1 = (unsigned int)fVar2;
          iVar5 = uVar1 * 4;
          *(float *)(*(int *)(param_1 + 0x58) + iVar7 + 4) =
               (*(float *)(&lbl_820DBF4C + iVar5) - *(float *)(&lbl_820DBF48 + iVar5)) *
               (fVar2 - (float)uVar1) + *(float *)(&lbl_820DBF48 + iVar5);
          fVar2 = SQRT(*(float *)(param_2 + 8 + iVar7)) * fVar3;
          uVar1 = (unsigned int)fVar2;
          iVar5 = uVar1 * 4;
          *(float *)(*(int *)(param_1 + 0x58) + iVar7 + 8) =
               (*(float *)(&lbl_820DBF4C + iVar5) - *(float *)(&lbl_820DBF48 + iVar5)) *
               (fVar2 - (float)uVar1) + *(float *)(&lbl_820DBF48 + iVar5);
          *(unsigned int *)(*(int *)(param_1 + 0x58) + iVar7 + 0xc) = *(unsigned int *)(iVar6 + 4);
          iVar7 = iVar7 + 0x10;
        } while (uVar4 < *(unsigned int *)(param_1 + 0x68));
      }
    }
    else {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar7 = 0;
        do {
          iVar5 = param_2 + 8 + iVar7;
          uVar4 = uVar4 + 1;
          *(unsigned int *)(*(int *)(param_1 + 0x58) + iVar7) = *(unsigned int *)(iVar5 + -8);
          *(unsigned int *)(*(int *)(param_1 + 0x58) + iVar7 + 4) = *(unsigned int *)(iVar5 + -4);
          *(unsigned int *)(*(int *)(param_1 + 0x58) + iVar7 + 8) =
               *(unsigned int *)(param_2 + 8 + iVar7);
          fVar2 = SQRT(*(float *)(iVar5 + 4)) * fVar3;
          uVar1 = (unsigned int)fVar2;
          iVar5 = uVar1 * 4;
          iVar6 = *(int *)(param_1 + 0x58) + iVar7;
          iVar7 = iVar7 + 0x10;
          *(float *)(iVar6 + 0xc) =
               (*(float *)(&lbl_820DBF4C + iVar5) - *(float *)(&lbl_820DBF48 + iVar5)) *
               (fVar2 - (float)uVar1) + *(float *)(&lbl_820DBF48 + iVar5);
        } while (uVar4 < *(unsigned int *)(param_1 + 0x68));
      }
    }
  }
  else if ((iVar7 == 1) || (iVar7 == 4)) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      iVar7 = 0;
      do {
        iVar6 = iVar7 + param_2 + 8;
        uVar4 = uVar4 + 1;
        *(float *)(iVar7 + *(int *)(param_1 + 0x58)) = SQRT(*(float *)(iVar6 + -8));
        *(float *)(iVar7 + *(int *)(param_1 + 0x58) + 4) = SQRT(*(float *)(iVar6 + -4));
        *(float *)(iVar7 + *(int *)(param_1 + 0x58) + 8) = SQRT(*(float *)(iVar7 + param_2 + 8));
        iVar5 = iVar7 + *(int *)(param_1 + 0x58);
        iVar7 = iVar7 + 0x10;
        *(unsigned int *)(iVar5 + 0xc) = *(unsigned int *)(iVar6 + 4);
      } while (uVar4 < *(unsigned int *)(param_1 + 0x68));
    }
  }
  else {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      iVar7 = 0;
      do {
        iVar5 = param_2 + 8 + iVar7;
        uVar4 = uVar4 + 1;
        *(unsigned int *)(iVar7 + *(int *)(param_1 + 0x58)) = *(unsigned int *)(iVar5 + -8);
        *(unsigned int *)(iVar7 + *(int *)(param_1 + 0x58) + 4) = *(unsigned int *)(iVar5 + -4);
        *(unsigned int *)(iVar7 + *(int *)(param_1 + 0x58) + 8) = *(unsigned int *)(param_2 + 8 + iVar7)
        ;
        *(float *)(iVar7 + *(int *)(param_1 + 0x58) + 0xc) = SQRT(*(float *)(iVar5 + 4));
        iVar7 = iVar7 + 0x10;
      } while (uVar4 < *(unsigned int *)(param_1 + 0x68));
    }
  }
  return *(unsigned int *)(param_1 + 0x58);
}

