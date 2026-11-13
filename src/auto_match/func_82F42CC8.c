extern int fn_82F42B58();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;


void fn_82F42CC8(int param_1, unsigned __int64 param_2, unsigned __int64 param_3, int param_4, unsigned int param_5, unsigned int param_6, unsigned int param_7, __int64 param_8, unsigned __int64 unused_arg_9, unsigned int in_stack_0000005c, int in_stack_00000064, unsigned int in_stack_0000006c)

{
  unsigned char *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned char *pbVar8;
  __int64 lVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;



  unsigned int *in_stack_00000074;
  
  uStack0000001c = (unsigned int)param_2;
  uStack00000024 = (unsigned int)param_3;
  if (0 < (int)param_8) {
    uVar12 = (unsigned __int64)param_7 - 2;
    pbVar8 = (unsigned char *)(param_1 + 1);
    param_1 = param_4 - param_1;
    do {
      iVar11 = 2;
      *in_stack_00000074 =
           (int)(((unsigned int)pbVar8[-1] * 0xf + (unsigned int)*pbVar8 * 0xe + (unsigned int)pbVar8[1]) * 5 +
                 ((unsigned int)pbVar8[2] + (unsigned int)*pbVar8) * -0xb + 0x40) >> 7;
      if (2 < (int)uVar12) {
        lVar9 = (((unsigned __int64)param_7 - 5 & 0xffffffff) >> 1) + 1;
        puVar7 = in_stack_00000074;
        do {
          pbVar1 = pbVar8 + iVar11;
          iVar2 = iVar11 + -1;
          iVar3 = iVar11 + 1;
          iVar5 = iVar11 + -2;
          iVar4 = iVar11 + 2;
          iVar6 = iVar11 + -3;
          iVar11 = iVar11 + 2;
          puVar7 = puVar7 + 2;
          *puVar7 = (int)((((unsigned int)pbVar8[iVar2] + (unsigned int)*pbVar1) * 0xe + (unsigned int)pbVar8[iVar3] +
                          (unsigned int)pbVar8[iVar5]) * 5 +
                          ((unsigned int)pbVar8[iVar4] + (unsigned int)pbVar8[iVar6]) * -0xb + 0x40) >> 7;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      iVar11 = 0;
      *(int *)((int)((uVar12 & 0xffffffff) << 2) + (int)in_stack_00000074) =
           (int)(((unsigned int)pbVar8[param_7 - 4] +
                 (unsigned int)pbVar8[param_7 - 2] * 0xf + (unsigned int)pbVar8[param_7 - 3] * 0xe) * 5 +
                 ((unsigned int)pbVar8[param_7 - 5] + (unsigned int)pbVar8[param_7 - 3]) * -0xb + 0x40) >> 7;
      if (0 < (int)param_7) {
        lVar9 = (((unsigned __int64)param_7 - 1 & 0xffffffff) >> 1) + 1;
        puVar7 = in_stack_00000074;
        do {
          uVar10 = *puVar7;
          if (0xff < uVar10) {
            uVar10 = 0xffffffffU - ((int)uVar10 >> 0x1f) & 0xff;
          }
          pbVar8[iVar11 + param_1] = 0;
          puVar7 = puVar7 + 2;
          *(char *)(param_4 + iVar11) = (char)uVar10;
          iVar11 = iVar11 + 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      param_8 = param_8 + -1;
      pbVar8 = pbVar8 + in_stack_00000064;
      param_4 = param_4 + in_stack_00000064;
    } while (param_8 != 0);
    param_2 = param_2 & 0xffffffff;
    param_3 = param_3 & 0xffffffff;
  }
  uVar12 = (unsigned __int64)in_stack_0000005c;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  if (0 < (int)in_stack_0000005c) {
    lVar9 = param_5 - param_2;
    uVar13 = uVar12;
    do {
      fn_82F42B58(lVar9 + param_2,param_2,in_stack_00000074);
      uVar13 = uVar13 - 1;
      param_2 = param_2 + in_stack_0000006c;
    } while (uVar13 != 0);
  }
  if (0 < (int)in_stack_0000005c) {
    lVar9 = uStack0000003c - param_3;
    do {
      fn_82F42B58(lVar9 + param_3,param_3,in_stack_00000074);
      uVar12 = uVar12 - 1;
      param_3 = param_3 + in_stack_0000006c;
    } while (uVar12 != 0);
  }
  return;
}

