typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82E39CE8();
extern int fn_82E4FE40();
extern int fn_82E763E8();
extern int fn_82E76510();
extern int fn_82E76570();
extern int fn_82E76638();
extern int fn_82F691F0();
extern unsigned int iStack_b0;
extern unsigned int lbl_8214C2C0;
extern unsigned int lbl_8214C2D0;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_ac;


__int64 fn_82E779A0(int param_1,short param_2,int *param_3,unsigned short *param_4,unsigned short *param_5,
                      unsigned int param_6)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  short *psVar4;
  int iVar5;
  unsigned __int64 uVar6;
  bool bVar7;
  unsigned short *puVar8;
  unsigned __int64 uVar9;
  unsigned char *pbVar10;
  unsigned char *pbVar11;
  unsigned short *puVar12;
  unsigned short uVar13;
  unsigned short *puVar14;
  unsigned __int64 uVar15;
  __int64 lVar17;
  int (**pcVar18)();
  int iStack_b0;
  unsigned int uStack_ac;
  unsigned short *apuStack_a8 [2];
  unsigned char abStack_a0 [4];
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned short uStack_90;
  unsigned short uVar16;
  
  if (((param_3 == (int *)0x0) || (param_4 == (unsigned short *)0x0)) || (param_5 == (unsigned short *)0x0)) {
    return -0x7fffbffd;
  }
  psVar4 = *(short **)(param_1 + 8);
  uVar15 = 8;
  uVar16 = 8;
  iStack_b0 = 0;
  lVar17 = 0;
  puVar14 = (unsigned short *)((param_6 & 0xffff) + (int)param_5);
  for (; apuStack_a8[0] = param_5, psVar4 != (short *)0x0; psVar4 = *(short **)(psVar4 + 4)) {
    if (*psVar4 == param_2) {
      iVar5 = *(int *)(psVar4 + 2);
      if (iVar5 != 0) {
        uVar3 = *(unsigned short *)(iVar5 + 4);
        uVar13 = 0;
        if (uVar3 != 0) {
          goto LAB_82e77a58;
        }
      }
      break;
    }
  }
  goto LAB_82e77c80;
LAB_82e77a58:
  do {
    puVar8 = apuStack_a8[0];
    uVar16 = (unsigned short)uVar15;
    bVar7 = false;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    lVar17 = fn_82E76510(iVar5,uVar13,abStack_a0);
    if (lVar17 < 0) goto LAB_82e77c84;
    pbVar10 = abStack_a0;
    pbVar11 = &lbl_8214C2C0;
    do {
      bVar1 = *pbVar11;
      bVar2 = *pbVar10;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar11 = pbVar11 + 1;
      pbVar10 = pbVar10 + 1;
    } while (pbVar11 != &lbl_8214C2D0);
    pcVar18 = *(int (***)())(*param_3 + 0x40);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      lVar17 = (*pcVar18)(param_3,0xffffffff8215388c,&iStack_b0,&uStack_ac);
      if (lVar17 < 0) {
        pcVar18 = *(int (***)())(*param_3 + 0x40);
        goto LAB_82e77b00;
      }
    }
    else {
LAB_82e77b00:
      lVar17 = (*pcVar18)(param_3,abStack_a0,&iStack_b0,&uStack_ac);
      if (((int)lVar17 < 0) && ((int)lVar17 != -0x3ff2c91a)) break;
    }
    if ((int)lVar17 == -0x3ff2c91a) {
      lVar17 = fn_82E76638(iVar5,uVar13,&iStack_b0,&uStack_ac);
      if (lVar17 < 0) goto LAB_82e77c84;
      bVar7 = true;
    }
    if ((uStack_ac != 0) && (iStack_b0 == 0)) {
      lVar17 = -0x3ff2c945;
      break;
    }
    uVar9 = (unsigned __int64)uStack_90;
    uVar6 = (unsigned __int64)uStack_ac & 0xffff;
    if (uVar9 == 0xffff) {
      puVar12 = puVar8 + 1;
      lVar17 = 0;
      uVar15 = uVar15 + 2 & 0xffff;
      if (puVar14 < puVar12) {
        lVar17 = -0x7fff0001;
      }
      else {
        *puVar8 = (unsigned short)(((unsigned __int64)uStack_ac & 0xff) << 8) | (unsigned short)(uVar6 >> 8);
        apuStack_a8[0] = puVar12;
      }
      if ((int)lVar17 < 0) goto LAB_82e77c84;
      if ((uStack_ac & 0xffff) != 0) {
        uVar15 = uVar15 + uVar6 & 0xffff;
        lVar17 = fn_82E39CE8(iStack_b0,apuStack_a8,uVar6,puVar14);
LAB_82e77c44:
        if (lVar17 < 0) goto LAB_82e77c84;
      }
    }
    else {
      uVar15 = uVar15 + uVar9 & 0xffff;
      if (uVar9 == uVar6) {
        if ((uStack_ac & 0xffff) != 0) {
          lVar17 = fn_82E39CE8(iStack_b0,apuStack_a8,uVar6,puVar14);
          if (lVar17 < 0) goto LAB_82e77c84;
          if (!bVar7) {
            lVar17 = fn_82E76570(iVar5,uVar13,iStack_b0,uStack_ac);
            goto LAB_82e77c44;
          }
        }
      }
      else {
        if ((uVar9 != 0) && ((uStack_ac & 0xffff) == 0)) {
          lVar17 = fn_82E763E8(apuStack_a8,uVar9,puVar14);
          goto LAB_82e77c44;
        }
        lVar17 = -0x3ff2c945;
      }
    }
    uVar16 = (unsigned short)uVar15;
    uVar13 = uVar13 + 1;
  } while (uVar13 < uVar3);
  if ((int)lVar17 < 0) goto LAB_82e77c84;
LAB_82e77c80:
  *param_4 = uVar16;
LAB_82e77c84:
  fn_82E4FE40(iStack_b0);
  if (-1 < (int)lVar17) {
    return lVar17;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_5,0,*param_4);
}

