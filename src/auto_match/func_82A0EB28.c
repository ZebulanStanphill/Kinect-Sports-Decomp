extern int fn_82A0E300();
extern unsigned int *lbl_83218C34;


void fn_82A0EB28(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
                  int param_6,int *param_7)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  int iVar10;
  float *pfVar11;
  __int64 lVar12;
  
  iVar3 = 0;
  if (lbl_83218C34 != (int *)0x0) {
    iVar3 = (**(int (***)())(*lbl_83218C34 + 0x38))();
  }
  uVar9 = 0;
  iVar10 = iVar3 + 0x12c98;
  pfVar11 = (float *)(param_6 + 8);
  puVar8 = (unsigned int *)(iVar3 + 0x12c08);
  iVar7 = param_2 - (int)param_7;
  param_5 = param_5 - (int)param_7;
  param_1 = param_1 - (int)param_7;
  do {
    if (iVar3 != 0) {
      puVar6 = (unsigned int *)(iVar10 + -0x7c);
      lVar12 = 10;
      puVar8[0x42] = *(unsigned int *)(*param_7 + 0x28);
      iVar4 = *(int *)((int)param_7 + iVar7);
      puVar8[3] = 0;
      *puVar8 = (unsigned int)LZCOUNT(iVar4 + -2) >> 5;
      *(unsigned char *)(uVar9 + iVar3 + 0x12c00) = 0;
      *(unsigned char *)(uVar9 + iVar3 + 0x12c03) = 0;
      do {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      puVar6 = (unsigned int *)(iVar10 + -4);
      lVar12 = 10;
      do {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if (*(int *)((int)param_7 + iVar7) == 2) {
      *(int *)(*param_7 + 0x28) = *(int *)(*param_7 + 0x28) + 1;
      iVar4 = fn_82A0E300(*(unsigned int *)((int)param_7 + param_1),uVar9,param_2,param_4,
                                *(unsigned int *)((int)param_7 + param_5),pfVar11 + -2,param_3,iVar3);
      if (iVar4 == 0) {
        *(unsigned int *)((int)param_7 + iVar7) = 0;
        puVar6 = (unsigned int *)(*param_7 + -4);
        *(unsigned int *)(*param_7 + 0x28) = 0;
        lVar12 = 10;
        do {
          puVar6 = puVar6 + 1;
          *puVar6 = 0;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      else {
        pfVar2 = (float *)*param_7;
        fVar1 = pfVar11[-2];
        if (fVar1 < *pfVar2) {
          fVar1 = *pfVar2;
        }
        *pfVar2 = fVar1;
        fVar1 = pfVar11[-1];
        if (pfVar11[-1] < pfVar2[1]) {
          fVar1 = pfVar2[1];
        }
        pfVar2[1] = fVar1;
        fVar1 = pfVar2[2];
        if (pfVar2[2] <= *pfVar11) {
          fVar1 = *pfVar11;
        }
        pfVar2[2] = fVar1;
        fVar1 = pfVar2[3];
        if (pfVar2[3] <= pfVar11[1]) {
          fVar1 = pfVar11[1];
        }
        pfVar2[3] = fVar1;
        fVar1 = pfVar2[4];
        if (pfVar2[4] <= pfVar11[2]) {
          fVar1 = pfVar11[2];
        }
        pfVar2[4] = fVar1;
        fVar1 = pfVar2[5];
        if (pfVar2[5] <= pfVar11[3]) {
          fVar1 = pfVar11[3];
        }
        pfVar2[5] = fVar1;
        fVar1 = pfVar2[6];
        if (pfVar2[6] <= pfVar11[4]) {
          fVar1 = pfVar11[4];
        }
        pfVar2[6] = fVar1;
        fVar1 = pfVar2[7];
        if (pfVar2[7] <= pfVar11[5]) {
          fVar1 = pfVar11[5];
        }
        pfVar2[7] = fVar1;
        fVar1 = pfVar2[8];
        if (pfVar2[8] <= pfVar11[6]) {
          fVar1 = pfVar11[6];
        }
        pfVar2[8] = fVar1;
        fVar1 = pfVar2[9];
        if (pfVar2[9] <= pfVar11[7]) {
          fVar1 = pfVar11[7];
        }
        pfVar2[9] = fVar1;
        if ((unsigned int)pfVar2[10] < 5) {
          *(unsigned int *)((int)param_7 + iVar7) = 2;
        }
        else {
          *(unsigned int *)((int)param_7 + iVar7) = 1;
          if (iVar3 != 0) {
            puVar5 = (unsigned int *)(iVar10 + -4);
            puVar6 = (unsigned int *)(*param_7 + -4);
            lVar12 = 10;
            do {
              puVar6 = puVar6 + 1;
              puVar5 = puVar5 + 1;
              *puVar5 = *puVar6;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
      }
    }
    else {
      *(unsigned int *)(*param_7 + 0x28) = 5;
      if (iVar3 != 0) {
        puVar5 = (unsigned int *)(iVar10 + -4);
        puVar6 = (unsigned int *)(*param_7 + -4);
        lVar12 = 10;
        do {
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
          *puVar5 = *puVar6;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        puVar5 = (unsigned int *)(iVar10 + -0x7c);
        puVar6 = (unsigned int *)((int)(pfVar11 + -2) + (int)pfVar11 + (-0xc - param_6));
        lVar12 = 10;
        do {
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
          *puVar5 = *puVar6;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        if (*(int *)(iVar3 + 0x12d1c) != 0) {
          fn_82A0E300(*(unsigned int *)((int)param_7 + param_1),uVar9,param_2,param_4,
                            *(unsigned int *)((int)param_7 + param_5),pfVar11 + -2,param_3,iVar3);
        }
      }
    }
    uVar9 = uVar9 + 1;
    pfVar11 = pfVar11 + 10;
    iVar10 = iVar10 + 0x28;
    puVar8 = puVar8 + 1;
    param_7 = param_7 + 1;
  } while (uVar9 < 3);
  if (lbl_83218C34 != (int *)0x0) {
    (**(int (***)())(*lbl_83218C34 + 0x18))(lbl_83218C34,param_2,2);
    (**(int (***)())(*lbl_83218C34 + 0x34))(lbl_83218C34,param_3);
  }
  return;
}

