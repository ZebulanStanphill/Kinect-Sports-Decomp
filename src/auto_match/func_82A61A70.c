extern unsigned int lbl_8201467C;


void fn_82A61A70(unsigned int *param_1)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  float *pfVar9;
  unsigned __int64 uVar10;
  
  pfVar9 = (float *)param_1[3];
  uVar10 = (unsigned __int64)*param_1;
  uVar8 = (unsigned __int64)param_1[1];
  uVar7 = (unsigned __int64)param_1[5];
  uVar1 = param_1[8];
  fVar2 = *(float *)param_1[2] * lbl_8201467C;
  fVar3 = ((float *)param_1[2])[1] * lbl_8201467C;
  if (pfVar9 != (float *)0x0) {
    fVar4 = *pfVar9 * lbl_8201467C;
    fVar5 = pfVar9[1] * lbl_8201467C;
    if (uVar7 != 0) {
      do {
        fVar6 = (float)(__int64)*(short *)uVar10;
        dataCacheBlockTouch(uVar10 + 0x1a);
        dataCacheBlockTouch(uVar8 + 0x48);
        pfVar9 = (float *)uVar8;
        if (uVar1 == 0) {
          *pfVar9 = fVar6 * fVar2;
          pfVar9[1] = fVar6 * fVar3;
        }
        else {
          *pfVar9 = fVar6 * fVar2 + *pfVar9;
          pfVar9[1] = fVar6 * fVar3 + pfVar9[1];
        }
        uVar8 = uVar8 + 8;
        fVar2 = fVar4 + fVar2;
        fVar3 = fVar5 + fVar3;
        uVar7 = uVar7 - 1;
        uVar10 = uVar10 + 2;
      } while (uVar7 != 0);
      return;
    }
    return;
  }
  if (uVar7 != 0) {
    do {
      fVar4 = (float)(__int64)*(short *)uVar10;
      dataCacheBlockTouch(uVar10 + 0x1a);
      dataCacheBlockTouch(uVar8 + 0x48);
      pfVar9 = (float *)uVar8;
      if (uVar1 == 0) {
        *pfVar9 = fVar4 * fVar2;
        pfVar9[1] = fVar4 * fVar3;
      }
      else {
        *pfVar9 = fVar4 * fVar2 + *pfVar9;
        pfVar9[1] = fVar4 * fVar3 + pfVar9[1];
      }
      uVar8 = uVar8 + 8;
      uVar7 = uVar7 - 1;
      uVar10 = uVar10 + 2;
    } while (uVar7 != 0);
    return;
  }
  return;
}

