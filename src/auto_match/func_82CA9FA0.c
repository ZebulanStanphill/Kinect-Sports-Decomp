extern int fn_82F429B8();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack_a0;


void fn_82CA9FA0(unsigned char *param_1, unsigned int param_2, unsigned int param_3, int param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned int param_7, int param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, int in_stack_00000064)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  __int64 lVar6;
  __int64 lVar7;
  int iVar8;
  unsigned char *pbVar9;
  unsigned int uVar10;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  unsigned __int64 uVar11;
  unsigned int *puVar14;
  unsigned char *pbVar16;
  unsigned __int64 uVar15;
  unsigned char *pbVar17;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;



  unsigned int *in_stack_00000074;
  unsigned int uStack_a0;
  
  uStack00000034 = (unsigned int)param_5;
  uStack0000003c = (unsigned int)param_6;
  if (0 < (int)param_7) {
    iVar8 = param_8 + -2;
    iVar3 = in_stack_00000064 * 2;
    param_4 = param_4 - (int)param_1;
    uStack_a0 = param_7;
    do {
      pbVar13 = param_1 + param_4;
      pbVar12 = param_1 + in_stack_00000064 * 2;
      *in_stack_00000074 =
           (int)(((unsigned int)*param_1 * 0xf + (unsigned int)param_1[in_stack_00000064] * 0xe +
                 (unsigned int)param_1[in_stack_00000064 * 2]) * 5 +
                 ((unsigned int)param_1[in_stack_00000064 * 3] + (unsigned int)param_1[in_stack_00000064]) * -0xb +
                0x3f) >> 7;
      if (2 < iVar8) {
        lVar7 = (unsigned __int64)(param_8 - 5U >> 1) + 1;
        pbVar16 = param_1 + in_stack_00000064 * 3;
        pbVar17 = param_1 + in_stack_00000064 * 2;
        pbVar9 = param_1;
        puVar14 = in_stack_00000074;
        do {
          pbVar4 = pbVar12 + in_stack_00000064;
          bVar1 = *pbVar12;
          pbVar12 = pbVar12 + iVar3;
          pbVar5 = pbVar9 + in_stack_00000064;
          pbVar17 = pbVar17 + iVar3;
          pbVar16 = pbVar16 + iVar3;
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + iVar3;
          puVar14 = puVar14 + 2;
          *puVar14 = (int)((((unsigned int)*pbVar4 + (unsigned int)bVar1) * 0xe + (unsigned int)*pbVar5 + (unsigned int)*pbVar17) *
                           5 + ((unsigned int)*pbVar16 + (unsigned int)bVar2) * -0xb + 0x3f) >> 7;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      in_stack_00000074[iVar8] =
           (int)(((unsigned int)param_1[(param_8 + -3) * in_stack_00000064] +
                 (unsigned int)param_1[(param_8 + -1) * in_stack_00000064] * 0xf +
                 (unsigned int)param_1[iVar8 * in_stack_00000064] * 0xe) * 5 +
                 ((unsigned int)param_1[(param_8 + -4) * in_stack_00000064] +
                 (unsigned int)param_1[iVar8 * in_stack_00000064]) * -0xb + 0x3f) >> 7;
      if (0 < param_8) {
        lVar7 = (unsigned __int64)(param_8 - 1U >> 1) + 1;
        puVar14 = in_stack_00000074;
        do {
          uVar10 = *puVar14;
          if (0xff < uVar10) {
            uVar10 = 0xffffffffU - ((int)uVar10 >> 0x1f) & 0xff;
          }
          *pbVar13 = (unsigned char)uVar10;
          puVar14 = puVar14 + 2;
          pbVar13[in_stack_00000064] = 0;
          pbVar13 = pbVar13 + iVar3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar11 = (unsigned __int64)uStack_a0;
      param_1 = param_1 + 1;
      uStack_a0 = (unsigned int)(uVar11 - 1);
    } while (uVar11 - 1 != 0);
    param_5 = param_5 & 0xffffffff;
    param_6 = param_6 & 0xffffffff;
  }
  uVar11 = (unsigned __int64)in_stack_00000054;
  if (0 < (int)in_stack_00000054) {
    lVar7 = param_2 - param_5;
    uVar15 = uVar11;
    uStack0000001c = param_2;
    uStack00000024 = param_3;
    do {
      lVar6 = fn_82F429B8(param_5,lVar7 + param_5,in_stack_00000074,in_stack_0000005c);
      uVar15 = uVar15 - 1;
      param_5 = lVar6 + 1;
    } while (uVar15 != 0);
    if (0 < (int)in_stack_00000054) {
      lVar7 = uStack00000024 - param_6;
      do {
        lVar6 = fn_82F429B8(param_6,lVar7 + param_6,in_stack_00000074,in_stack_0000005c);
        uVar11 = uVar11 - 1;
        param_6 = lVar6 + 1;
      } while (uVar11 != 0);
    }
  }
  return;
}

