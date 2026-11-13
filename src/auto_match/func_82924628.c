extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


unsigned int fn_82924628(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  
  fVar5 = lbl_821AAD20;
  fVar3 = lbl_82005344;
  fVar1 = lbl_82002C5C;
  fVar4 = lbl_82002AE0;
  fVar2 = lbl_8200133C;
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 1) {
    iVar6 = *(int *)(param_1 + 0x54);
    if (iVar6 == 2) {
      uVar7 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar6 = 0;
        do {
          iVar8 = iVar6 + param_2 + 8;
          uVar7 = uVar7 + 1;
          *(float *)(iVar6 + *(int *)(param_1 + 0x58)) = (*(float *)(iVar8 + -8) + fVar4) * fVar1;
          *(float *)(iVar6 + *(int *)(param_1 + 0x58) + 4) =
               (*(float *)(iVar8 + -4) + fVar4) * fVar1;
          *(float *)(iVar6 + *(int *)(param_1 + 0x58) + 8) =
               (*(float *)(iVar6 + param_2 + 8) + fVar4) * fVar1;
          *(unsigned int *)(iVar6 + *(int *)(param_1 + 0x58) + 0xc) = *(unsigned int *)(iVar8 + 4);
          iVar6 = iVar6 + 0x10;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x68));
      }
    }
    else if (iVar6 == 3) {
      uVar7 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar6 = 0;
        do {
          iVar9 = param_2 + 8 + iVar6;
          uVar7 = uVar7 + 1;
          *(float *)(*(int *)(param_1 + 0x58) + iVar6) = (*(float *)(iVar9 + -8) + fVar4) * fVar1;
          *(float *)(*(int *)(param_1 + 0x58) + iVar6 + 4) =
               (*(float *)(iVar9 + -4) + fVar4) * fVar1;
          *(float *)(*(int *)(param_1 + 0x58) + iVar6 + 8) =
               (*(float *)(param_2 + 8 + iVar6) + fVar4) * fVar1;
          iVar8 = *(int *)(param_1 + 0x58) + iVar6;
          iVar6 = iVar6 + 0x10;
          *(float *)(iVar8 + 0xc) = (*(float *)(iVar9 + 4) + fVar4) * fVar1;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x68));
      }
    }
    else if ((iVar6 == 4) && (uVar7 = 0, *(int *)(param_1 + 0x68) != 0)) {
      iVar6 = -8 - param_2;
      pfVar10 = (float *)(param_2 + 8);
      do {
        fVar2 = pfVar10[-2];
        fVar1 = fVar5;
        if ((fVar5 <= fVar2) && (fVar1 = fVar2, fVar4 <= fVar2)) {
          fVar1 = fVar4;
        }
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6) = fVar1;
        fVar2 = pfVar10[-1];
        fVar1 = fVar5;
        if ((fVar5 <= fVar2) && (fVar1 = fVar2, fVar4 <= fVar2)) {
          fVar1 = fVar4;
        }
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6 + 4) = fVar1;
        fVar2 = *pfVar10;
        fVar1 = fVar5;
        if ((fVar5 <= fVar2) && (fVar1 = fVar2, fVar4 <= fVar2)) {
          fVar1 = fVar4;
        }
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6 + 8) = fVar1;
        fVar2 = pfVar10[1];
        fVar1 = fVar5;
        if ((fVar5 <= fVar2) && (fVar1 = fVar2, fVar4 <= fVar2)) {
          fVar1 = fVar4;
        }
        uVar7 = uVar7 + 1;
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6 + 0xc) = fVar1;
        pfVar10 = pfVar10 + 4;
      } while (uVar7 < *(unsigned int *)(param_1 + 0x68));
    }
  }
  else if (iVar6 == 2) {
    iVar6 = *(int *)(param_1 + 0x54);
    if (iVar6 == 1) {
      uVar7 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar6 = 0;
        do {
          iVar8 = param_2 + 8 + iVar6;
          uVar7 = uVar7 + 1;
          *(float *)(*(int *)(param_1 + 0x58) + iVar6) = *(float *)(iVar8 + -8) * fVar3 - fVar4;
          *(float *)(*(int *)(param_1 + 0x58) + iVar6 + 4) = *(float *)(iVar8 + -4) * fVar3 - fVar4;
          *(float *)(*(int *)(param_1 + 0x58) + iVar6 + 8) =
               *(float *)(param_2 + 8 + iVar6) * fVar3 - fVar4;
          *(unsigned int *)(*(int *)(param_1 + 0x58) + iVar6 + 0xc) = *(unsigned int *)(iVar8 + 4);
          iVar6 = iVar6 + 0x10;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x68));
      }
    }
    else if (iVar6 == 3) {
      uVar7 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar6 = 0;
        do {
          iVar9 = iVar6 + param_2 + 8;
          uVar7 = uVar7 + 1;
          *(unsigned int *)(iVar6 + *(int *)(param_1 + 0x58)) = *(unsigned int *)(iVar9 + -8);
          *(unsigned int *)(iVar6 + *(int *)(param_1 + 0x58) + 4) = *(unsigned int *)(iVar9 + -4);
          *(unsigned int *)(iVar6 + *(int *)(param_1 + 0x58) + 8) =
               *(unsigned int *)(iVar6 + param_2 + 8);
          iVar8 = iVar6 + *(int *)(param_1 + 0x58);
          iVar6 = iVar6 + 0x10;
          *(float *)(iVar8 + 0xc) = (*(float *)(iVar9 + 4) + fVar4) * fVar1;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x68));
      }
    }
    else if ((iVar6 == 4) && (uVar7 = 0, *(int *)(param_1 + 0x68) != 0)) {
      iVar6 = -8 - param_2;
      pfVar10 = (float *)(param_2 + 8);
      do {
        fVar1 = pfVar10[-2];
        fVar3 = fVar2;
        if ((fVar2 <= fVar1) && (fVar3 = fVar1, fVar4 <= fVar1)) {
          fVar3 = fVar4;
        }
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6) = fVar3;
        fVar1 = pfVar10[-1];
        fVar3 = fVar2;
        if ((fVar2 <= fVar1) && (fVar3 = fVar1, fVar4 <= fVar1)) {
          fVar3 = fVar4;
        }
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6 + 4) = fVar3;
        fVar1 = *pfVar10;
        fVar3 = fVar2;
        if ((fVar2 <= fVar1) && (fVar3 = fVar1, fVar4 <= fVar1)) {
          fVar3 = fVar4;
        }
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6 + 8) = fVar3;
        fVar1 = pfVar10[1];
        fVar3 = fVar5;
        if ((fVar5 <= fVar1) && (fVar3 = fVar1, fVar4 <= fVar1)) {
          fVar3 = fVar4;
        }
        uVar7 = uVar7 + 1;
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6 + 0xc) = fVar3;
        pfVar10 = pfVar10 + 4;
      } while (uVar7 < *(unsigned int *)(param_1 + 0x68));
    }
  }
  else if (iVar6 == 3) {
    iVar6 = *(int *)(param_1 + 0x54);
    if (iVar6 == 1) {
      uVar7 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar6 = 0;
        do {
          iVar8 = iVar6 + param_2 + 8;
          uVar7 = uVar7 + 1;
          *(float *)(iVar6 + *(int *)(param_1 + 0x58)) = *(float *)(iVar8 + -8) * fVar3 - fVar4;
          *(float *)(iVar6 + *(int *)(param_1 + 0x58) + 4) = *(float *)(iVar8 + -4) * fVar3 - fVar4;
          *(float *)(iVar6 + *(int *)(param_1 + 0x58) + 8) =
               *(float *)(iVar6 + param_2 + 8) * fVar3 - fVar4;
          *(float *)(iVar6 + *(int *)(param_1 + 0x58) + 0xc) = *(float *)(iVar8 + 4) * fVar3 - fVar4
          ;
          iVar6 = iVar6 + 0x10;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x68));
      }
    }
    else if (iVar6 == 2) {
      uVar7 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar6 = 0;
        do {
          iVar8 = iVar6 + param_2 + 8;
          uVar7 = uVar7 + 1;
          *(unsigned int *)(*(int *)(param_1 + 0x58) + iVar6) = *(unsigned int *)(iVar8 + -8);
          *(unsigned int *)(*(int *)(param_1 + 0x58) + iVar6 + 4) = *(unsigned int *)(iVar8 + -4);
          *(unsigned int *)(*(int *)(param_1 + 0x58) + iVar6 + 8) =
               *(unsigned int *)(iVar6 + param_2 + 8);
          *(float *)(*(int *)(param_1 + 0x58) + iVar6 + 0xc) = *(float *)(iVar8 + 4) * fVar3 - fVar4
          ;
          iVar6 = iVar6 + 0x10;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x68));
      }
    }
    else if ((iVar6 == 4) && (uVar7 = 0, *(int *)(param_1 + 0x68) != 0)) {
      iVar6 = -8 - param_2;
      pfVar10 = (float *)(param_2 + 8);
      do {
        fVar1 = pfVar10[-2];
        fVar3 = fVar2;
        if ((fVar2 <= fVar1) && (fVar3 = fVar1, fVar4 <= fVar1)) {
          fVar3 = fVar4;
        }
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6) = fVar3;
        fVar1 = pfVar10[-1];
        fVar3 = fVar2;
        if ((fVar2 <= fVar1) && (fVar3 = fVar1, fVar4 <= fVar1)) {
          fVar3 = fVar4;
        }
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6 + 4) = fVar3;
        fVar1 = *pfVar10;
        fVar3 = fVar2;
        if ((fVar2 <= fVar1) && (fVar3 = fVar1, fVar4 <= fVar1)) {
          fVar3 = fVar4;
        }
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6 + 8) = fVar3;
        fVar1 = pfVar10[1];
        fVar3 = fVar2;
        if ((fVar2 <= fVar1) && (fVar3 = fVar1, fVar4 <= fVar1)) {
          fVar3 = fVar4;
        }
        uVar7 = uVar7 + 1;
        *(float *)((int)pfVar10 + *(int *)(param_1 + 0x58) + iVar6 + 0xc) = fVar3;
        pfVar10 = pfVar10 + 4;
      } while (uVar7 < *(unsigned int *)(param_1 + 0x68));
    }
  }
  return *(unsigned int *)(param_1 + 0x58);
}

