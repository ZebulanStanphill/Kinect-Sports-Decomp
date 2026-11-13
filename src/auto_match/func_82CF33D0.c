#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_144;
extern unsigned int *auStack_214;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CF0998();
extern int fn_82CF1998();
extern int fn_82CFBBF0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_218;
extern unsigned int uStack_21c;
extern unsigned int uStack_80;


int fn_82CF33D0(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int param_4,
                 char param_5)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  float *pfVar4;
  unsigned char *puVar5;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar6;
  int iVar9;
  float *pfVar10;
  unsigned __int64 uVar11;
  unsigned short *puVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  __int64 lVar17;
  unsigned char *puStack_220;
  unsigned int uStack_21c;
  unsigned int uStack_218;
  unsigned char auStack_214 [196];
  unsigned char *puStack_150;
  unsigned int uStack_14c;
  unsigned int uStack_148;
  unsigned char auStack_144 [196];
  unsigned int uStack_80;
  
  iVar7 = fn_82CE5410();
  iVar7 = (**(int (***)())(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0x58);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    *(unsigned int *)(iVar7 + 0x38) = 0x80000000;
    *(unsigned int *)(iVar7 + 0x30) = 0;
    *(unsigned int *)(iVar7 + 0x34) = 0;
    puVar14 = (unsigned int *)(iVar7 + -4);
    *(unsigned int *)(iVar7 + 0x48) = 0;
    puVar12 = (unsigned short *)(iVar7 + 0x1e);
    *(unsigned int *)(iVar7 + 0x4c) = param_4;
    lVar17 = 8;
    *(unsigned int *)(iVar7 + 0x50) = 0;
    *(unsigned int *)(iVar7 + 0x54) = 1;
    uVar3 = lbl_821AAD20;
    do {
      puVar14 = puVar14 + 1;
      *puVar14 = uVar3;
      puVar12 = puVar12 + 1;
      *puVar12 = 0;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    *(unsigned __int64 *)(iVar7 + 0x40) = lbl_82005710;
  }
  uStack_21c = 0;
  puStack_220 = auStack_214;
  uStack_14c = 0;
  uStack_148 = 0x80000010;
  uVar16 = 0;
  uStack_218 = 0x80000010;
  puVar5 = auStack_144;
  iVar8 = iVar7;
  while (puStack_150 = puVar5, param_1 < param_2) {
    puVar1 = (unsigned char *)*param_1;
    if (puVar1 < (unsigned char *)0xa) {
      param_1 = param_1 + 1;
      goto switchD_82cf34f4_caseD_46;
    }
    uVar15 = uStack_21c;
    switch(*puVar1) {
    case 0x45:
      if (uVar16 != 0) {
        if ((puVar1[2] == '\0') ||
           (iVar9 = fn_82CFBBF0((unsigned __int64)*(unsigned int *)(puVar5 + uVar16 * 0xc + -0xc) + 2,puVar1 + 2),
           iVar9 == 0)) {
          fn_82CF0998(iVar8,param_3,puVar5 + uVar16 * 0xc + -0xc,param_1);
          uVar2 = uStack_21c;
          uStack_14c = uStack_14c - 1;
          iVar8 = *(int *)(iVar8 + 0x48);
          iVar9 = fn_82CE5410();
          uVar3 = *(unsigned int *)(iVar9 + 0x10);
          uVar11 = CONCAT44(uStack_218,uStack_218);
          goto LAB_82cf3718;
        }
      }
      goto switchD_82cf34f4_caseD_47;
    case 0x46:
      break;
    default:
      goto switchD_82cf34f4_caseD_47;
    case 0x4c:
      iVar9 = fn_82CE5410();
      if (uStack_14c == (uStack_148 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),&puStack_150,0xc);
      }
      puVar14 = (unsigned int *)(puStack_150 + uStack_14c * 0xc);
      if (puVar14 != (unsigned int *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uStack_14c = uStack_14c + 1;
      iVar9 = fn_82CE5410();
      if (uStack_21c == (uStack_218 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),&puStack_220,0xc);
      }
      puVar14 = (unsigned int *)(puStack_220 + uStack_21c * 0xc);
      if (puVar14 != (unsigned int *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uStack_21c = uStack_21c + 1;
      uVar6 = fn_82CF1998(iVar8,puVar1 + 2,0,param_5 != '\0');
      uStack_80 = *param_1;
      uVar16 = param_1[1];
      uVar15 = param_1[2];
      uVar2 = param_1[3];
      iVar8 = fn_82CE5410();
      if (uStack_14c == (uStack_148 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),&puStack_150,0xc);
      }
      puVar13 = (unsigned int *)(puStack_150 + uStack_14c * 0xc);
      if (puVar13 != (unsigned int *)0x0) {
        *puVar13 = uVar2;
        puVar13[1] = uVar16;
        puVar13[2] = uVar15;
      }
      uStack_14c = uStack_14c + 1;
      iVar8 = fn_82CE5410();
      if (uStack_21c == (uStack_218 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),&puStack_220,0xc);
      }
      puVar13 = (unsigned int *)(puStack_220 + uStack_21c * 0xc);
      if (puVar13 != (unsigned int *)0x0) {
        *puVar13 = uVar2;
        puVar13[1] = uVar16;
        puVar13[2] = uVar15;
      }
      uStack_21c = uStack_21c + 1;
      iVar8 = fn_82CF1998(uVar6,(unsigned __int64)uVar2 + 2,0,param_5 != '\0');
      param_1 = param_1 + 4;
      uVar16 = uStack_14c;
      break;
    case 0x4d:
      pfVar10 = (float *)fn_82CF1998(iVar8,puVar1 + 2,2,param_5 != '\0');
      pfVar4 = (float *)(param_1 + 1);
      param_1 = param_1 + 2;
      *pfVar10 = *pfVar4 + *pfVar10;
      *(short *)(pfVar10 + 8) = *(short *)(pfVar10 + 8) + 1;
      uVar16 = uStack_14c;
      break;
    case 0x4e:
      goto switchD_82cf34f4_caseD_4e;
    case 0x4f:
      iVar9 = fn_82CE5410();
      if (uStack_14c == (uStack_148 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),&puStack_150,0xc);
      }
      puVar14 = (unsigned int *)(puStack_150 + uStack_14c * 0xc);
      if (puVar14 != (unsigned int *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uStack_14c = uStack_14c + 1;
      iVar8 = fn_82CF1998(iVar8,param_1[3],0,param_5 != '\0');
      iVar9 = fn_82CE5410();
      if (uStack_21c == (uStack_218 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),&puStack_220,0xc);
      }
      puVar14 = (unsigned int *)(puStack_220 + uStack_21c * 0xc);
      if (puVar14 != (unsigned int *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uStack_21c = uStack_21c + 1;
      param_1 = param_1 + 4;
      uVar16 = uStack_14c;
      break;
    case 0x50:
      iVar8 = fn_82CF1998(iVar8,puVar1 + 2,1,param_5 != '\0');
      uVar16 = uStack_14c;
switchD_82cf34f4_caseD_4e:
      param_1 = param_1 + 1;
      break;
    case 0x53:
      if (uVar16 != 0) {
        fn_82CF0998(iVar8,param_3,puVar5 + uVar16 * 0xc + -0xc,param_1);
        iVar8 = fn_82CF1998(*(unsigned int *)(iVar8 + 0x48),puVar1 + 2,0,param_5 != '\0');
        *(unsigned int *)(puVar5 + uVar16 * 0xc + -0xc) = *param_1;
        *(unsigned int *)(puVar5 + uVar16 * 0xc + -8) = param_1[1];
        *(unsigned int *)(puVar5 + uVar16 * 0xc + -4) = param_1[2];
        uVar16 = uStack_14c;
        uVar15 = uStack_21c;
        goto switchD_82cf34f4_caseD_6d;
      }
      goto switchD_82cf34f4_caseD_47;
    case 0x54:
      iVar8 = fn_82CF1998(iVar8,puVar1 + 2,0,param_5 != '\0');
      iVar9 = fn_82CE5410();
      if (uStack_14c == (uStack_148 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),&puStack_150,0xc);
      }
      puVar14 = (unsigned int *)(puStack_150 + uStack_14c * 0xc);
      if (puVar14 != (unsigned int *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uStack_14c = uStack_14c + 1;
      iVar9 = fn_82CE5410();
      if (uStack_21c == (uStack_218 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),&puStack_220,0xc);
      }
      puVar14 = (unsigned int *)(puStack_220 + uStack_21c * 0xc);
      if (puVar14 != (unsigned int *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uVar16 = uStack_14c;
      uVar15 = uStack_21c + 1;
    case 0x6d:
switchD_82cf34f4_caseD_6d:
      uStack_21c = uVar15;
      param_1 = param_1 + 3;
      break;
    case 0x6c:
      if ((1 < (int)uVar16) && (**(char **)(puVar5 + uVar16 * 0xc + -0xc) == 'S')) {
        fn_82CF0998(iVar8,param_3,puVar5 + uVar16 * 0xc + -0xc,param_1);
        uVar11 = (unsigned __int64)uStack_21c;
        uStack_14c = uStack_14c - 1;
        iVar8 = *(int *)(iVar8 + 0x48);
        iVar9 = fn_82CE5410();
        uVar16 = (unsigned int)(uVar11 - 1);
        if ((int)(uStack_218 & 0x3fffffff) < (int)uVar16) {
          lVar17 = ((unsigned __int64)uStack_218 & 0x3fffffff) << 1;
          if ((int)lVar17 <= (int)uVar16) {
            lVar17 = uVar11 - 1;
          }
          fn_82CE6310(*(unsigned int *)(iVar9 + 0x10),&puStack_220,lVar17,0xc);
        }
        uStack_21c = uVar16;
        fn_82CF0998(iVar8,param_3,puStack_150 + uStack_14c * 0xc + -0xc,param_1);
        uVar2 = uStack_21c;
        uStack_14c = uStack_14c - 1;
        iVar8 = *(int *)(iVar8 + 0x48);
        iVar9 = fn_82CE5410();
        uVar3 = *(unsigned int *)(iVar9 + 0x10);
        uVar11 = CONCAT44(uStack_218,uStack_218);
LAB_82cf3718:
        uVar15 = (unsigned int)((unsigned __int64)uVar2 - 1);
        uVar16 = uStack_14c;
        if ((int)(uVar11 & 0x3fffffff) < (int)uVar15) {
          lVar17 = (uVar11 & 0x3fffffff) << 1;
          if ((int)lVar17 <= (int)uVar15) {
            lVar17 = (unsigned __int64)uVar2 - 1;
          }
          fn_82CE6310(uVar3,&puStack_220,lVar17,0xc);
          uVar16 = uStack_14c;
        }
        goto switchD_82cf34f4_caseD_6d;
      }
      goto switchD_82cf34f4_caseD_47;
    case 0x70:
      iVar8 = *(int *)(iVar8 + 0x48);
      if (iVar8 == 0) goto switchD_82cf34f4_caseD_47;
      param_1 = param_1 + 1;
    }
switchD_82cf34f4_caseD_46:
    puVar5 = puStack_150;
  }
switchD_82cf34f4_caseD_47:
  iVar8 = fn_82CE5410();
  uStack_21c = 0;
  if ((uStack_218 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar8 + 0x10) + 0x10))
              (*(int **)(iVar8 + 0x10),puStack_220,uStack_218 & 0x3fffffff,0xc);
  }
  puStack_220 = (unsigned char *)0x0;
  uStack_218 = 0x80000000;
  iVar8 = fn_82CE5410();
  uStack_14c = 0;
  if ((uStack_148 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar8 + 0x10) + 0x10))
              (*(int **)(iVar8 + 0x10),puStack_150,uStack_148 & 0x3fffffff,0xc);
  }
  return iVar7;
}

