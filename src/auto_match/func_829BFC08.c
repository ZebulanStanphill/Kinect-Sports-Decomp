extern unsigned int uStack00000034;


void fn_829BFC08(int param_1,int *param_2,int param_3,int param_4,__int64 param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  unsigned char *pbVar25;
  int iVar26;
  int iVar27;
  unsigned char *pbVar28;
  int iVar29;
  int iVar30;
  unsigned char *puVar31;
  unsigned char *pbVar32;
  unsigned __int64 uVar33;
  int *piVar34;
  unsigned __int64 uVar35;
  unsigned int uStack00000034;
  
  iVar3 = *(int *)(param_1 + 0x1cc);
  uVar33 = param_5 - 1;
  uVar4 = *(unsigned int *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x148);
  uStack00000034 = (unsigned int)uVar33;
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar7 = *(int *)(iVar3 + 0x18);
  iVar8 = *(int *)(iVar3 + 0x1c);
  iVar9 = *(int *)(iVar3 + 0x20);
  iVar10 = *(int *)(iVar3 + 0x24);
  iVar11 = *(int *)(iVar3 + 0x28);
  iVar12 = *(int *)(iVar3 + 0x2c);
  iVar13 = *(int *)(iVar3 + 0x30);
  iVar14 = *(int *)(iVar3 + 0x34);
  iVar15 = *(int *)(iVar3 + 0x38);
  iVar16 = *(int *)(iVar3 + 0x3c);
  iVar17 = *(int *)(iVar3 + 8);
  iVar18 = *(int *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (-1 < (__int64)uVar33) {
    param_3 = param_3 << 2;
    piVar34 = (int *)(param_4 + -4);
    do {
      uVar35 = (unsigned __int64)uVar4;
      piVar34 = piVar34 + 1;
      piVar22 = (int *)(param_3 + *param_2);
      pbVar32 = *(unsigned char **)(param_2[1] + param_3);
      piVar23 = (int *)(param_3 + param_2[2]);
      piVar24 = (int *)(param_2[3] + param_3);
      param_3 = param_3 + 4;
      if (uVar35 != 0) {
        puVar31 = (unsigned char *)(*piVar34 + -1);
        iVar27 = *piVar22 - (int)pbVar32;
        iVar26 = *piVar23 - (int)pbVar32;
        iVar29 = *piVar24 - (int)pbVar32;
        do {
          bVar1 = *pbVar32;
          pbVar25 = pbVar32 + iVar26;
          bVar2 = pbVar32[iVar27];
          pbVar28 = pbVar32 + iVar29;
          pbVar32 = pbVar32 + 1;
          iVar30 = (0xff - (unsigned int)*pbVar28) * 4;
          iVar19 = (unsigned int)*(unsigned char *)(*(int *)((unsigned int)*pbVar25 * 4 + iVar17) + (unsigned int)bVar2 + iVar5) * 4;
          iVar20 = (unsigned int)*(unsigned char *)((*(int *)((unsigned int)bVar1 * 4 + iVar6) +
                                    *(int *)((unsigned int)*pbVar25 * 4 + iVar3) >> 0x10) + (unsigned int)bVar2 +
                                  iVar5) * 4;
          iVar21 = (unsigned int)*(unsigned char *)(*(int *)((unsigned int)bVar1 * 4 + iVar18) + (unsigned int)bVar2 + iVar5) * 4;
          puVar31[1] = (char)((unsigned __int64)
                              ((__int64)
                               (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                   ((__int64)
                                                    (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                                        ((__int64)
                                                                         *(int *)(iVar19 + iVar8) *
                                                                        (__int64)
                                                                        *(int *)(iVar30 + iVar7)) >>
                                                                       0x10) *
                                                   (__int64)*(int *)(iVar20 + iVar11)) >> 0x10) *
                              (__int64)*(int *)(iVar21 + iVar14)) >> 0x18);
          puVar31[2] = (char)((unsigned __int64)
                              ((__int64)
                               (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                   ((__int64)
                                                    (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                                        ((__int64)
                                                                         *(int *)(iVar20 + iVar12) *
                                                                        (__int64)
                                                                        *(int *)(iVar30 + iVar7)) >>
                                                                       0x10) *
                                                   (__int64)*(int *)(iVar21 + iVar15)) >> 0x10) *
                              (__int64)*(int *)(iVar19 + iVar9)) >> 0x18);
          puVar31 = puVar31 + 3;
          *puVar31 = (char)((unsigned __int64)
                            ((__int64)
                             (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                 ((__int64)
                                                  (int)(unsigned int)(unsigned short)((unsigned __int64)
                                                                      ((__int64)
                                                                       *(int *)(iVar21 + iVar16) *
                                                                      (__int64)
                                                                      *(int *)(iVar30 + iVar7)) >>
                                                                     0x10) *
                                                 (__int64)*(int *)(iVar19 + iVar10)) >> 0x10) *
                            (__int64)*(int *)(iVar20 + iVar13)) >> 0x18);
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
        uVar33 = (unsigned __int64)uStack00000034;
      }
      uVar33 = uVar33 - 1;
      uStack00000034 = (unsigned int)uVar33;
    } while (-1 < (__int64)uVar33);
  }
  return;
}

