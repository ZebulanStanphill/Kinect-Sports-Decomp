extern int fn_82F431F8();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000044;


void fn_82CAA210(unsigned char *param_1,unsigned int param_2,unsigned int param_3,int param_4,__int64 param_5,int param_6,
                  unsigned __int64 param_7,int param_8)

{
  unsigned char *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned __int64 uVar12;
  int iVar13;
  __int64 lVar14;
  int iVar15;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack00000044;
  int in_stack_00000054;
  int in_stack_0000005c;
  unsigned int *in_stack_00000064;
  
  iVar15 = (int)param_5;
  uStack00000044 = (unsigned int)param_7;
  iVar9 = 0;
  uVar12 = param_7;
  if (0 < param_6) {
    iVar11 = iVar15 + -2;
    iVar10 = iVar15 + -6;
    do {
      iVar7 = 4;
      iVar13 = (int)(param_5 - 4U);
      *in_stack_00000064 =
           (int)((5 - (unsigned int)param_1[2]) * 3 + (unsigned int)*param_1 * 0x22 + (unsigned int)param_1[4]) >> 5;
      in_stack_00000064[1] =
           (int)((unsigned int)*param_1 * 0x19 + ((unsigned int)param_1[2] * 8 - (unsigned int)param_1[2]) + 0xf) >> 5;
      in_stack_00000064[2] =
           (int)((((unsigned int)*param_1 * 2 - (unsigned int)param_1[4]) + 5) * 3 + (unsigned int)param_1[2] * 0x1c +
                (unsigned int)param_1[6]) >> 5;
      in_stack_00000064[3] =
           (int)((((unsigned int)param_1[2] * 0xe + (unsigned int)param_1[4] * 3) - (unsigned int)*param_1) * 2 + 0xf) >> 5;
      if (4 < iVar13) {
        lVar14 = ((param_5 - 9U & 0xffffffff) >> 1) + 1;
        puVar6 = in_stack_00000064 + 3;
        do {
          puVar6[1] = (int)((((unsigned int)param_1[iVar7 + -2] * 2 - (unsigned int)param_1[iVar7 + 2]) + 5) * 3 +
                            (unsigned int)param_1[iVar7 + 4] + (unsigned int)param_1[iVar7] * 0x1c) >> 5;
          iVar3 = iVar7 + -2;
          pbVar1 = param_1 + iVar7;
          iVar4 = iVar7 + -4;
          iVar2 = iVar7 + 2;
          iVar7 = iVar7 + 2;
          puVar6 = puVar6 + 2;
          *puVar6 = (int)((((unsigned int)param_1[iVar2] * 2 - (unsigned int)param_1[iVar3]) + 5) * 3 +
                          (unsigned int)param_1[iVar4] + (unsigned int)*pbVar1 * 0x1c) >> 5;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        uVar12 = param_7 & 0xffffffff;
      }
      iVar7 = 0;
      *(int *)((int)((param_5 - 4U & 0xffffffff) << 2) + (int)in_stack_00000064) =
           (int)((((unsigned int)param_1[iVar10] * 3 + (unsigned int)param_1[iVar13] * 0xe) - (unsigned int)param_1[iVar11])
                 * 2 + 0xf) >> 5;
      in_stack_00000064[iVar15 + -3] =
           (int)((((unsigned int)param_1[iVar11] * 2 - (unsigned int)param_1[iVar10]) + 5) * 3 +
                 (unsigned int)param_1[iVar15 + -8] + (unsigned int)param_1[iVar13] * 0x1c) >> 5;
      in_stack_00000064[iVar11] =
           (int)((unsigned int)param_1[iVar11] * 0x19 + ((unsigned int)param_1[iVar13] * 8 - (unsigned int)param_1[iVar13])
                + 0xf) >> 5;
      in_stack_00000064[iVar15 + -1] =
           (int)((5 - (unsigned int)param_1[iVar13]) * 3 + (unsigned int)param_1[iVar11] * 0x22 +
                (unsigned int)param_1[iVar10]) >> 5;
      lVar14 = param_5;
      puVar6 = in_stack_00000064;
      if (0 < iVar15) {
        do {
          uVar8 = *puVar6;
          if (0xff < uVar8) {
            uVar8 = 0xffffffffU - ((int)uVar8 >> 0x1f) & 0xff;
          }
          param_1[iVar7] = (unsigned char)uVar8;
          iVar7 = iVar7 + 1;
          lVar14 = lVar14 + -1;
          puVar6 = puVar6 + 1;
        } while (lVar14 != 0);
      }
      iVar9 = iVar9 + param_4;
      param_1 = param_1 + param_4 * in_stack_00000054;
    } while (iVar9 < param_6);
  }
  iVar15 = 0;
  uVar5 = (unsigned __int64)param_2;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  if (0 < param_8) {
    do {
      lVar14 = fn_82F431F8(uVar5,uVar5,in_stack_00000064,uVar12);
      iVar15 = iVar15 + param_4;
      uVar5 = (__int64)param_4 * (__int64)in_stack_0000005c + lVar14;
    } while (iVar15 < param_8);
  }
  uVar5 = (unsigned __int64)uStack00000024;
  iVar15 = 0;
  if (0 < param_8) {
    do {
      lVar14 = fn_82F431F8(uVar5,uVar5,in_stack_00000064,uVar12);
      iVar15 = iVar15 + param_4;
      uVar5 = (__int64)param_4 * (__int64)in_stack_0000005c + lVar14;
    } while (iVar15 < param_8);
  }
  return;
}

