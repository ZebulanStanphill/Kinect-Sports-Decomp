extern unsigned int *auStack_260;
extern unsigned int *auStack_270;
extern unsigned int *auStack_27c;
extern unsigned int *auStack_2bc;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int iStack_280;
extern unsigned int iStack_284;
extern unsigned int iStack_288;
extern unsigned int iStack_28c;
extern unsigned int iStack_290;
extern unsigned int iStack_298;
extern unsigned int iStack_29c;
extern unsigned int iStack_2a0;
extern unsigned int iStack_2a8;
extern unsigned int iStack_2ac;
extern unsigned int iStack_2b0;
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_2b8;
extern unsigned int uStack_2bd;
extern unsigned int uStack_2be;
extern unsigned int uStack_2bf;
extern unsigned int uStack_2c0;


unsigned char * fn_82DE1D50(unsigned char *param_1,int param_2,int *param_3,unsigned char *param_4,int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned __int64 in_r0;
  int iVar6;
  char *pcVar7;
  unsigned char *puVar8;
  unsigned int uVar9;
  unsigned __int64 *puVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  int iVar13;
  unsigned int uVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  unsigned char *pbVar18;
  __int64 lVar19;
  unsigned char uStack_2c0;
  unsigned char uStack_2bf;
  unsigned char uStack_2be;
  unsigned char uStack_2bd;
  unsigned char auStack_2bc [4];
  unsigned __int64 uStack_2b8;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  int iStack_280;
  unsigned int auStack_27c [3];
  unsigned char auStack_270 [16];
  unsigned char auStack_260 [560];
  
LAB_82de1d84:
  bVar1 = *param_4;
  uVar12 = (unsigned __int64)bVar1;
  if (0x70 < uVar12) {
switchD_82de1da4_caseD_8:
    fn_82CEE578(auStack_270,auStack_260,0x200);
    fn_82CEDB38(auStack_270,0xffffffff82142a88);
    iVar6 = (**(int (***)())(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x1298fedd,auStack_260,0xffffffff82142e14,0x125);
    if (iVar6 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_270);
  }
  in_r0 = (unsigned __int64)*(unsigned int *)((unsigned int)bVar1 * 4 + -0x7d21e258);
  switch(bVar1) {
  case 0:
    goto switchD_82de1da4_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
    iStack_290 = (unsigned int)param_4[1] + param_3[8] << (bVar1 & 0x3f);
    iStack_28c = (unsigned int)param_4[2] + param_3[9] << (bVar1 & 0x3f);
    iStack_288 = (unsigned int)param_4[3] + param_3[10] << (bVar1 & 0x3f);
    param_4 = param_4 + 4;
    iStack_280 = param_3[0xc] + (unsigned int)bVar1;
    uVar9 = 0x10 - iStack_280;
    iStack_29c = (*(int *)(param_2 + 0x24) >> (uVar9 & 0x3f)) - iStack_28c;
    iStack_298 = (*(int *)(param_2 + 0x28) >> (uVar9 & 0x3f)) - iStack_288;
    iStack_2a8 = ((*(int *)(param_2 + 0x18) >> (uVar9 & 0x3f)) - iStack_288) + 1;
    iStack_2a0 = (*(int *)(param_2 + 0x20) >> (uVar9 & 0x3f)) - iStack_290;
    iStack_2b0 = ((*(int *)(param_2 + 0x10) >> (uVar9 & 0x3f)) - iStack_290) + 1;
    iStack_2ac = ((*(int *)(param_2 + 0x14) >> (uVar9 & 0x3f)) - iStack_28c) + 1;
    auStack_27c[0] = param_3[0xd];
    iStack_284 = param_3[0xb];
    param_3 = &iStack_2b0;
    goto LAB_82de1d84;
  case 5:
    param_4 = param_4 + param_4[1] + 2;
    goto LAB_82de1d84;
  case 6:
    param_4 = param_4 + (unsigned int)param_4[1] * 0x100 + (unsigned int)param_4[2] + 3;
    goto LAB_82de1d84;
  case 7:
    param_4 = param_4 + ((unsigned int)param_4[1] * 0x100 + (unsigned int)param_4[2]) * 0x100 + (unsigned int)param_4[3] + 4
    ;
    goto LAB_82de1d84;
  case 8:
  case 0xe:
  case 0xf:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
    goto switchD_82de1da4_caseD_8;
  case 9:
    bVar1 = param_4[1];
    if (param_3 != &iStack_2b0) {
      puVar10 = &uStack_2b8;
      param_3 = param_3 + -2;
      lVar19 = 8;
      do {
        param_3 = param_3 + 2;
        puVar10 = puVar10 + 1;
        *puVar10 = *(unsigned __int64 *)param_3;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      param_3 = &iStack_2b0;
    }
    param_4 = param_4 + 2;
    iStack_284 = (unsigned int)bVar1 + iStack_284;
    goto LAB_82de1d84;
  case 10:
    bVar1 = param_4[1];
    bVar2 = param_4[2];
    if (param_3 != &iStack_2b0) {
      puVar10 = &uStack_2b8;
      param_3 = param_3 + -2;
      lVar19 = 8;
      do {
        param_3 = param_3 + 2;
        puVar10 = puVar10 + 1;
        *puVar10 = *(unsigned __int64 *)param_3;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      param_3 = &iStack_2b0;
    }
    param_4 = param_4 + 3;
    iStack_284 = (unsigned int)bVar1 * 0x100 + (unsigned int)bVar2 + iStack_284;
    goto LAB_82de1d84;
  case 0xb:
    iStack_284 = (((unsigned int)param_4[1] * 0x100 + (unsigned int)param_4[2]) * 0x100 + (unsigned int)param_4[3]) * 0x100
                 + (unsigned int)param_4[4];
    if (param_3 != &iStack_2b0) {
      puVar10 = &uStack_2b8;
      param_3 = param_3 + -2;
      lVar19 = 8;
      do {
        param_3 = param_3 + 2;
        puVar10 = puVar10 + 1;
        *puVar10 = *(unsigned __int64 *)param_3;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      param_3 = &iStack_2b0;
    }
  case 0xd:
    param_4 = param_4 + 5;
    goto LAB_82de1d84;
  case 0xc:
    param_5 = (unsigned int)*(unsigned short *)(param_4 + 1) * 0x200;
    param_4 = (unsigned char *)(*(int *)(*(int *)(param_2 + 0x30) + 0x20) + param_5);
    goto LAB_82de1d84;
  case 0x10:
  case 0x11:
  case 0x12:
    uVar9 = (unsigned int)param_4[1];
    uVar11 = (unsigned int)param_4[2];
    pbVar18 = param_4 + 4;
    iVar17 = 0;
    iVar6 = *(int *)((int)((uVar12 - 0xc & 0xffffffff) << 2) + (int)param_3);
    iVar13 = *(int *)((int)((uVar12 - 0x10 & 0xffffffff) << 2) + (int)param_3);
    uVar14 = (unsigned int)param_4[3];
    break;
  case 0x13:
    iVar17 = 0;
    pbVar18 = param_4 + 4;
    uVar9 = (unsigned int)param_4[1] << 1;
    uVar11 = (unsigned int)param_4[2] << 1;
    iVar6 = param_3[6] + param_3[5];
    uVar14 = (unsigned int)param_4[3];
    iVar13 = param_3[2] + param_3[1];
    break;
  case 0x14:
    iVar17 = 0;
    pbVar18 = param_4 + 4;
    uVar9 = (unsigned int)param_4[1] * 2 - 0xff;
    uVar11 = (unsigned int)param_4[2] * 2 - 0xff;
    uVar14 = (unsigned int)param_4[3];
    iVar6 = param_3[5] - param_3[2];
    iVar13 = param_3[1] - param_3[6];
    break;
  case 0x15:
    iVar17 = 0;
    pbVar18 = param_4 + 4;
    uVar9 = (unsigned int)param_4[1] << 1;
    uVar11 = (unsigned int)param_4[2] << 1;
    iVar6 = param_3[6] + param_3[4];
    uVar14 = (unsigned int)param_4[3];
    iVar13 = param_3[2] + *param_3;
    break;
  case 0x16:
    iVar17 = 0;
    pbVar18 = param_4 + 4;
    uVar9 = (unsigned int)param_4[1] * 2 - 0xff;
    uVar11 = (unsigned int)param_4[2] * 2 - 0xff;
    uVar14 = (unsigned int)param_4[3];
    iVar6 = param_3[4] - param_3[2];
    iVar13 = *param_3 - param_3[6];
    break;
  case 0x17:
    iVar17 = 0;
    pbVar18 = param_4 + 4;
    uVar9 = (unsigned int)param_4[1] << 1;
    uVar11 = (unsigned int)param_4[2] << 1;
    iVar6 = param_3[5] + param_3[4];
    uVar14 = (unsigned int)param_4[3];
    iVar13 = param_3[1] + *param_3;
    break;
  case 0x18:
    iVar17 = 0;
    pbVar18 = param_4 + 4;
    uVar9 = (unsigned int)param_4[1] * 2 - 0xff;
    uVar11 = (unsigned int)param_4[2] * 2 - 0xff;
    uVar14 = (unsigned int)param_4[3];
    iVar6 = param_3[4] - param_3[1];
    iVar13 = *param_3 - param_3[5];
    break;
  case 0x19:
    iVar17 = 0;
    pbVar18 = param_4 + 4;
    uVar9 = (unsigned int)param_4[1] * 3;
    uVar11 = (unsigned int)param_4[2] * 3;
    uVar14 = (unsigned int)param_4[3];
    iVar6 = param_3[6] + param_3[5] + param_3[4];
    iVar13 = param_3[2] + param_3[1] + *param_3;
    break;
  case 0x1a:
    iVar17 = 0;
    iVar13 = (param_3[1] - param_3[6]) + *param_3;
    pbVar18 = param_4 + 4;
    iVar6 = (param_3[5] - param_3[2]) + param_3[4];
    uVar9 = (param_4[1] - 0x55) * 3;
    uVar14 = (unsigned int)param_4[3];
    uVar11 = (param_4[2] - 0x55) * 3;
    break;
  case 0x1b:
    iVar17 = 0;
    iVar13 = (param_3[2] - param_3[5]) + *param_3;
    pbVar18 = param_4 + 4;
    iVar6 = (param_3[6] - param_3[1]) + param_3[4];
    uVar9 = (param_4[1] - 0x55) * 3;
    uVar14 = (unsigned int)param_4[3];
    uVar11 = (param_4[2] - 0x55) * 3;
    break;
  case 0x1c:
    pbVar18 = param_4 + 4;
    iVar6 = (param_3[4] - param_3[2]) - param_3[1];
    uVar14 = (unsigned int)param_4[3];
    uVar9 = (param_4[1] - 0xaa) * 3;
    iVar13 = (*param_3 - param_3[6]) - param_3[5];
    uVar11 = (param_4[2] - 0xaa) * 3;
    iVar17 = 0;
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    uVar11 = (unsigned int)param_4[1];
    pbVar18 = param_4 + 3;
    uVar9 = uVar11 + 1;
    iVar17 = 0;
    iVar6 = *(int *)((int)((uVar12 - 0x1c & 0xffffffff) << 2) + (int)param_3);
    iVar13 = *(int *)((int)((uVar12 - 0x20 & 0xffffffff) << 2) + (int)param_3);
    uVar14 = (unsigned int)param_4[2];
    break;
  case 0x23:
  case 0x24:
  case 0x25:
    uVar9 = (unsigned int)param_4[1];
    uVar11 = (unsigned int)param_4[2];
    iVar17 = (unsigned int)param_4[3] * 0x100 + (unsigned int)param_4[4];
    uVar14 = (unsigned int)param_4[5] * 0x100 + (unsigned int)param_4[6];
    iVar6 = *(int *)((int)((uVar12 - 0x1f & 0xffffffff) << 2) + (int)param_3);
    iVar13 = *(int *)((int)((uVar12 - 0x23 & 0xffffffff) << 2) + (int)param_3);
    pbVar18 = param_4 + 7;
    break;
  case 0x26:
  case 0x27:
  case 0x28:
    if ((*(int *)((int)((uVar12 - 0x26 & 0xffffffff) << 2) + (int)param_3) < (int)(unsigned int)param_4[1])
       || ((int)(unsigned int)param_4[2] <=
           *(int *)((int)((uVar12 - 0x22 & 0xffffffff) << 2) + (int)param_3))) goto LAB_82de273c;
    param_4 = param_4 + 3;
    goto LAB_82de1d84;
  case 0x29:
  case 0x2a:
  case 0x2b:
    if ((*(int *)((int)((uVar12 - 0x25 & 0xffffffff) << 2) + param_2) <
         (int)(((unsigned int)param_4[1] * 0x100 + (unsigned int)param_4[2]) * 0x100 + (unsigned int)param_4[3])) ||
       ((int)(((unsigned int)param_4[5] + (unsigned int)param_4[4] * 0x100) * 0x100 + (unsigned int)param_4[6]) <
        *(int *)((int)((uVar12 - 0x21 & 0xffffffff) << 2) + param_2))) goto LAB_82de273c;
    param_4 = param_4 + 7;
    goto LAB_82de1d84;
  default:
    uVar12 = uVar12 - 0x30;
    goto LAB_82de28b4;
  case 0x50:
    uVar12 = (unsigned __int64)param_4[1];
    goto LAB_82de28b4;
  case 0x51:
    uVar12 = (unsigned __int64)param_4[1] * 0x100 + (unsigned __int64)param_4[2];
    goto LAB_82de28b4;
  case 0x52:
    uVar12 = ((unsigned __int64)param_4[1] * 0x100 + (unsigned __int64)param_4[2]) * 0x100 + (unsigned __int64)param_4[3]
    ;
    goto LAB_82de28b4;
  case 0x53:
    uVar12 = (((unsigned __int64)param_4[1] * 0x100 + (unsigned __int64)param_4[2]) * 0x100 +
             (unsigned __int64)param_4[3]) * 0x100 + (unsigned __int64)param_4[4];
LAB_82de28b4:
    puVar8 = (unsigned char *)
             (**(int (***)())(**(int **)(param_2 + 0x44) + 4))
                       (&uStack_2bf,*(int **)(param_2 + 0x44),
                        ((unsigned __int64)(unsigned int)(param_5 >> 9) & 0xffffff) << 8 &
                        (unsigned __int64)*(unsigned int *)(param_2 + 0x48) | (unsigned int)param_3[0xb] + uVar12,
                        param_3 + 0xd);
    *(unsigned char *)(param_2 + 0x40) = *puVar8;
switchD_82de1da4_caseD_0:
    *param_1 = *(unsigned char *)(param_2 + 0x40);
    return param_1;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    pbVar18 = param_4 + 1;
    param_4 = param_4 + 2;
    *(unsigned int *)((int)auStack_27c + (int)((uVar12 - 0x60 & 0xffffffff) << 2)) = (unsigned int)*pbVar18;
    goto LAB_82de2304;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    pbVar18 = param_4 + 1;
    pbVar3 = param_4 + 2;
    param_4 = param_4 + 3;
    *(unsigned int *)((int)auStack_27c + (int)((uVar12 - 100 & 0xffffffff) << 2)) =
         (unsigned int)*pbVar18 * 0x100 + (unsigned int)*pbVar3;
    goto LAB_82de2304;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    pbVar18 = param_4 + 1;
    pbVar3 = param_4 + 2;
    pbVar4 = param_4 + 3;
    pbVar5 = param_4 + 4;
    param_4 = param_4 + 5;
    *(unsigned int *)((int)auStack_27c + (int)((uVar12 - 0x68 & 0xffffffff) << 2)) =
         (((unsigned int)*pbVar18 * 0x100 + (unsigned int)*pbVar3) * 0x100 + (unsigned int)*pbVar4) * 0x100 + (unsigned int)*pbVar5;
LAB_82de2304:
    if (param_3 != &iStack_2b0) {
      puVar10 = &uStack_2b8;
      param_3 = param_3 + -2;
      lVar19 = 8;
      do {
        param_3 = param_3 + 2;
        puVar10 = puVar10 + 1;
        *puVar10 = *(unsigned __int64 *)param_3;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      param_3 = &iStack_2b0;
    }
    goto LAB_82de1d84;
  case 0x70:
    goto switchD_82de1da4_caseD_70;
  }
  cVar16 = '\0';
  cVar15 = '\0';
  if ((int)uVar11 < iVar13) {
    if (iVar6 < (int)uVar9) {
      pcVar7 = (char *)fn_82DE1D50(&uStack_2bd,param_2,param_3,pbVar18 + iVar17,param_5);
      puVar8 = &uStack_2c0;
      cVar16 = *pcVar7;
    }
    else {
      puVar8 = &uStack_2be;
    }
    pcVar7 = (char *)fn_82DE1D50(puVar8,param_2,param_3,pbVar18 + uVar14,param_5);
    cVar15 = *pcVar7;
  }
  else {
    if ((int)uVar9 <= iVar6) {
LAB_82de273c:
      *param_1 = 0;
      return param_1;
    }
    pcVar7 = (char *)fn_82DE1D50(auStack_2bc,param_2,param_3,pbVar18 + iVar17,param_5);
    cVar16 = *pcVar7;
  }
  if (cVar15 == '\0' && cVar16 != '\0') {
    (**(int (***)())(**(int **)(param_2 + 0x44) + 8))
              (*(int **)(param_2 + 0x44),
               pbVar18 + (iVar17 - *(int *)(*(int *)(param_2 + 0x30) + 0x20)));
  }
  if (cVar16 == '\0' && cVar15 != '\0') {
    (**(int (***)())(**(int **)(param_2 + 0x44) + 8))
              (*(int **)(param_2 + 0x44),
               pbVar18 + (uVar14 - *(int *)(*(int *)(param_2 + 0x30) + 0x20)));
  }
  *param_1 = 1U - (cVar16 == '\0') & 1U - (cVar15 == '\0');
  return param_1;
switchD_82de1da4_caseD_70:
  param_5 = (((unsigned int)param_4[1] * 0x100 + (unsigned int)param_4[2]) * 0x100 + (unsigned int)param_4[3]) * 0x100 +
            (unsigned int)param_4[4];
  param_4 = (unsigned char *)(*(int *)(*(int *)(param_2 + 0x30) + 0x20) + param_5);
  goto LAB_82de1d84;
}

