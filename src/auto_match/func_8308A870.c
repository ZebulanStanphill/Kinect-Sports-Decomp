#define true 1
extern unsigned int lbl_831BCF54;


void fn_8308A870(unsigned int *param_1,int param_2,unsigned __int64 param_3,__int64 param_4,int param_5,
                  __int64 param_6)

{
  unsigned short uVar1;
  unsigned short *puVar3;
  unsigned short *puVar4;
  __int64 lVar2;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned short *puVar7;
  int iVar9;
  __int64 lVar8;
  unsigned short *puVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned short *puVar14;
  unsigned __int64 uVar13;
  
  if (0 < (int)param_3) {
    iVar9 = 0;
    uVar5 = param_3;
    do {
      puVar14 = (unsigned short *)(iVar9 + (int)param_6);
      uVar5 = uVar5 - 1;
      puVar3 = (unsigned short *)(iVar9 + *param_1);
      iVar9 = iVar9 + 4;
      *puVar14 = *puVar3;
      puVar14[1] = puVar3[1];
    } while (uVar5 != 0);
  }
  uVar13 = (unsigned __int64)*param_1;
  lVar8 = (param_3 & 0x3fffffff) * 4;
  uVar6 = lVar8 + uVar13;
  uVar5 = param_6 + 4;
  uVar11 = (lVar8 + param_6) - 4;
  uVar12 = (param_3 + param_4 & 0x3fffffff) * 4 + uVar13;
  uVar1 = *(unsigned short *)((int)param_6 + 4);
  while (uVar13 = uVar13 + 4, uVar1 < *(unsigned short *)uVar6) {
    uVar5 = uVar5 + 4;
    uVar1 = *(unsigned short *)uVar5;
  }
  if ((uVar5 & 0xffffffff) < (uVar11 & 0xffffffff)) {
    if ((uVar6 & 0xffffffff) < (uVar12 & 0xffffffff)) {
      do {
        while( true ) {
          puVar7 = (unsigned short *)uVar6;
          puVar4 = (unsigned short *)uVar5;
          puVar10 = (unsigned short *)uVar13;
          if ((*puVar7 <= *puVar4) && ((*puVar4 != *puVar7 || (puVar7[1] <= puVar4[1])))) break;
          uVar1 = *puVar4;
          *puVar10 = uVar1;
          uVar5 = uVar5 + 4;
          puVar10[1] = puVar4[1];
          uVar13 = uVar13 + 4;
          *(short *)(*(int *)(&lbl_831BCF54 + ((uVar1 & 1) + param_5 * 2) * 4) +
                     (unsigned int)puVar10[1] * 0x10 + param_2) =
               (short)((int)((int)puVar10 - *param_1) >> 2);
          if ((uVar11 & 0xffffffff) <= (uVar5 & 0xffffffff)) goto LAB_8308a9e0;
        }
        uVar1 = *puVar7;
        *puVar10 = uVar1;
        uVar6 = uVar6 + 4;
        puVar10[1] = puVar7[1];
        uVar13 = uVar13 + 4;
        *(short *)(*(int *)(&lbl_831BCF54 + ((uVar1 & 1) + param_5 * 2) * 4) +
                   (unsigned int)puVar10[1] * 0x10 + param_2) = (short)((int)((int)puVar10 - *param_1) >> 2)
        ;
      } while ((uVar6 & 0xffffffff) < (uVar12 & 0xffffffff));
    }
  }
  else {
LAB_8308a9e0:
    if ((uVar6 & 0xffffffff) < (uVar12 & 0xffffffff)) {
      lVar8 = uVar6 - 4;
      lVar2 = (((uVar12 - uVar6) - 1 & 0xffffffff) >> 2) + 1;
      do {
        lVar8 = lVar8 + 4;
        puVar10 = (unsigned short *)uVar13;
        *(unsigned int *)puVar10 = *(unsigned int *)lVar8;
        uVar13 = uVar13 + 4;
        *(short *)(*(int *)(&lbl_831BCF54 + ((*puVar10 & 1) + param_5 * 2) * 4) +
                   (unsigned int)puVar10[1] * 0x10 + param_2) = (short)((int)((int)puVar10 - *param_1) >> 2)
        ;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  if ((uVar5 & 0xffffffff) <= (uVar11 & 0xffffffff)) {
    lVar8 = uVar5 - 4;
    lVar2 = ((uVar11 - uVar5 & 0xffffffff) >> 2) + 1;
    do {
      lVar8 = lVar8 + 4;
      puVar10 = (unsigned short *)uVar13;
      *(unsigned int *)puVar10 = *(unsigned int *)lVar8;
      uVar13 = uVar13 + 4;
      *(short *)(*(int *)(&lbl_831BCF54 + ((*puVar10 & 1) + param_5 * 2) * 4) +
                 (unsigned int)puVar10[1] * 0x10 + param_2) = (short)((int)((int)puVar10 - *param_1) >> 2);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

