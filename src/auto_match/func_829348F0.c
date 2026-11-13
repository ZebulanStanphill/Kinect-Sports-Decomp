extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern int fn_828F0170();
extern int fn_828FA8D8();
extern int fn_82934408();
extern int fn_82934720();
extern int fn_82934858();
extern int fn_829352D0();
extern int fn_82958638();
extern int fn_829873C0();
extern int fn_82F65B18();
extern int fn_82F66A80();
extern int fn_82F6DF30();
extern unsigned int iStack_e0;
extern unsigned int lbl_8202C724;
extern unsigned int lbl_8202C726;
extern unsigned int lbl_8202C728;
extern unsigned int lbl_8202C72A;
extern unsigned int lbl_8202C72C;
extern unsigned int lbl_8202C72E;
extern unsigned int lbl_8202C730;
extern unsigned int lbl_8202C732;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b6;
extern unsigned int uStack_b8;
extern unsigned int uStack_ba;
extern unsigned int uStack_bc;
extern unsigned int uStack_be;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_dc;


unsigned __int64
fn_829348F0(int *param_1,unsigned __int64 param_2,int param_3,unsigned char *param_4,unsigned short param_5,
             unsigned int param_6)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar5;
  int iVar6;
  unsigned char bVar8;
  int iVar7;
  unsigned __int64 uVar4;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  char cVar13;
  unsigned char *pbVar11;
  unsigned char *pbVar12;
  unsigned char *puVar14;
  unsigned char *puVar15;
  unsigned char *puVar16;
  unsigned char *puVar17;
  unsigned char *puVar18;
  char *pcVar19;
  int iStack_e0;
  unsigned int uStack_dc;
  unsigned int auStack_d8 [2];
  unsigned char auStack_d0 [4];
  unsigned int uStack_cc;
  unsigned short uStack_c0;
  unsigned short uStack_be;
  unsigned short uStack_bc;
  unsigned short uStack_ba;
  unsigned short uStack_b8;
  unsigned short uStack_b6;
  unsigned int uStack_b4;
  unsigned int auStack_b0 [2];
  unsigned char *pbStack_a8;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  
  pbVar9 = &lbl_8202C730;
  iStack_e0 = 0;
  pbVar10 = param_4;
  do {
    bVar8 = *pbVar9;
    bVar1 = *pbVar10;
    if ((unsigned __int64)bVar8 - (unsigned __int64)bVar1 != 0) break;
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar10 + 1;
  } while (pbVar9 != &lbl_8202C732);
  pbVar12 = &lbl_8202C728;
  pbVar11 = &lbl_8202C724;
  pbVar10 = pbVar11;
  pbVar9 = param_4;
  if ((int)((unsigned __int64)bVar8 - (unsigned __int64)bVar1) == 0) {
LAB_82934a58:
    pbVar10 = param_4 + 2;
    auStack_b0[0] = 10;
    uStack_a0 = 0;
    uStack_9c = 0;
    pbStack_a8 = pbVar10;
    fn_829873C0(*param_1,1,auStack_b0,0,0,param_1[1],2,&iStack_e0);
    uVar3 = fn_82934408(*(unsigned int *)(iStack_e0 + 0x30),&uStack_dc,auStack_d8);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    iVar7 = *(int *)(iStack_e0 + 0x40);
    if (iVar7 == 0) {
LAB_82934c90:
      if ((*(unsigned int *)(iStack_e0 + 0x2c) & 2) != 0) {
        *(unsigned short *)(param_3 + 10) = *(unsigned short *)(param_3 + 10) | 1;
      }
      if (*(int *)(iStack_e0 + 0x38) == 0) {
        if (*(int *)(iStack_e0 + 0x34) != 0) {
          uVar2 = *(unsigned int *)(iStack_e0 + 0x34);
          goto LAB_82934d48;
        }
        if ((*(unsigned short *)(param_3 + 10) & 1) != 0) {
          uVar3 = fn_82934858(param_2,uStack_dc,param_3 + 0x10);
          goto LAB_82934cdc;
        }
      }
      else {
        uVar2 = *(unsigned int *)(iStack_e0 + 0x38);
LAB_82934d48:
        uVar3 = fn_82934720(param_2,uStack_dc,auStack_d8[0],uVar2,param_3 + 0x10);
LAB_82934cdc:
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      if ((*(int *)(*(int *)(iStack_e0 + 0x30) + 4) != 9) ||
         (*(int *)(*(int *)(iStack_e0 + 0x30) + 0x14) != 0x21)) {
        uVar3 = fn_82958638(param_2,*(unsigned int *)(iStack_e0 + 0x30),1,0,param_3 + 0xc);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        goto LAB_82934d80;
      }
      fn_828FA8D8((unsigned __int64)*(unsigned int *)(*param_1 + 4) + 0x18,0,0xb59,0xffffffff8202f2b8,pbVar10
                       );
    }
    else {
      puVar15 = (unsigned char *)0x0;
      puVar14 = (unsigned char *)0x0;
      puVar16 = (unsigned char *)0x0;
      if (iVar7 == 0) {
LAB_82934bc4:
        puVar17 = puVar15;
        if ((puVar15 == (unsigned char *)0x0) && (puVar17 = puVar14, puVar14 == (unsigned char *)0x0))
        goto LAB_82934c90;
      }
      else {
        do {
          iVar6 = *(int *)(iVar7 + 8);
          puVar17 = puVar16;
          if (*(int *)(iVar6 + 4) == 0x12) {
            iVar5 = 0;
            if (*(int *)(iVar6 + 0x10) != 0) {
              iVar5 = *(int *)(*(int *)(iVar6 + 0x10) + 0x18);
            }
            puVar18 = (unsigned char *)0x0;
            if (*(int *)(iVar6 + 0x14) != 0) {
              puVar18 = *(unsigned char **)(*(int *)(iVar6 + 0x14) + 0x18);
            }
            if (iVar5 == 0) {
              if ((puVar18 != (unsigned char *)0x0) &&
                 (bVar8 = fn_82F6DF30(*puVar18), bVar8 == *param_4)) {
                puVar14 = puVar18;
              }
            }
            else {
              iVar6 = fn_828F0170(iVar5,0,auStack_d0);
              if (((((-1 < iVar6) && (puVar18 != (unsigned char *)0x0)) &&
                   (bVar8 = fn_82F6DF30(*puVar18), bVar8 == *param_4)) &&
                  ((puVar17 = puVar18, (param_6 | 0x80000000) != uStack_cc &&
                   (puVar17 = puVar16, ((uStack_cc ^ (param_6 | 0x80000000)) & 0xffff0000) == 0))))
                 && ((uStack_cc & 0xffff) == 0)) {
                puVar15 = puVar18;
              }
            }
          }
          iVar7 = *(int *)(iVar7 + 0xc);
          puVar16 = puVar17;
        } while (iVar7 != 0);
        if (puVar17 == (unsigned char *)0x0) goto LAB_82934bc4;
      }
      bVar8 = fn_82F6DF30(*puVar17);
      if (*param_4 != bVar8) goto LAB_82934c90;
      iVar7 = fn_82F66A80(puVar17[1]);
      if (iVar7 == 0) goto LAB_82934c90;
      cVar13 = puVar17[2];
      pcVar19 = puVar17 + 2;
      while (iVar7 = fn_82F66A80(cVar13), iVar7 != 0) {
        pcVar19 = pcVar19 + 1;
        cVar13 = *pcVar19;
      }
      if (*pcVar19 != '\0') goto LAB_82934c90;
      uVar4 = fn_82F65B18(puVar17 + 1);
      if ((uVar4 & 0xffffffff) < 0x2000) {
        *(unsigned short *)(param_3 + 10) =
             (unsigned short)((uVar4 & 0xffffffff) << 2) | *(unsigned short *)(param_3 + 10) | 2;
        goto LAB_82934c90;
      }
      fn_828FA8D8((unsigned __int64)*(unsigned int *)(*param_1 + 4) + 0x18,0,0xb56,0xffffffff8202f328,pbVar10
                       );
    }
    uVar3 = 0xffffffff80004005;
  }
  else {
    do {
      bVar8 = *pbVar10;
      bVar1 = *pbVar9;
      if ((unsigned __int64)bVar8 - (unsigned __int64)bVar1 != 0) break;
      pbVar10 = pbVar10 + 1;
      pbVar9 = pbVar9 + 1;
    } while (pbVar10 != &lbl_8202C726);
    pbVar10 = pbVar12;
    pbVar9 = param_4;
    if ((int)((unsigned __int64)bVar8 - (unsigned __int64)bVar1) == 0) goto LAB_82934a58;
    do {
      bVar8 = *pbVar10;
      bVar1 = *pbVar9;
      if ((unsigned __int64)bVar8 - (unsigned __int64)bVar1 != 0) break;
      pbVar10 = pbVar10 + 1;
      pbVar9 = pbVar9 + 1;
    } while (pbVar10 != &lbl_8202C72A);
    if ((int)((unsigned __int64)bVar8 - (unsigned __int64)bVar1) == 0) goto LAB_82934a58;
    pbVar9 = &lbl_8202C72C;
    pbVar10 = param_4;
    do {
      bVar8 = *pbVar9;
      bVar1 = *pbVar10;
      if ((unsigned __int64)bVar8 - (unsigned __int64)bVar1 != 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
    } while (pbVar9 != &lbl_8202C72E);
    if ((int)((unsigned __int64)bVar8 - (unsigned __int64)bVar1) == 0) goto LAB_82934a58;
    uStack_c0 = 1;
    uStack_bc = 1;
    uStack_be = 3;
    uStack_ba = 4;
    uStack_b8 = 1;
    uStack_b6 = 0;
    uStack_b4 = 0;
    uVar3 = fn_829352D0(param_2,&uStack_c0,0x10,6,param_3 + 0xc,4);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uStack_dc = 1;
LAB_82934d80:
    uVar3 = fn_829352D0(param_2,param_4,0xffffffffffffffff,7,param_3,1);
    pbVar10 = param_4;
    if (-1 < (int)uVar3) {
      do {
        bVar8 = *pbVar11;
        bVar1 = *pbVar10;
        if ((unsigned __int64)bVar8 - (unsigned __int64)bVar1 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar10 = pbVar10 + 1;
      } while (pbVar11 != &lbl_8202C726);
      if ((int)((unsigned __int64)bVar8 - (unsigned __int64)bVar1) == 0) {
        *(unsigned short *)(param_3 + 4) = 0;
      }
      else {
        do {
          bVar8 = *pbVar12;
          bVar1 = *param_4;
          if ((unsigned __int64)bVar8 - (unsigned __int64)bVar1 != 0) break;
          pbVar12 = pbVar12 + 1;
          param_4 = param_4 + 1;
        } while (pbVar12 != &lbl_8202C72A);
        if ((int)((unsigned __int64)bVar8 - (unsigned __int64)bVar1) == 0) {
          *(unsigned short *)(param_3 + 4) = 1;
        }
        else {
          *(unsigned short *)(param_3 + 4) = 2;
        }
      }
      *(unsigned short *)(param_3 + 6) = param_5;
      *(short *)(param_3 + 8) = (short)uStack_dc;
    }
  }
  return uVar3;
}

