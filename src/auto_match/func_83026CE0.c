extern int memset();
extern int fn_82FA5060();
extern int fn_830266D8();
extern int fn_83026B40();
extern int fn_83027078();
extern int fn_83039928();
extern int fn_83039F30();
extern int fn_83039FF0();
extern int fn_8303A030();
extern unsigned int lbl_831BC770;


void fn_83026CE0(int param_1,int param_2)

{
  unsigned short uVar1;
  short sVar2;
  int iVar3;
  char cVar5;
  int iVar4;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  int *piVar10;
  int iVar11;
  __int64 lVar12;
  double dVar13;
  
  if (*(int *)(param_2 + 0x340) == 0x11) {
    *(unsigned char *)(param_1 + 0xb8) = 1;
  }
  if (*(short *)(param_1 + 0x6e) == 0) {
    puVar7 = (unsigned int *)(param_1 + 0x5c);
    puVar8 = (unsigned int *)(param_2 + -4);
    lVar12 = 10;
    do {
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  piVar10 = (int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar3 = 0;
    for (uVar9 = *(unsigned int *)(param_1 + 100); uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      iVar3 = iVar3 + 1;
    }
    iVar3 = fn_82FA5060(lbl_831BC770,
                              ((__int64)(int)(*(unsigned short *)(param_1 + 0xbe) + 4) * (__int64)iVar3 &
                              0x3fffffffU) << 2);
    if (iVar3 == 0) {
      *(unsigned int *)(param_2 + 0x340) = 2;
      return;
    }
    *piVar10 = iVar3;
    *(unsigned short *)(param_1 + 0x96) = 0;
    *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(param_1 + 100);
    *(unsigned short *)(param_1 + 0x94) = *(unsigned short *)(param_1 + 0xbe);
    if (*(char *)(param_1 + 0xba) != '\0') {
      iVar3 = *(int *)(*(int *)(param_1 + 0xb4) + 0x134);
      if (0 < iVar3) {
        cVar5 = fn_83039FF0(param_1 + 0x10);
        if (cVar5 == '\0') {
          fn_83027078(piVar10,iVar3);
        }
        else if (iVar3 != 0) {
          iVar6 = 0;
          for (uVar9 = *(unsigned int *)(param_1 + 0x8c); uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
            iVar6 = iVar6 + 1;
          }
                    /* WARNING: Subroutine does not return */
          memset(*piVar10,0,((__int64)iVar6 * (__int64)iVar3 & 0x3fffffffU) << 2);
        }
        *(int *)(param_1 + 0x2c) = iVar3;
      }
      *(unsigned char *)(param_1 + 0xba) = 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0xb4);
  iVar6 = *(int *)(iVar3 + 0xd0);
  if (iVar6 != 0) {
    uVar1 = *(unsigned short *)(param_1 + 0x6e);
    if ((int)(unsigned int)uVar1 <= iVar6) {
      *(unsigned int *)(iVar3 + 0xd0) = iVar6 - (unsigned int)uVar1;
      *(unsigned char *)(iVar3 + 0xdb) = *(unsigned char *)(iVar3 + 0xdb) & 0x7f;
      *(unsigned short *)(param_1 + 0x6e) = 0;
      *(unsigned short *)(param_2 + 0xe) = 0;
      fn_830266D8(param_1,param_2);
      *(unsigned int *)(param_2 + 0x340) = (-(unsigned int)(*(char *)(param_1 + 0xb8) != '\0') & 0xffffffe6) + 0x2b;
      return;
    }
    *(int *)(param_1 + 0x28) = iVar6;
    *(unsigned short *)(param_1 + 0x6e) = uVar1 - (short)iVar6;
    *(unsigned int *)(iVar3 + 0xd0) = 0;
    *(unsigned char *)(iVar3 + 0xdb) = *(unsigned char *)(iVar3 + 0xdb) & 0x7f;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  iVar11 = param_1 + 0x10;
  sVar2 = *(short *)(param_1 + 0x6e);
  iVar4 = fn_83039F30(iVar11,param_1 + 0x60,piVar10,*(unsigned short *)(param_1 + 0xbc));
  fn_83026B40(param_1,param_1 + 0x60,piVar10,iVar3,sVar2 - *(short *)(param_1 + 0x6e));
  iVar6 = *(int *)(param_1 + 0x78);
  if ((iVar6 != -1) && (*(char *)(param_1 + 0xb9) == '\0')) {
    *(int *)(param_1 + 0xa0) = iVar6;
    *(unsigned char *)(param_1 + 0xb9) = 1;
    *(unsigned int *)(param_1 + 0xa4) = *(unsigned int *)(param_1 + 0x7c);
    *(unsigned int *)(param_1 + 0xa8) = *(unsigned int *)(param_1 + 0x80);
    *(unsigned int *)(param_1 + 0xac) = *(unsigned int *)(param_1 + 0x84);
    *(int *)(param_1 + 0xa0) = iVar6 + iVar3;
  }
  dVar13 = (double)fn_83039928(iVar11);
  *(float *)(param_1 + 0xa4) = (float)dVar13;
  if ((*(short *)(param_1 + 0x6e) == 0) &&
     (fn_830266D8(param_1,param_2), *(char *)(param_1 + 0xb8) == '\x01')) {
    iVar4 = 0x11;
  }
  else if ((iVar4 != 0x2d) && (iVar4 != 0x11)) goto LAB_83026fcc;
  fn_8303A030(iVar11,piVar10);
  puVar8 = (unsigned int *)(param_1 + 0x84);
  puVar7 = (unsigned int *)(param_2 + -4);
  lVar12 = 10;
  do {
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
    *puVar7 = *puVar8;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
LAB_83026fcc:
  *(int *)(param_2 + 0x340) = iVar4;
  return;
}

