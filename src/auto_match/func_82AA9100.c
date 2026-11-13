extern unsigned int lbl_820D5CC0;
extern unsigned int lbl_820D5CD0;


void fn_82AA9100(int *param_1,int *param_2,int param_3,unsigned int param_4,int param_5,int param_6,
                  int param_7)

{
  unsigned char *pbVar1;
  int *piVar2;
  int *piVar3;
  __int64 lVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  iVar9 = 0;
  piVar6 = param_2;
  if (0 < (int)param_4) {
    lVar4 = (((unsigned __int64)param_4 - 1 & 0xffffffff) >> 4) + 1;
    piVar3 = param_1;
    do {
      iVar5 = *piVar6;
      piVar6 = piVar6 + 1;
      *piVar3 = iVar5;
      if (param_6 != 0) {
        *(int *)((iVar9 >> 2) * 4 + param_3) = iVar5 + 2 >> 2;
      }
      iVar9 = iVar9 + 0x10;
      piVar3 = piVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  piVar11 = param_2 + param_4 * 4;
  piVar10 = param_2 + param_4;
  piVar3 = param_2 + param_4 * 8;
  param_2 = param_2 + param_4 * 0xd;
  iVar9 = 0;
  if (0 < (int)param_4) {
    do {
      iVar5 = 0;
      lVar4 = 0xf;
      piVar7 = piVar6;
      do {
        iVar8 = *piVar7;
        param_1[((unsigned char)(&lbl_820D5CC0)[iVar5] >> 4) * param_4 + ((unsigned char)(&lbl_820D5CC0)[iVar5] & 0xf)
                + iVar9] = iVar8;
        if (param_6 != 0) {
          *(int *)(((unsigned int)((unsigned char)(&lbl_820D5CC0)[iVar5] >> 6) * (param_5 >> 2) +
                   ((int)(((unsigned char)(&lbl_820D5CC0)[iVar5] & 0xf) + iVar9) >> 2)) * 4 + param_3) =
               iVar8 + 2 >> 2;
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + ((int)param_4 >> 4) + (unsigned int)((int)param_4 < 0 && (param_4 & 0xf) != 0);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      piVar6 = piVar6 + 1;
      if (param_7 != 0) {
        iVar8 = 0;
        iVar5 = param_4 - 3;
        lVar4 = 0x10;
        do {
          pbVar1 = &lbl_820D5CD0 + iVar8;
          iVar8 = iVar8 + 1;
          piVar7 = param_1 + (*pbVar1 >> 4) * param_4 + (*pbVar1 & 0xf) + iVar9 + 1;
          *piVar7 = *piVar10;
          piVar7[1] = *piVar11;
          piVar7[2] = *piVar3;
          piVar7 = piVar7 + 2 + iVar5;
          *piVar7 = piVar10[1];
          piVar2 = piVar10 + 2;
          piVar10 = piVar10 + 3;
          piVar7[1] = *piVar2;
          piVar7[2] = piVar11[1];
          piVar7[3] = piVar3[1];
          piVar7 = piVar7 + 3 + iVar5;
          *piVar7 = piVar11[2];
          piVar2 = piVar11 + 3;
          piVar11 = piVar11 + 4;
          piVar7[1] = *piVar2;
          piVar7[2] = piVar3[2];
          piVar7[3] = *param_2;
          piVar7 = piVar7 + 3 + iVar5;
          *piVar7 = piVar3[3];
          piVar2 = piVar3 + 4;
          piVar3 = piVar3 + 5;
          piVar7[1] = *piVar2;
          piVar7[2] = param_2[1];
          piVar2 = param_2 + 2;
          param_2 = param_2 + 3;
          piVar7[3] = *piVar2;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      iVar9 = iVar9 + 0x10;
    } while (iVar9 < (int)param_4);
  }
  return;
}

