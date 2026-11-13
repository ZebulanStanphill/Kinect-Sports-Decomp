#define true 1
extern unsigned int *auStack_440;
extern unsigned int *auStack_4a0;
extern unsigned int *auStack_4c0;
extern unsigned int *auStack_4e0;
extern unsigned int *auStack_500;
extern unsigned int *auStack_540;
extern unsigned int *auStack_580;
extern unsigned int *auStack_5c0;
extern unsigned int *auStack_600;
extern unsigned int *auStack_680;
extern int fn_82F1A5F0();
extern int fn_82F1DE28();
extern int fn_82F45888();
extern unsigned int lbl_82162850;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


void fn_82F1EF70(int param_1, int param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned int param_8, unsigned __int64 unused_arg_9, unsigned int in_stack_0000005c, unsigned __int64 unused_arg_11, unsigned int in_stack_0000006c, int in_stack_00000074, unsigned int in_stack_0000007c, int in_stack_00000084, unsigned int in_stack_0000008c, int in_stack_00000094, int in_stack_0000009c, int in_stack_000000a4, unsigned int in_stack_000000ac)

{
  unsigned int uVar1;
  char cVar3;
  unsigned int uVar2;
  char cVar4;
  unsigned char bVar5;
  short *psVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  int iVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  int iVar15;
  unsigned char *pbVar16;
  int iVar17;
  int iVar18;
  short *psVar19;
  unsigned char *pbVar20;
  unsigned char *pbVar21;
  int iVar22;
  __int64 lVar23;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;

  short *in_stack_00000064;









  short *in_stack_000000b4;
  unsigned char auStack_680 [128];
  unsigned char auStack_600 [64];
  unsigned char auStack_5c0 [64];
  unsigned char auStack_580 [64];
  unsigned char auStack_540 [64];
  unsigned char auStack_500 [32];
  unsigned char auStack_4e0 [32];
  unsigned char auStack_4c0 [32];
  unsigned char auStack_4a0 [96];
  unsigned char auStack_440 [960];
  
  uStack0000003c = (unsigned int)param_6;
  uStack00000044 = (unsigned int)param_7;
  iVar7 = *(int *)(param_1 + 0x6d24) + *(int *)(param_2 + 0x60) * 0x34;
  uStack0000004c = param_8;
  if (*(int *)(param_1 + 0x7b38) != 0) {
    if (*(char *)(param_2 + 0x58) == '\x04') goto LAB_82f1efec;
    if (*(int *)(param_1 + 0x7b38) != 0) goto LAB_82f1f02c;
  }
  if ((*(char *)(param_2 + 0x58) != '\0') || (*(char *)(param_2 + 0x4a) == '\0')) {
LAB_82f1f02c:
    iVar14 = param_2 + 0x86;
    lVar23 = 6;
    puVar8 = (unsigned int *)(param_2 + 0x98);
    do {
      puVar8 = puVar8 + 1;
      *puVar8 = 0;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    puVar8 = (unsigned int *)(param_2 + 0xb0);
    lVar23 = 6;
    do {
      puVar8 = puVar8 + 1;
      *puVar8 = 0;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    puVar8 = (unsigned int *)(param_2 + 200);
    lVar23 = 6;
    do {
      puVar8 = puVar8 + 1;
      *puVar8 = 0;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    pbVar16 = (unsigned char *)(param_2 + 0x8c);
    puVar8 = (unsigned int *)(param_2 + 0xf8);
    lVar23 = 6;
    do {
      puVar8 = puVar8 + 1;
      *puVar8 = 0;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    iVar17 = param_2 + 0xb4;
    iVar10 = (param_2 + 4) - iVar17;
    iVar22 = 0;
    iVar11 = (param_2 + 0x80) - iVar14;
    uVar9 = (unsigned __int64)in_stack_0000006c;
    uVar12 = (unsigned __int64)in_stack_000000ac;
    iVar18 = iVar17;
    pbVar21 = pbVar16;
    while( true ) {
      if (*(char *)(param_2 + 0x4a + iVar22) == '\0') {
        fn_82F45888(param_6,0x10,auStack_680,auStack_440);
        uVar1 = (**(int (***)())(param_1 + 0x2010))
                          (param_1,in_stack_0000005c,in_stack_00000064,auStack_680,
                           *(unsigned int *)(param_1 + 0x2048),
                           iVar10 + iVar18 + ((param_2 + 0x9c) - (param_2 + 4)),0x40,
                           *(unsigned int *)(param_1 + 0x2070));
        *(unsigned int *)(iVar10 + iVar18) = uVar1;
        if (*(int *)(param_1 + 0x648) != 0) {
          if ((*(int *)(param_1 + 0x1db0) == 1) || (*in_stack_00000064 < 1)) {
            (pbVar21 + (iVar14 - (int)pbVar16))[iVar11] = 0;
            pbVar21[iVar14 - (int)pbVar16] = 0;
            *pbVar21 = 0;
          }
          else {
            (**(int (***)())(param_1 + 0x1f90))(param_6,0x10,auStack_680,auStack_440);
            pbVar20 = pbVar21 + (iVar14 - (int)pbVar16);
            cVar4 = (**(int (***)())(param_1 + 0x2010))
                              (param_1,uVar9,in_stack_00000074,auStack_600,
                               *(unsigned int *)(param_1 + 0x204c),iVar18,0x20,
                               *(unsigned int *)(param_1 + 0x2074));
            pbVar20[iVar11] = cVar4 << 1;
            bVar5 = (**(int (***)())(param_1 + 0x2010))
                              (param_1,in_stack_0000007c,in_stack_00000084,auStack_5c0,
                               *(unsigned int *)(param_1 + 0x204c),iVar18,0x20,
                               *(unsigned int *)(param_1 + 0x2074));
            pbVar20[iVar11] = bVar5 | pbVar20[iVar11];
            iVar15 = iVar18 + ((param_2 + 0xcc) - iVar17);
            cVar4 = (**(int (***)())(param_1 + 0x2010))
                              (param_1,in_stack_0000008c,in_stack_00000094,auStack_580,
                               *(unsigned int *)(param_1 + 0x2050),iVar15,0x20,
                               *(unsigned int *)(param_1 + 0x2078));
            *pbVar20 = cVar4 << 1;
            bVar5 = (**(int (***)())(param_1 + 0x2010))
                              (param_1,in_stack_0000009c,in_stack_000000a4,auStack_540,
                               *(unsigned int *)(param_1 + 0x2050),iVar15,0x20,
                               *(unsigned int *)(param_1 + 0x2078));
            iVar15 = iVar18 + ((param_2 + 0xfc) - iVar17);
            *pbVar20 = bVar5 | *pbVar20;
            cVar4 = (**(int (***)())(param_1 + 0x2010))
                              (param_1,uVar12,in_stack_000000b4,auStack_500,
                               *(unsigned int *)(param_1 + 0x2054),iVar15,0x10,
                               *(unsigned int *)(param_1 + 0x207c));
            *pbVar21 = cVar4 << 3;
            lVar23 = ((__int64)*in_stack_000000b4 & 0x7fffffffU) * 2 + uVar12;
            cVar4 = (**(int (***)())(param_1 + 0x2010))
                              (param_1,lVar23,in_stack_000000b4 + 1,auStack_4e0,
                               *(unsigned int *)(param_1 + 0x2054),iVar15,0x10,
                               *(unsigned int *)(param_1 + 0x207c));
            *pbVar21 = cVar4 << 2 | *pbVar21;
            lVar23 = ((__int64)in_stack_000000b4[1] & 0x7fffffffU) * 2 + lVar23;
            cVar4 = (**(int (***)())(param_1 + 0x2010))
                              (param_1,lVar23,in_stack_000000b4 + 2,auStack_4c0,
                               *(unsigned int *)(param_1 + 0x2054),iVar15,0x10,
                               *(unsigned int *)(param_1 + 0x207c));
            *pbVar21 = cVar4 << 1 | *pbVar21;
            bVar5 = (**(int (***)())(param_1 + 0x2010))
                              (param_1,((__int64)in_stack_000000b4[2] & 0x7fffffffU) * 2 + lVar23,
                               in_stack_000000b4 + 3,auStack_4a0,*(unsigned int *)(param_1 + 0x2054),
                               iVar15,0x10,*(unsigned int *)(param_1 + 0x207c));
            param_6 = (unsigned __int64)uStack0000003c;
            *pbVar21 = bVar5 | *pbVar21;
          }
        }
      }
      else {
        (**(int (***)())(param_1 + 0x1f88))();
        fn_82F1A5F0(param_1,iVar22,param_3,param_4,auStack_680,in_stack_0000005c,iVar7);
      }
      uVar1 = uStack00000044;
      iVar22 = iVar22 + 1;
      uVar13 = uVar12 + 0x100;
      in_stack_0000005c = in_stack_0000005c + 0x100;
      in_stack_0000007c = in_stack_0000007c + 0x80;
      in_stack_0000008c = in_stack_0000008c + 0x80;
      psVar6 = in_stack_00000064 + 1;
      uStack0000003c = *(int *)(&lbl_82162850 + (iVar18 - iVar17)) * 2 + (int)param_6;
      psVar19 = in_stack_000000b4 + 4;
      pbVar21 = pbVar21 + 1;
      iVar18 = iVar18 + 4;
      if (3 < iVar22) break;
      param_6 = (unsigned __int64)uStack0000003c;
      uVar9 = uVar9 + 0x80;
      uVar12 = uVar13;
      in_stack_000000b4 = psVar19;
      in_stack_00000064 = psVar6;
      in_stack_00000074 = in_stack_00000074 + 2;
      in_stack_00000084 = in_stack_00000084 + 2;
      in_stack_00000094 = in_stack_00000094 + 2;
      in_stack_0000009c = in_stack_0000009c + 0x80;
      in_stack_000000a4 = in_stack_000000a4 + 2;
    }
    cVar4 = *(char *)(param_2 + 0x4e);
    if (cVar4 == '\0') {
      (**(int (***)())(param_1 + 0x1f8c))(uStack00000044,8,auStack_680,auStack_440);
      uVar2 = (**(int (***)())(param_1 + 0x2010))
                        (param_1,in_stack_0000005c,psVar6,auStack_680,
                         *(unsigned int *)(param_1 + 0x2048),param_2 + 0xac,0x40,
                         *(unsigned int *)(param_1 + 0x2070));
      *(unsigned int *)(param_2 + 0x14) = uVar2;
      if (*(int *)(param_1 + 0x648) != 0) {
        if ((*(int *)(param_1 + 0x1db0) == 1) || (*psVar6 < 1)) {
          *(unsigned char *)(param_2 + 0x84) = 0;
          *(unsigned char *)(param_2 + 0x8a) = 0;
          *(unsigned char *)(param_2 + 0x90) = 0;
        }
        else {
          (**(int (***)())(param_1 + 0x1f90))(uVar1,8,auStack_680,auStack_440);
          cVar3 = (**(int (***)())(param_1 + 0x2010))
                            (param_1,uVar9 + 0x80,in_stack_00000074 + 2,auStack_600,
                             *(unsigned int *)(param_1 + 0x204c),param_2 + 0xc4,0x20,
                             *(unsigned int *)(param_1 + 0x2074));
          *(char *)(param_2 + 0x84) = cVar3 << 1;
          bVar5 = (**(int (***)())(param_1 + 0x2010))
                            (param_1,in_stack_0000007c,in_stack_00000084 + 2,auStack_5c0,
                             *(unsigned int *)(param_1 + 0x204c),param_2 + 0xc4,0x20,
                             *(unsigned int *)(param_1 + 0x2074));
          *(unsigned char *)(param_2 + 0x84) = bVar5 | *(unsigned char *)(param_2 + 0x84);
          cVar3 = (**(int (***)())(param_1 + 0x2010))
                            (param_1,in_stack_0000008c,in_stack_00000094 + 2,auStack_580,
                             *(unsigned int *)(param_1 + 0x2050),param_2 + 0xdc,0x20,
                             *(unsigned int *)(param_1 + 0x2078));
          *(char *)(param_2 + 0x8a) = cVar3 << 1;
          bVar5 = (**(int (***)())(param_1 + 0x2010))
                            (param_1,in_stack_0000009c + 0x80,in_stack_000000a4 + 2,auStack_540,
                             *(unsigned int *)(param_1 + 0x2050),param_2 + 0xdc,0x20,
                             *(unsigned int *)(param_1 + 0x2078));
          iVar14 = param_2 + 0x10c;
          *(unsigned char *)(param_2 + 0x8a) = bVar5 | *(unsigned char *)(param_2 + 0x8a);
          cVar3 = (**(int (***)())(param_1 + 0x2010))
                            (param_1,uVar13,psVar19,auStack_500,*(unsigned int *)(param_1 + 0x2054),
                             iVar14,0x10,*(unsigned int *)(param_1 + 0x207c));
          *(char *)(param_2 + 0x90) = cVar3 << 3;
          lVar23 = ((__int64)*psVar19 & 0x7fffffffU) * 2 + uVar13;
          cVar3 = (**(int (***)())(param_1 + 0x2010))
                            (param_1,lVar23,in_stack_000000b4 + 5,auStack_4e0,
                             *(unsigned int *)(param_1 + 0x2054),iVar14,0x10,
                             *(unsigned int *)(param_1 + 0x207c));
          *(unsigned char *)(param_2 + 0x90) = cVar3 << 2 | *(unsigned char *)(param_2 + 0x90);
          lVar23 = ((__int64)in_stack_000000b4[5] & 0x7fffffffU) * 2 + lVar23;
          cVar3 = (**(int (***)())(param_1 + 0x2010))
                            (param_1,lVar23,in_stack_000000b4 + 6,auStack_4c0,
                             *(unsigned int *)(param_1 + 0x2054),iVar14,0x10,
                             *(unsigned int *)(param_1 + 0x207c));
          *(unsigned char *)(param_2 + 0x90) = cVar3 << 1 | *(unsigned char *)(param_2 + 0x90);
          bVar5 = (**(int (***)())(param_1 + 0x2010))
                            (param_1,((__int64)in_stack_000000b4[6] & 0x7fffffffU) * 2 + lVar23,
                             in_stack_000000b4 + 7,auStack_4a0,*(unsigned int *)(param_1 + 0x2054),
                             iVar14,0x10,*(unsigned int *)(param_1 + 0x207c));
          *(unsigned char *)(param_2 + 0x90) = bVar5 | *(unsigned char *)(param_2 + 0x90);
        }
      }
    }
    else {
      (**(int (***)())(param_1 + 0x1f88))(uStack00000044,8,auStack_680,0);
      fn_82F1A5F0(param_1,4,param_3,param_4,auStack_680,in_stack_0000005c,iVar7);
    }
    uVar1 = uStack0000004c;
    if (cVar4 != '\0') {
      (**(int (***)())(param_1 + 0x1f88))(uStack0000004c,8,auStack_680,0);
      fn_82F1A5F0(param_1,5,param_3,param_4,auStack_680,(unsigned __int64)in_stack_0000005c + 0x100,
                        iVar7);
      return;
    }
    (**(int (***)())(param_1 + 0x1f8c))(uStack0000004c,8,auStack_680,auStack_440);
    uVar2 = (**(int (***)())(param_1 + 0x2010))
                      (param_1,(unsigned __int64)in_stack_0000005c + 0x100,in_stack_00000064 + 2,
                       auStack_680,*(unsigned int *)(param_1 + 0x2048),param_2 + 0xb0,0x40,
                       *(unsigned int *)(param_1 + 0x2070));
    *(unsigned int *)(param_2 + 0x18) = uVar2;
    if (*(int *)(param_1 + 0x648) == 0) {
      return;
    }
    if ((*(int *)(param_1 + 0x1db0) != 1) && (0 < in_stack_00000064[2])) {
      (**(int (***)())(param_1 + 0x1f90))(uVar1,8,auStack_680,auStack_440);
      cVar4 = (**(int (***)())(param_1 + 0x2010))
                        (param_1,uVar9 + 0x100,in_stack_00000074 + 4,auStack_600,
                         *(unsigned int *)(param_1 + 0x204c),param_2 + 200,0x20,
                         *(unsigned int *)(param_1 + 0x2074));
      *(char *)(param_2 + 0x85) = cVar4 << 1;
      bVar5 = (**(int (***)())(param_1 + 0x2010))
                        (param_1,(unsigned __int64)in_stack_0000007c + 0x80,in_stack_00000084 + 4,
                         auStack_5c0,*(unsigned int *)(param_1 + 0x204c),param_2 + 200,0x20,
                         *(unsigned int *)(param_1 + 0x2074));
      *(unsigned char *)(param_2 + 0x85) = bVar5 | *(unsigned char *)(param_2 + 0x85);
      cVar4 = (**(int (***)())(param_1 + 0x2010))
                        (param_1,(unsigned __int64)in_stack_0000008c + 0x80,in_stack_00000094 + 4,
                         auStack_580,*(unsigned int *)(param_1 + 0x2050),param_2 + 0xe0,0x20,
                         *(unsigned int *)(param_1 + 0x2078));
      *(char *)(param_2 + 0x8b) = cVar4 << 1;
      bVar5 = (**(int (***)())(param_1 + 0x2010))
                        (param_1,in_stack_0000009c + 0x100,in_stack_000000a4 + 4,auStack_540,
                         *(unsigned int *)(param_1 + 0x2050),param_2 + 0xe0,0x20,
                         *(unsigned int *)(param_1 + 0x2078));
      iVar7 = param_2 + 0x110;
      *(unsigned char *)(param_2 + 0x8b) = bVar5 | *(unsigned char *)(param_2 + 0x8b);
      cVar4 = (**(int (***)())(param_1 + 0x2010))
                        (param_1,uVar12 + 0x200,in_stack_000000b4 + 8,auStack_500,
                         *(unsigned int *)(param_1 + 0x2054),iVar7,0x10,
                         *(unsigned int *)(param_1 + 0x207c));
      *(char *)(param_2 + 0x91) = cVar4 << 3;
      lVar23 = ((__int64)in_stack_000000b4[8] & 0x7fffffffU) * 2 + uVar12 + 0x200;
      cVar4 = (**(int (***)())(param_1 + 0x2010))
                        (param_1,lVar23,in_stack_000000b4 + 9,auStack_4e0,
                         *(unsigned int *)(param_1 + 0x2054),iVar7,0x10,
                         *(unsigned int *)(param_1 + 0x207c));
      *(unsigned char *)(param_2 + 0x91) = cVar4 << 2 | *(unsigned char *)(param_2 + 0x91);
      lVar23 = ((__int64)in_stack_000000b4[9] & 0x7fffffffU) * 2 + lVar23;
      cVar4 = (**(int (***)())(param_1 + 0x2010))
                        (param_1,lVar23,in_stack_000000b4 + 10,auStack_4c0,
                         *(unsigned int *)(param_1 + 0x2054),iVar7,0x10,
                         *(unsigned int *)(param_1 + 0x207c));
      *(unsigned char *)(param_2 + 0x91) = cVar4 << 1 | *(unsigned char *)(param_2 + 0x91);
      bVar5 = (**(int (***)())(param_1 + 0x2010))
                        (param_1,((__int64)in_stack_000000b4[10] & 0x7fffffffU) * 2 + lVar23,
                         in_stack_000000b4 + 0xb,auStack_4a0,*(unsigned int *)(param_1 + 0x2054),iVar7
                         ,0x10,*(unsigned int *)(param_1 + 0x207c));
      *(unsigned char *)(param_2 + 0x91) = bVar5 | *(unsigned char *)(param_2 + 0x91);
      return;
    }
    *(unsigned char *)(param_2 + 0x85) = 0;
    *(unsigned char *)(param_2 + 0x8b) = 0;
    *(unsigned char *)(param_2 + 0x91) = 0;
    return;
  }
LAB_82f1efec:
  fn_82F1DE28(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

