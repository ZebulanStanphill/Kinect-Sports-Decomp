#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_bc;
extern unsigned int *auStack_dc;
extern unsigned int *fStack_a4;
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
extern unsigned int iStack_e0;
extern unsigned int lbl_8200DD28;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


__int64 fn_826FA590(int param_1,unsigned int param_2)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char bVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  char cVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned char *puVar9;
  int iVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  int iStack_e0;
  unsigned char auStack_dc [32];
  unsigned char auStack_bc [24];
  float fStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned short uStack_98;
  unsigned char bStack_95;
  
  lVar11 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x34) - (unsigned __int64)*(unsigned int *)(param_1 + 0x30)) +
           (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
  lVar5 = fn_826E7408();
  cVar6 = fn_826E7438(param_1);
  if (cVar6 == '\0') {
    return lVar5 - lVar11;
  }
  *(unsigned char *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
    fn_826E7990(param_1);
  }
  uVar13 = 0;
  uVar12 = 0;
  bVar3 = *(unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  fn_826C6248(&iStack_e0);
  *(unsigned char *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
    fn_826E7800(param_1,2);
  }
  iVar10 = *(int *)(param_1 + 0x2c) + 2;
  puVar9 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  uVar1 = puVar9[1];
  uVar2 = *puVar9;
  *(int *)(param_1 + 0x2c) = iVar10;
  uStack_a0 = (unsigned int)CONCAT11(uVar1,uVar2);
  if ((bVar3 & 2) != 0) {
    bStack_95 = bStack_95 | 2;
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - iVar10 < 2) {
      fn_826E7800(param_1,2);
    }
    puVar9 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar9[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
    uStack_9c = (unsigned int)CONCAT11(uVar1,uVar2);
  }
  if ((bVar3 & 4) != 0) {
    bStack_95 = bStack_95 | 4;
    fn_826E8AF0(param_1,auStack_bc);
  }
  if ((bVar3 & 8) != 0) {
    bStack_95 = bStack_95 | 8;
    fn_826E8E18(param_1,auStack_dc);
  }
  if ((bVar3 & 0x10) != 0) {
    bStack_95 = bStack_95 | 0x10;
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
      fn_826E7800(param_1,2);
    }
    fStack_a4 = lbl_8200DD28;
    puVar9 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar9[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
    fStack_a4 = (float)CONCAT11(uVar1,uVar2) * fStack_a4;
  }
  if ((bVar3 & 0x20) != 0) {
    uVar12 = fn_826E95F8(param_1,*(unsigned int *)(param_1 + 0x1c));
  }
  if ((bVar3 & 0x40) != 0) {
    bStack_95 = bStack_95 | 0x40;
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
      fn_826E7800(param_1,2);
    }
    puVar9 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar9[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 2;
    uStack_98 = CONCAT11(uVar1,uVar2);
  }
  if ((bVar3 & 0x80) != 0) {
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 2) {
      fn_826E7800(param_1,2);
    }
    iVar10 = *(int *)(param_1 + 0x2c) + 2;
    *(unsigned char *)(param_1 + 0x15) = 0;
    *(int *)(param_1 + 0x2c) = iVar10;
    iVar10 = *(int *)(param_1 + 0x30) - iVar10;
    if (param_2 < 6) {
      if (iVar10 < 2) {
        fn_826E7800(param_1,2);
      }
      iVar10 = *(int *)(param_1 + 0x2c) + 2;
      puVar9 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
      uVar13 = (unsigned int)CONCAT11(puVar9[1],*puVar9);
    }
    else {
      if (iVar10 < 4) {
        fn_826E7800(param_1,4);
      }
      iVar10 = *(int *)(param_1 + 0x2c) + 4;
      puVar9 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
      uVar13 = CONCAT31(CONCAT21(CONCAT11(puVar9[3],puVar9[2]),puVar9[1]),*puVar9);
    }
    *(int *)(param_1 + 0x2c) = iVar10;
  }
  fn_826E7B08(param_1,lVar11);
  uVar4 = ((unsigned __int64)bVar3 & 2) >> 1;
  fn_826C8C70(param_1,0xffffffff8200dd18,uStack_a0);
  if ((bVar3 & 2) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dd08,uStack_9c & 0xffff);
  }
  if ((bVar3 & 4) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dd00);
    fn_826E9330(param_1,auStack_bc);
  }
  if ((bVar3 & 8) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dc50);
    fn_826E92E8(param_1,auStack_dc);
  }
  if ((bVar3 & 0x10) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dcf0,(double)fStack_a4);
  }
  if ((bVar3 & 0x20) != 0) {
    uVar8 = uVar12;
    if ((uVar12 & 0xffffffff) == 0) {
      uVar8 = 0xffffffff8200dce8;
    }
    fn_826C8C70(param_1,0xffffffff8200dcd8,uVar8);
  }
  if ((bVar3 & 0x40) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dcc4,uStack_98);
  }
  if ((bVar3 & 0x80) != 0) {
    fn_826C8C70(param_1,0xffffffff8200dca8,uVar13);
  }
  if ((uVar4 == 0) || ((bVar3 & 1) == 0)) {
    if ((uVar4 != 0) || ((bVar3 & 1) == 0)) goto LAB_826faa34;
    uVar7 = 0xffffffff8200dc84;
  }
  else {
    uVar7 = 0xffffffff8200dc94;
  }
  fn_826C8C70(param_1,uVar7);
LAB_826faa34:
  if ((uVar12 & 0xffffffff) != 0) {
    fn_8267BE38(uVar12);
  }
  fn_826E7B08(param_1,lVar11);
  if (iStack_e0 != 0) {
    fn_8267C498();
  }
  return lVar5 - lVar11;
}

