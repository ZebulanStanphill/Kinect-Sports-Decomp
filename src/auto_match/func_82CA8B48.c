extern int fn_82CA8848();


void fn_82CA8B48(unsigned char *param_1, __int64 param_2, __int64 param_3, int param_4, __int64 param_5, __int64 param_6, unsigned int param_7, __int64 param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, int in_stack_00000064, unsigned int in_stack_0000006c)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  int *piVar4;
  int *piVar5;
  unsigned char *pbVar6;
  __int64 lVar7;
  int iVar8;
  unsigned int uVar9;
  int *piVar10;
  unsigned __int64 uVar11;
  int *piVar13;
  unsigned __int64 uVar12;




  int *in_stack_00000074;
  
  if (0 < (int)param_8) {
    piVar13 = in_stack_00000074 + 1;
    param_4 = param_4 - (int)param_1;
    do {
      pbVar6 = param_1;
      if (1 < (int)(param_7 - 1)) {
        piVar10 = in_stack_00000074 + -1;
        lVar7 = (unsigned __int64)(param_7 - 3 >> 1) + 1;
        do {
          pbVar2 = pbVar6 + 2;
          bVar1 = *pbVar6;
          pbVar3 = pbVar6 + 1;
          pbVar6 = pbVar6 + 2;
          piVar10 = piVar10 + 2;
          *piVar10 = ((int)(((unsigned int)bVar1 + (unsigned int)*pbVar2) * -0x196) >> 4) + (unsigned int)*pbVar3 * 0x10;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      in_stack_00000074[param_7 - 1] = ((int)((unsigned int)*pbVar6 * -0x196) >> 3) + (unsigned int)pbVar6[1] * 0x10
      ;
      *in_stack_00000074 = (unsigned int)*param_1 * 0x20 + (*piVar13 * -0xd9 >> 10);
      if (2 < (int)param_7) {
        lVar7 = (((unsigned __int64)param_7 - 3 & 0xffffffff) >> 1) + 1;
        pbVar6 = param_1;
        piVar10 = in_stack_00000074;
        do {
          piVar4 = piVar10 + 3;
          piVar5 = piVar10 + 1;
          pbVar6 = pbVar6 + 2;
          piVar10 = piVar10 + 2;
          *piVar10 = ((*piVar4 + *piVar5) * -0xd9 >> 0xb) + (unsigned int)*pbVar6 * 0x20;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (1 < (int)(param_7 - 1)) {
        lVar7 = (unsigned __int64)(param_7 - 3 >> 1) + 1;
        piVar10 = piVar13;
        do {
          *piVar10 = ((piVar10[-1] + piVar10[1]) * 0xe2 >> 9) + *piVar10;
          piVar10 = piVar10 + 2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      in_stack_00000074[param_7 - 1] =
           (in_stack_00000074[param_7 - 2] * 0xe2 >> 8) + in_stack_00000074[param_7 - 1];
      iVar8 = *piVar13;
      if (0 < (int)param_7) {
        pbVar6 = param_1 + param_4 + -1;
        lVar7 = (((unsigned __int64)param_7 - 1 & 0xffffffff) >> 1) + 1;
        piVar10 = in_stack_00000074 + -1;
        do {
          iVar8 = (((piVar10[2] + iVar8) * 0xe3 >> 8) + piVar10[1] + 0x14) * 0x1a;
          uVar9 = iVar8 >> 10;
          if (0xff < uVar9) {
            uVar9 = 0xffffffffU - (iVar8 >> 0x1f) & 0xff;
          }
          pbVar6[1] = (unsigned char)uVar9;
          pbVar6 = pbVar6 + 2;
          *pbVar6 = 0;
          piVar10 = piVar10 + 2;
          iVar8 = *piVar10;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      param_8 = param_8 + -1;
      param_1 = param_1 + in_stack_00000064;
    } while (param_8 != 0);
  }
  uVar12 = (unsigned __int64)in_stack_0000005c;
  if (0 < (int)in_stack_0000005c) {
    param_5 = param_5 - param_2;
    uVar11 = uVar12;
    do {
      fn_82CA8848(param_5 + param_2,param_2,in_stack_00000074,in_stack_00000054,1);
      uVar11 = uVar11 - 1;
      param_2 = param_2 + (unsigned __int64)in_stack_0000006c;
    } while (uVar11 != 0);
  }
  if (0 < (int)in_stack_0000005c) {
    param_6 = param_6 - param_3;
    do {
      fn_82CA8848(param_6 + param_3,param_3,in_stack_00000074,in_stack_00000054,1);
      uVar12 = uVar12 - 1;
      param_3 = param_3 + (unsigned __int64)in_stack_0000006c;
    } while (uVar12 != 0);
  }
  return;
}

