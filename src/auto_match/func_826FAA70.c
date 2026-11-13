#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_11c;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_fc;
extern unsigned int fStack_e4;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826C6248();
extern int fn_826C8C70();
extern int fn_826E7408();
extern int fn_826E7438();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E7B08();
extern int fn_826E8AF0();
extern int fn_826E8E18();
extern int fn_826E92E8();
extern int fn_826E9330();
extern int fn_826E95F8();
extern int fn_8278EA40();
extern unsigned int iStack_120;
extern unsigned int lbl_8200DD28;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


__int64 fn_826FAA70(int param_1)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  unsigned char uVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  char cVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned char *puVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  int iStack_120;
  unsigned char auStack_11c [32];
  unsigned char auStack_fc [24];
  float fStack_e4;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned short uStack_d8;
  unsigned char bStack_d6;
  unsigned char bStack_d5;
  unsigned __int64 uStack_d0;
  unsigned char auStack_c0 [192];
  
  lVar14 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x34) - (unsigned __int64)*(unsigned int *)(param_1 + 0x30)) +
           (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
  lVar8 = fn_826E7408();
  cVar9 = fn_826E7438(param_1);
  if (cVar9 == '\0') {
    return lVar8 - lVar14;
  }
  *(unsigned char *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
    fn_826E7990(param_1);
  }
  iVar12 = *(int *)(param_1 + 0x2c) + 1;
  bVar5 = *(unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x2c) = iVar12;
  *(unsigned char *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - iVar12 < 1) {
    fn_826E7990(param_1);
  }
  uVar16 = 0;
  uVar15 = 0;
  bVar6 = *(unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  fn_826C6248(&iStack_120);
  *(unsigned char *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
    fn_826E7800(param_1,2);
  }
  iVar12 = *(int *)(param_1 + 0x2c) + 2;
  puVar13 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  uVar1 = puVar13[1];
  uVar2 = *puVar13;
  *(int *)(param_1 + 0x2c) = iVar12;
  uStack_e0 = (unsigned int)CONCAT11(uVar1,uVar2);
  if ((bVar5 & 2) != 0) {
    bStack_d5 = bStack_d5 | 2;
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - iVar12 < 2) {
      fn_826E7800(param_1,2);
    }
    puVar13 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar13[1];
    uVar2 = *puVar13;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
    uStack_dc = (unsigned int)CONCAT11(uVar1,uVar2);
  }
  if ((bVar5 & 4) != 0) {
    bStack_d5 = bStack_d5 | 4;
    fn_826E8AF0(param_1,auStack_fc);
  }
  if ((bVar5 & 8) != 0) {
    bStack_d5 = bStack_d5 | 8;
    fn_826E8E18(param_1,auStack_11c);
  }
  if ((bVar5 & 0x10) != 0) {
    bStack_d5 = bStack_d5 | 0x10;
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
      fn_826E7800(param_1,2);
    }
    fStack_e4 = lbl_8200DD28;
    puVar13 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar13[1];
    uVar2 = *puVar13;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
    uStack_d0 = (unsigned __int64)CONCAT11(uVar1,uVar2);
    fStack_e4 = (float)uStack_d0 * fStack_e4;
  }
  if ((bVar5 & 0x20) != 0) {
    uVar15 = fn_826E95F8(param_1,*(unsigned int *)(param_1 + 0x1c));
  }
  if ((bVar5 & 0x40) != 0) {
    bStack_d5 = bStack_d5 | 0x40;
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
      fn_826E7800(param_1,2);
    }
    puVar13 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar13[1];
    uVar2 = *puVar13;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
    uStack_d8 = CONCAT11(uVar1,uVar2);
  }
  if ((bVar6 & 1) != 0) {
    bStack_d5 = bStack_d5 | 0x20;
    fn_8278EA40(param_1,auStack_c0,4);
  }
  if ((bVar6 & 2) != 0) {
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
      fn_826E7990(param_1);
    }
    bStack_d6 = *(unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if ((bStack_d6 == 0) || (0xe < bStack_d6)) {
      bStack_d6 = 1;
    }
    bStack_d5 = bStack_d5 | 0x80;
  }
  if ((bVar6 & 4) != 0) {
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
      fn_826E7990(param_1);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  if ((bVar5 & 0x80) != 0) {
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
      fn_826E7800(param_1,2);
    }
    iVar12 = *(int *)(param_1 + 0x2c) + 2;
    *(unsigned char *)(param_1 + 0x15) = 0;
    *(int *)(param_1 + 0x2c) = iVar12;
    if (*(int *)(param_1 + 0x30) - iVar12 < 4) {
      fn_826E7800(param_1,4);
    }
    puVar13 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar13[3];
    uVar2 = puVar13[2];
    uVar3 = puVar13[1];
    uVar4 = *puVar13;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
    uVar16 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
  }
  fn_826E7B08(param_1,lVar14);
  uVar7 = ((unsigned __int64)bVar5 & 2) >> 1;
  fn_826C8C70(param_1,0xffffffff8200dd18,uStack_e0);
  if ((bVar5 & 2) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dd08,uStack_dc & 0xffff);
  }
  if ((bVar5 & 4) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dd00);
    fn_826E9330(param_1,auStack_fc);
  }
  if ((bVar5 & 8) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dc50);
    fn_826E92E8(param_1,auStack_11c);
  }
  if ((bVar5 & 0x10) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dcf0,(double)fStack_e4);
  }
  if ((bVar5 & 0x20) != 0) {
    uVar11 = uVar15;
    if ((uVar15 & 0xffffffff) == 0) {
      uVar11 = 0xffffffff8200dce8;
    }
    fn_826C8C70(param_1,0xffffffff8200dcd8,uVar11);
  }
  if ((bVar5 & 0x40) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dcc4,uStack_d8);
  }
  if ((bVar6 & 2) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dd2c,bStack_d6);
  }
  if ((bVar5 & 0x80) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dca8,uVar16);
  }
  if ((uVar7 == 0) || ((bVar5 & 1) == 0)) {
    if ((uVar7 != 0) || ((bVar5 & 1) == 0)) goto LAB_826fafd8;
    uVar10 = 0xffffffff8200dc84;
  }
  else {
    uVar10 = 0xffffffff8200dc94;
  }
  fn_826C8C70(param_1,uVar10);
LAB_826fafd8:
  if ((uVar15 & 0xffffffff) != 0) {
    fn_8267BE38(uVar15);
  }
  fn_826E7B08(param_1,lVar14);
  if (iStack_120 != 0) {
    fn_8267C498();
  }
  return lVar8 - lVar14;
}

