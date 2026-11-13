extern unsigned int *auStack_a4;
extern int fn_82CD51E8();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000002c;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;
extern unsigned int uStack_a8;


void fn_82CD52D8(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4,
                  __int64 param_5,__int64 param_6,__int64 param_7,__int64 param_8)

{
  unsigned char *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned char *puVar9;
  __int64 lVar10;
  int iVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  __int64 lVar19;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  int iStack0000002c;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_0000008c;
  int in_stack_00000094;
  int iStack_b0;
  int iStack_ac;
  unsigned int uStack_a8;
  unsigned int auStack_a4 [41];
  
  iVar18 = (int)param_2;
  iVar5 = (int)param_4;
  uStack00000014 = (unsigned int)param_1;
  uStack00000024 = (unsigned int)param_3;
  iStack_b0 = 0;
  iStack_ac = 0;
  uStack_a8 = 0;
  auStack_a4[0] = 0;
  iStack0000001c = iVar18;
  iStack0000002c = iVar5;
  iVar3 = fn_82CD51E8(in_stack_0000008c,in_stack_00000094,&iStack_ac,auStack_a4);
  lVar19 = param_3 + param_6;
  param_4 = param_4 + param_6;
  iVar17 = (int)param_4;
  uVar14 = param_1 + param_5;
  lVar12 = param_2 + param_5;
  lVar15 = lVar19 + param_6;
  iVar16 = (int)lVar15;
  lVar10 = param_4 + param_6;
  iVar11 = (int)lVar10;
  iVar4 = fn_82CD51E8(in_stack_0000007c,in_stack_00000084,&iStack_b0,&uStack_a8);
  if ((iVar4 != 0) && (iVar3 != 0)) {
    lVar7 = (unsigned __int64)(in_stack_0000006c == 0) + (unsigned __int64)in_stack_0000005c;
    uVar6 = param_1;
    iVar3 = iVar18;
    if (1 < (int)lVar7) {
      lVar7 = lVar7 + -1;
      uVar8 = param_1;
      do {
        uVar6 = uVar14;
        lVar13 = lVar12;
        uVar14 = (unsigned __int64)in_stack_00000054;
        if (0 < (int)in_stack_00000054) {
          iVar4 = (int)uVar8;
          iVar3 = (int)param_2 - iVar4;
          iVar5 = (int)lVar15;
          iVar18 = (int)uVar6 - iVar4;
          iVar4 = (int)lVar13 - iVar4;
          lVar12 = lVar15;
          do {
            pbVar1 = (unsigned char *)uVar8;
            puVar9 = (unsigned char *)lVar12;
            puVar9[(int)lVar19 - iVar5] =
                 (char)((int)((unsigned int)pbVar1[iVar18] * in_stack_00000084 +
                              (unsigned int)*pbVar1 * in_stack_0000007c + iStack_b0) >> (uStack_a8 & 0x3f));
            *puVar9 = (char)((int)((unsigned int)pbVar1[iVar18] * in_stack_00000094 +
                                   (unsigned int)*pbVar1 * in_stack_0000008c + iStack_ac) >>
                            (auStack_a4[0] & 0x3f));
            puVar9[(int)param_4 - iVar5] =
                 (char)((int)((unsigned int)pbVar1[iVar3] * in_stack_0000007c +
                              (unsigned int)pbVar1[iVar4] * in_stack_00000084 + iStack_b0) >>
                       (uStack_a8 & 0x3f));
            uVar8 = uVar8 + param_7;
            puVar9[(int)lVar10 - iVar5] =
                 (char)((int)((unsigned int)pbVar1[iVar3] * in_stack_0000008c +
                              (unsigned int)pbVar1[iVar4] * in_stack_00000094 + iStack_ac) >>
                       (auStack_a4[0] & 0x3f));
            lVar12 = lVar12 + param_8;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
          param_1 = (unsigned __int64)uStack00000014;
        }
        lVar19 = lVar15 + param_6;
        param_4 = lVar10 + param_6;
        iVar17 = (int)param_4;
        lVar7 = lVar7 + -1;
        lVar15 = lVar19 + param_6;
        iVar16 = (int)lVar15;
        lVar10 = param_4 + param_6;
        iVar11 = (int)lVar10;
        lVar12 = lVar13 + param_5;
        uVar14 = uVar6 + param_5;
        param_2 = lVar13;
        uVar8 = uVar6;
      } while (lVar7 != 0);
      param_3 = (unsigned __int64)uStack00000024;
      iVar18 = iStack0000001c;
      iVar5 = iStack0000002c;
      iVar3 = (int)lVar13;
    }
    uVar14 = (unsigned __int64)in_stack_00000054;
    if ((in_stack_00000064 != 0) && (0 < (int)in_stack_00000054)) {
      iVar4 = (int)param_1;
      iVar2 = (int)param_3;
      uVar8 = uVar14;
      do {
        puVar9 = (unsigned char *)param_1;
        *(unsigned char *)param_3 = *puVar9;
        param_1 = param_1 + param_7;
        ((unsigned char *)param_3)[iVar5 - iVar2] = puVar9[iVar18 - iVar4];
        param_3 = param_3 + param_8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (((in_stack_0000006c != 0) && (0 < in_stack_00000074)) && (0 < (int)in_stack_00000054)) {
      iVar18 = (int)uVar6;
      iVar5 = (int)lVar19;
      do {
        puVar9 = (unsigned char *)lVar19;
        *puVar9 = *(unsigned char *)uVar6;
        puVar9[iVar17 - iVar5] = ((unsigned char *)uVar6)[iVar3 - iVar18];
        if (1 < in_stack_00000074) {
          puVar9[iVar16 - iVar5] = *puVar9;
          puVar9[iVar11 - iVar5] = puVar9[iVar17 - iVar5];
        }
        uVar6 = uVar6 + param_7;
        lVar19 = lVar19 + param_8;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  return;
}

