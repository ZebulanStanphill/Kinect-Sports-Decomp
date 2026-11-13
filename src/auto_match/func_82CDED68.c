extern unsigned int uStack_a0;


void fn_82CDED68(int param_1, int param_2, unsigned char *param_3, int param_4, int param_5, int param_6, int param_7, __int64 param_8, unsigned int in_stack_00000054, unsigned __int64 unused_arg_10, unsigned int in_stack_00000064, int in_stack_0000006c, unsigned __int64 unused_arg_13, int in_stack_0000007c, int in_stack_00000084)

{
  unsigned char bVar1;
  int unaff_10000394;
  int *piVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;





  unsigned int uStack_a0;
  
  pbVar6 = param_3 + param_5;
  if ((int)in_stack_00000054 < (int)param_8) {
    uVar8 = param_8 - (unsigned __int64)in_stack_00000054;
    uStack_a0 = (unsigned int)uVar8;
    iVar10 = 0;
    iVar9 = 0;
    pbVar5 = pbVar6;
    pbVar3 = param_3;
    do {
      iVar11 = ((int)in_stack_00000064 >> 8) * unaff_10000394;
      iVar7 = iVar11 + param_1;
      iVar11 = param_1 + param_7 + iVar11;
      if (iVar7 == iVar10) {
        iVar10 = 0;
        if (0 < param_4) {
          piVar2 = (int *)(in_stack_00000084 + -4);
          pbVar4 = pbVar3;
          iVar9 = param_4;
          do {
            piVar2 = piVar2 + 1;
            *pbVar4 = (unsigned char)((int)((unsigned int)*(unsigned char *)(*piVar2 + iVar11) *
                                   (0x80 - (unsigned int)pbVar4[in_stack_0000007c - (int)pbVar3]) +
                                  (unsigned int)*(unsigned char *)(iVar11 + 1 + *piVar2) *
                                  (unsigned int)pbVar4[in_stack_0000007c - (int)pbVar3]) >> 7);
            pbVar4 = pbVar4 + 1;
            iVar9 = iVar9 + -1;
            iVar10 = param_4;
          } while (iVar9 != 0);
        }
        pbVar4 = pbVar3;
        if (iVar10 < param_5) {
          iVar9 = param_5 - iVar10;
          piVar2 = (int *)(iVar10 * 4 + in_stack_00000084 + -4);
          do {
            piVar2 = piVar2 + 1;
            pbVar3[iVar10] = *(unsigned char *)(*piVar2 + iVar11);
            iVar10 = iVar10 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      else {
        pbVar4 = pbVar5;
        pbVar5 = pbVar3;
        if (iVar7 != iVar9) {
          iVar10 = 0;
          if (0 < param_4) {
            piVar2 = (int *)(in_stack_00000084 + -4);
            pbVar5 = param_3;
            iVar10 = param_4;
            do {
              piVar2 = piVar2 + 1;
              iVar9 = *piVar2;
              bVar1 = pbVar5[in_stack_0000007c - (int)param_3];
              *pbVar5 = (unsigned char)((int)((unsigned int)*(unsigned char *)(iVar7 + 1 + iVar9) * (unsigned int)bVar1 +
                                    (unsigned int)*(unsigned char *)(iVar9 + iVar7) * (0x80 - (unsigned int)bVar1)) >> 7);
              pbVar5[(int)pbVar6 - (int)param_3] =
                   (unsigned char)((int)((unsigned int)*(unsigned char *)(iVar11 + 1 + iVar9) * (unsigned int)bVar1 +
                               (unsigned int)*(unsigned char *)(iVar9 + iVar11) * (0x80 - (unsigned int)bVar1)) >> 7);
              pbVar5 = pbVar5 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            uVar8 = (unsigned __int64)uStack_a0;
            unaff_10000394 = param_7;
            iVar10 = param_4;
          }
          pbVar4 = pbVar6;
          pbVar5 = param_3;
          if (iVar10 < param_5) {
            iVar9 = param_5 - iVar10;
            pbVar3 = pbVar6 + iVar10;
            piVar2 = (int *)(iVar10 * 4 + in_stack_00000084 + -4);
            do {
              piVar2 = piVar2 + 1;
              iVar10 = *piVar2;
              pbVar3[(int)param_3 - (int)pbVar6] = *(unsigned char *)(iVar10 + iVar7);
              *pbVar3 = *(unsigned char *)(iVar10 + iVar11);
              pbVar3 = pbVar3 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
      }
      pbVar3 = pbVar5;
      pbVar5 = pbVar4;
      if (0 < param_5) {
        pbVar4 = pbVar5;
        iVar10 = param_5;
        do {
          pbVar4[param_2 - (int)pbVar5] =
               (unsigned char)((unsigned int)pbVar4[(int)pbVar3 - (int)pbVar5] * (0x100 - (in_stack_00000064 & 0xff))
                      + (unsigned int)*pbVar4 * (in_stack_00000064 & 0xff) >> 8);
          pbVar4 = pbVar4 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      uVar8 = uVar8 - 1;
      uStack_a0 = (unsigned int)uVar8;
      param_2 = param_2 + param_6;
      in_stack_00000064 = in_stack_00000064 + in_stack_0000006c;
      iVar10 = iVar11;
      iVar9 = iVar7;
    } while (uVar8 != 0);
  }
  return;
}

