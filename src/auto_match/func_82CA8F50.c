extern int fn_82CA8848();


void fn_82CA8F50(unsigned char *param_1, __int64 param_2, __int64 param_3, int param_4, __int64 param_5, __int64 param_6, __int64 param_7, unsigned int param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, int in_stack_00000064)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  int *piVar4;
  int *piVar5;
  __int64 lVar6;
  int iVar7;
  unsigned char *pbVar8;
  unsigned int uVar9;
  int *piVar10;
  unsigned __int64 uVar11;
  int *piVar13;
  unsigned __int64 uVar12;



  int *in_stack_00000074;
  
  if (0 < (int)param_7) {
    param_4 = param_4 - (int)param_1;
    piVar13 = in_stack_00000074 + 1;
    do {
      pbVar8 = param_1;
      if (1 < (int)(param_8 - 1)) {
        piVar10 = in_stack_00000074 + -1;
        lVar6 = (unsigned __int64)(param_8 - 3 >> 1) + 1;
        do {
          pbVar2 = pbVar8 + in_stack_00000064 * 2;
          bVar1 = *pbVar8;
          pbVar3 = pbVar8 + in_stack_00000064;
          pbVar8 = pbVar8 + in_stack_00000064 * 2;
          piVar10 = piVar10 + 2;
          *piVar10 = ((int)(((unsigned int)bVar1 + (unsigned int)*pbVar2) * -0x196) >> 4) + (unsigned int)*pbVar3 * 0x10;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      in_stack_00000074[param_8 - 1] =
           (unsigned int)pbVar8[in_stack_00000064] * 0x10 + ((int)((unsigned int)*pbVar8 * -0x196) >> 3);
      *in_stack_00000074 = (unsigned int)*param_1 * 0x20 + (*piVar13 * -0xd9 >> 10);
      if (2 < (int)param_8) {
        lVar6 = (((unsigned __int64)param_8 - 3 & 0xffffffff) >> 1) + 1;
        pbVar8 = param_1;
        piVar10 = in_stack_00000074;
        do {
          piVar4 = piVar10 + 3;
          piVar5 = piVar10 + 1;
          pbVar8 = pbVar8 + in_stack_00000064 * 2;
          piVar10 = piVar10 + 2;
          *piVar10 = ((*piVar4 + *piVar5) * -0xd9 >> 0xb) + (unsigned int)*pbVar8 * 0x20;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (1 < (int)(param_8 - 1)) {
        lVar6 = (unsigned __int64)(param_8 - 3 >> 1) + 1;
        piVar10 = piVar13;
        do {
          *piVar10 = ((piVar10[-1] + piVar10[1]) * 0xe2 >> 9) + *piVar10;
          piVar10 = piVar10 + 2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      pbVar8 = param_1 + param_4;
      in_stack_00000074[param_8 - 1] =
           (in_stack_00000074[param_8 - 2] * 0xe2 >> 8) + in_stack_00000074[param_8 - 1];
      iVar7 = *piVar13;
      if (0 < (int)param_8) {
        piVar10 = in_stack_00000074 + -1;
        lVar6 = (((unsigned __int64)param_8 - 1 & 0xffffffff) >> 1) + 1;
        do {
          iVar7 = (((piVar10[2] + iVar7) * 0xe3 >> 8) + piVar10[1] + 0x14) * 0x1a;
          uVar9 = iVar7 >> 10;
          if (0xff < uVar9) {
            uVar9 = 0xffffffffU - (iVar7 >> 0x1f) & 0xff;
          }
          *pbVar8 = (unsigned char)uVar9;
          pbVar8[in_stack_00000064] = 0;
          pbVar8 = pbVar8 + in_stack_00000064 * 2;
          piVar10 = piVar10 + 2;
          iVar7 = *piVar10;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      param_7 = param_7 + -1;
      param_1 = param_1 + 1;
    } while (param_7 != 0);
  }
  uVar11 = (unsigned __int64)in_stack_00000054;
  if (0 < (int)in_stack_00000054) {
    param_2 = param_2 - param_5;
    uVar12 = uVar11;
    do {
      fn_82CA8848(param_5,param_5 + param_2,in_stack_00000074,in_stack_0000005c);
      uVar12 = uVar12 - 1;
      param_5 = param_5 + 1;
    } while (uVar12 != 0);
    if (0 < (int)in_stack_00000054) {
      param_3 = param_3 - param_6;
      do {
        fn_82CA8848(param_6,param_3 + param_6,in_stack_00000074,in_stack_0000005c);
        uVar11 = uVar11 - 1;
        param_6 = param_6 + 1;
      } while (uVar11 != 0);
    }
  }
  return;
}

