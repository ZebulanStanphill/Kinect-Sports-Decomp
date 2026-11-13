void fn_829F2E18(int param_1, int *param_2, unsigned short *param_3, unsigned __int64 *param_4, unsigned __int64 *param_5, unsigned int *param_6, unsigned int *param_7, int *param_8, int in_stack_00000054)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;

  
  iVar4 = 0;
  if (0 < *param_8) {
    do {
      uVar1 = *(unsigned short *)(((int)*param_5 * *param_2 + *(int *)param_5) * 2 + param_1);
      if ((uVar1 & 7) == *param_3) {
        lVar8 = (unsigned __int64)param_7[1] + ((*param_4 & 0xffffffff) - (unsigned __int64)param_6[1]);
        iVar5 = param_7[1] + ((int)*param_5 - param_6[1]);
        lVar7 = (unsigned __int64)*param_7 + ((*param_4 >> 0x20) - (unsigned __int64)*param_6);
        lVar6 = (unsigned __int64)*param_7 + ((*param_5 >> 0x20) - (unsigned __int64)*param_6);
        uVar2 = (unsigned int)(uVar1 >> 3);
        if ((*(int *)((int)((lVar8 * 0xc + lVar7 & 0xffffffffU) << 2) + in_stack_00000054) != 0) &&
           ((int)(uVar2 - (*(unsigned short *)
                            ((int)(((__int64)*param_2 * (__int64)iVar5 + lVar6 & 0xffffffffU) << 1
                                  ) + param_1) >> 3)) < 0x50)) {
          *(unsigned int *)(((int)*param_4 * 0xc + *(int *)param_4) * 4 + in_stack_00000054) = 1;
        }
        lVar8 = (unsigned __int64)param_6[1] + lVar8;
        lVar7 = (unsigned __int64)*param_6 + lVar7;
        lVar6 = (unsigned __int64)*param_6 + lVar6;
        iVar5 = param_6[1] + iVar5;
        if ((*(int *)((int)((lVar8 * 0xc + lVar7 & 0xffffffffU) << 2) + in_stack_00000054) != 0) &&
           ((int)(uVar2 - (*(unsigned short *)
                            ((int)(((__int64)iVar5 * (__int64)*param_2 + lVar6 & 0xffffffffU) << 1
                                  ) + param_1) >> 3)) < 0x50)) {
          *(unsigned int *)(((int)*param_4 * 0xc + *(int *)param_4) * 4 + in_stack_00000054) = 1;
        }
        if ((*(int *)((int)((((unsigned __int64)param_6[1] + lVar8) * 0xc + (unsigned __int64)*param_6 + lVar7 &
                            0xffffffff) << 2) + in_stack_00000054) != 0) &&
           ((int)(uVar2 - (*(unsigned short *)
                            ((int)(((__int64)(int)(param_6[1] + iVar5) * (__int64)*param_2 +
                                    (unsigned __int64)*param_6 + lVar6 & 0xffffffff) << 1) + param_1) >> 3)
                 ) < 0x50)) {
          *(unsigned int *)(((int)*param_4 * 0xc + *(int *)param_4) * 4 + in_stack_00000054) = 1;
        }
      }
      iVar4 = iVar4 + 1;
      uVar3 = *param_4;
      *(unsigned int *)param_4 = *(int *)param_4 + *param_6;
      *(unsigned int *)((int)param_4 + 4) = (int)uVar3 + param_6[1];
      uVar3 = *param_5;
      *(unsigned int *)param_5 = *(int *)param_5 + *param_6;
      *(unsigned int *)((int)param_5 + 4) = (int)uVar3 + param_6[1];
    } while (iVar4 < *param_8);
  }
  return;
}

