typedef unsigned char bool;
extern int memcpy();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83022408();
extern int fn_830224E8();
extern int fn_83024470();
extern int fn_83024C50();
extern int fn_83024E30();
extern int fn_83037438();
extern unsigned int lbl_8217D218;
extern unsigned int lbl_831BC770;


unsigned __int64 fn_83036C30(unsigned int *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar7;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int uVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  __int64 lVar16;
  
  uVar13 = (unsigned __int64)*(unsigned char *)(param_1 + 3);
  param_2 = param_2 & 0xff;
  bVar1 = *(unsigned char *)((int)param_1 + 0xd);
  uVar14 = (unsigned __int64)bVar1;
  uVar12 = 0;
  if (uVar14 != 0) {
    iVar11 = 0;
    uVar8 = *param_1;
    do {
      if (*(int *)(uVar8 + 8) == param_3) break;
      uVar12 = uVar12 + 1;
      iVar11 = iVar11 + 0x10;
      uVar8 = iVar11 + *param_1;
    } while (uVar12 < *(unsigned char *)((int)param_1 + 0xd));
  }
  bVar4 = bVar1 == uVar12;
  if ((uVar13 <= param_2) || (bVar4)) {
    uVar10 = param_2 + 1;
    if ((unsigned int)(param_2 + 1) < (unsigned int)*(unsigned char *)(param_1 + 3)) {
      uVar10 = uVar13;
    }
    *(char *)(param_1 + 3) = (char)uVar10;
    if (bVar4) {
      *(unsigned char *)((int)param_1 + 0xd) = bVar1 + 1;
    }
    cVar7 = fn_83037438(param_1,(__int64)(int)(unsigned int)*(unsigned char *)((int)param_1 + 0xd) *
                                      (__int64)(int)((unsigned int)uVar10 & 0xff));
    if (cVar7 != '\0') {
      if (bVar4) {
        lVar16 = uVar13 - 1;
        if (-1 < lVar16) {
          lVar15 = ((__int64)(int)lVar16 * (__int64)(int)(unsigned int)bVar1 & 0xfffffffU) << 4;
          do {
            memcpy(((__int64)(int)(unsigned int)*(unsigned char *)((int)param_1 + 0xd) * (__int64)(int)lVar16
                         & 0xfffffffU) * 0x10 + (unsigned __int64)*param_1,lVar15 + (unsigned __int64)*param_1,
                         uVar14 << 4);
            lVar16 = lVar16 + -1;
            lVar15 = (-uVar14 & 0xfffffff) * 0x10 + lVar15;
          } while (-1 < lVar16);
        }
        iVar11 = 0;
        if (*(char *)(param_1 + 3) != '\0') {
          iVar9 = 0x10;
          do {
            iVar11 = iVar11 + 1;
            iVar2 = (unsigned int)*(unsigned char *)((int)param_1 + 0xd) * iVar9;
            iVar9 = iVar9 + 0x10;
            *(int *)(iVar2 + *param_1 + -8) = param_3;
          } while (iVar11 < (int)(unsigned int)*(unsigned char *)(param_1 + 3));
        }
      }
      if (uVar13 <= param_2) {
        uVar8 = 0;
        if (*(unsigned char *)((int)param_1 + 0xd) != 0) {
          iVar9 = 0;
          iVar11 = (*(unsigned char *)(param_1 + 3) - 1) * (unsigned int)*(unsigned char *)((int)param_1 + 0xd) * 0x10;
          do {
            uVar8 = uVar8 + 1;
            iVar2 = iVar9 + *param_1;
            iVar3 = iVar11 + *param_1;
            iVar9 = iVar9 + 0x10;
            iVar11 = iVar11 + 0x10;
            *(unsigned int *)(iVar3 + 8) = *(unsigned int *)(iVar2 + 8);
          } while (uVar8 < *(unsigned char *)((int)param_1 + 0xd));
        }
      }
      goto LAB_83036e04;
    }
LAB_83036d14:
    uVar5 = 2;
  }
  else {
LAB_83036e04:
    iVar11 = ((unsigned int)*(unsigned char *)((int)param_1 + 0xd) * (int)param_2 + uVar12) * 0x10 + *param_1;
    if (*(int *)(iVar11 + 4) == 0) {
      puVar6 = (unsigned int *)fn_82FA5060(lbl_831BC770,0x180);
      if (puVar6 == (unsigned int *)0x0) goto LAB_83036d14;
      *puVar6 = &lbl_8217D218;
      puVar6[0x1c] = 0;
      fn_83022408(puVar6 + 0x20);
      puVar6[0x40] = 0;
      *puVar6 = &lbl_8217D218;
      *(int *)(iVar11 + 0xc) = (int)param_4;
      uVar5 = fn_83024C50(puVar6,param_4,8,0);
      if ((int)uVar5 != 1) {
        fn_83024470();
        fn_830224E8(puVar6 + 0x20);
        fn_82FA5190(lbl_831BC770,puVar6);
        return uVar5;
      }
      fn_83024E30(puVar6);
      *(unsigned int **)(iVar11 + 4) = puVar6;
    }
    uVar5 = 1;
  }
  return uVar5;
}

