void fn_82EDF600(unsigned char *param_1, int param_2, unsigned char *param_3, int param_4, int param_5, int param_6, int param_7, int param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, int in_stack_00000064, int in_stack_0000006c)

{
  int iVar1;
  int iVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  __int64 lVar6;
  unsigned char *pbVar7;
  int iVar8;
  unsigned __int64 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned char *pbVar13;
  unsigned __int64 uVar14;




  
  iVar8 = 0;
  iVar11 = 0;
  iVar10 = 0;
  if (in_stack_00000064 == 1) {
    if (in_stack_0000006c == 1) {
      iVar11 = 1;
      iVar10 = 1;
      iVar8 = 0xb;
      goto LAB_82edf670;
    }
    if (in_stack_0000006c != 3) goto LAB_82edf670;
    iVar8 = 0xd;
  }
  else {
    if ((in_stack_00000064 != 3) || (in_stack_0000006c != 1)) goto LAB_82edf670;
    iVar8 = 0x1f;
  }
  iVar10 = 2;
  iVar11 = 2;
LAB_82edf670:
  uVar9 = (unsigned __int64)in_stack_00000054;
  lVar6 = (__int64)((int)in_stack_0000005c >> 1);
  if (0 < lVar6) {
    do {
      pbVar13 = param_1 + param_5;
      iVar12 = param_2 + param_5;
      if (iVar8 == 0xb) {
        if (0 < (int)in_stack_00000054) {
          iVar1 = (int)pbVar13 - (int)param_1;
          iVar2 = iVar12 - (int)param_1;
          param_2 = param_2 - (int)param_1;
          uVar14 = uVar9;
          pbVar5 = param_3;
          do {
            *pbVar5 = (unsigned char)((int)((unsigned int)param_1[iVar1] + (unsigned int)*param_1 + 1) >> 1);
            pbVar7 = param_1 + iVar2;
            pbVar3 = param_1 + param_2;
            param_1 = param_1 + param_7;
            pbVar5[param_4 - (int)param_3] = (unsigned char)((int)((unsigned int)*pbVar3 + (unsigned int)*pbVar7 + 1) >> 1);
            pbVar5 = pbVar5 + param_8;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      else if (iVar8 == 0x1f) {
        if (0 < (int)in_stack_00000054) {
          uVar14 = uVar9;
          pbVar5 = pbVar13;
          pbVar7 = param_3;
          do {
            *pbVar7 = (unsigned char)((int)((unsigned int)pbVar5[(int)param_1 - (int)pbVar13] +
                                   (unsigned int)pbVar5[(int)param_1 - (int)pbVar13] * 2 + (unsigned int)*pbVar5 + 2
                                  ) >> 2);
            pbVar3 = pbVar5 + (param_2 - (int)pbVar13);
            pbVar4 = pbVar5 + (iVar12 - (int)pbVar13);
            pbVar5 = pbVar5 + param_7;
            pbVar7[param_4 - (int)param_3] =
                 (unsigned char)((int)((unsigned int)*pbVar3 + (unsigned int)*pbVar3 * 2 + (unsigned int)*pbVar4 + 2) >> 2);
            pbVar7 = pbVar7 + param_8;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      else if (iVar8 == 0xd) {
        if (0 < (int)in_stack_00000054) {
          iVar1 = (int)pbVar13 - (int)param_1;
          iVar2 = iVar12 - (int)param_1;
          param_2 = param_2 - (int)param_1;
          uVar14 = uVar9;
          pbVar5 = param_3;
          do {
            *pbVar5 = (unsigned char)((int)((unsigned int)param_1[iVar1] + (unsigned int)param_1[iVar1] * 2 + (unsigned int)*param_1
                                  + 2) >> 2);
            pbVar7 = param_1 + param_2;
            pbVar3 = param_1 + iVar2;
            param_1 = param_1 + param_7;
            pbVar5[param_4 - (int)param_3] =
                 (unsigned char)((int)((unsigned int)*pbVar3 + (unsigned int)*pbVar3 * 2 + (unsigned int)*pbVar7 + 2) >> 2);
            pbVar5 = pbVar5 + param_8;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      else if (0 < (int)in_stack_00000054) {
        iVar1 = (int)pbVar13 - (int)param_1;
        iVar2 = iVar12 - (int)param_1;
        param_2 = param_2 - (int)param_1;
        uVar14 = uVar9;
        pbVar5 = param_3;
        do {
          *pbVar5 = (unsigned char)((int)((unsigned int)param_1[iVar1] * in_stack_0000006c +
                                 (unsigned int)*param_1 * in_stack_00000064 + iVar11) >> iVar10);
          pbVar7 = param_1 + param_2;
          pbVar3 = param_1 + iVar2;
          param_1 = param_1 + param_7;
          pbVar5[param_4 - (int)param_3] =
               (unsigned char)((int)((unsigned int)*pbVar7 * in_stack_00000064 + (unsigned int)*pbVar3 * in_stack_0000006c +
                           iVar11) >> iVar10);
          pbVar5 = pbVar5 + param_8;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      param_1 = pbVar13 + param_5;
      param_2 = iVar12 + param_5;
      lVar6 = lVar6 + -1;
      param_3 = param_3 + param_6;
      param_4 = param_4 + param_6;
    } while (lVar6 != 0);
  }
  if (((in_stack_0000005c & 1) != 0) && (0 < (int)in_stack_00000054)) {
    param_2 = param_2 - (int)param_1;
    param_4 = param_4 - (int)param_3;
    do {
      *param_3 = *param_1;
      pbVar13 = param_1 + param_2;
      param_1 = param_1 + param_7;
      param_3[param_4] = *pbVar13;
      param_3 = param_3 + param_8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

