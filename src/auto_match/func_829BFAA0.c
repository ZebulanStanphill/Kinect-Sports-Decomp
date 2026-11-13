extern unsigned int uStack00000034;


void fn_829BFAA0(int param_1,int *param_2,int param_3,int param_4,__int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  unsigned __int64 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  unsigned char *puVar22;
  unsigned char *pbVar23;
  int iVar24;
  int *piVar25;
  unsigned int uStack00000034;
  
  iVar1 = *(int *)(param_1 + 0x1cc);
  uVar18 = param_5 - 1;
  uStack00000034 = (unsigned int)uVar18;
  uVar2 = *(unsigned int *)(param_1 + 0x70);
  iVar3 = *(int *)(iVar1 + 0x18);
  iVar4 = *(int *)(iVar1 + 0x1c);
  iVar5 = *(int *)(iVar1 + 0x20);
  iVar6 = *(int *)(iVar1 + 0x24);
  iVar7 = *(int *)(iVar1 + 0x28);
  iVar8 = *(int *)(iVar1 + 0x2c);
  iVar9 = *(int *)(iVar1 + 0x30);
  iVar10 = *(int *)(iVar1 + 0x34);
  iVar11 = *(int *)(iVar1 + 0x38);
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (-1 < (__int64)uVar18) {
    param_3 = param_3 << 2;
    piVar25 = (int *)(param_4 + -4);
    do {
      piVar25 = piVar25 + 1;
      piVar12 = (int *)(param_3 + *param_2);
      pbVar23 = *(unsigned char **)(param_3 + param_2[1]);
      piVar13 = (int *)(param_3 + param_2[2]);
      piVar14 = (int *)(param_3 + param_2[3]);
      param_3 = param_3 + 4;
      if ((unsigned __int64)uVar2 != 0) {
        puVar22 = (unsigned char *)(*piVar25 + -1);
        iVar15 = *piVar12 - (int)pbVar23;
        iVar16 = *piVar13 - (int)pbVar23;
        iVar17 = *piVar14 - (int)pbVar23;
        uVar18 = (unsigned __int64)uVar2;
        do {
          iVar24 = (0xff - (unsigned int)pbVar23[iVar15]) * 4;
          iVar21 = (0xff - (unsigned int)pbVar23[iVar17]) * 4;
          iVar20 = (0xff - (unsigned int)*pbVar23) * 4;
          iVar19 = (0xff - (unsigned int)pbVar23[iVar16]) * 4;
          pbVar23 = pbVar23 + 1;
          puVar22[1] = (char)((unsigned __int64)
                              ((__int64)
                               (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                   ((__int64)
                                                    (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                                        ((__int64)
                                                                         *(int *)(iVar24 + iVar4) *
                                                                        (__int64)
                                                                        *(int *)(iVar21 + iVar3)) >>
                                                                       0x10) *
                                                   (__int64)*(int *)(iVar20 + iVar7)) >> 0x10) *
                              (__int64)*(int *)(iVar19 + iVar10)) >> 0x18);
          puVar22[2] = (char)((unsigned __int64)
                              ((__int64)
                               (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                   ((__int64)
                                                    (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                                        ((__int64)
                                                                         *(int *)(iVar20 + iVar8) *
                                                                        (__int64)
                                                                        *(int *)(iVar21 + iVar3)) >>
                                                                       0x10) *
                                                   (__int64)*(int *)(iVar19 + iVar11)) >> 0x10) *
                              (__int64)*(int *)(iVar24 + iVar5)) >> 0x18);
          puVar22 = puVar22 + 3;
          *puVar22 = (char)((unsigned __int64)
                            ((__int64)
                             (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                 ((__int64)
                                                  (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                                      ((__int64)
                                                                       *(int *)(iVar19 + iVar1) *
                                                                      (__int64)
                                                                      *(int *)(iVar21 + iVar3)) >>
                                                                     0x10) *
                                                 (__int64)*(int *)(iVar24 + iVar6)) >> 0x10) *
                            (__int64)*(int *)(iVar20 + iVar9)) >> 0x18);
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        uVar18 = (unsigned __int64)uStack00000034;
      }
      uVar18 = uVar18 - 1;
      uStack00000034 = (unsigned int)uVar18;
    } while (-1 < (__int64)uVar18);
  }
  return;
}

