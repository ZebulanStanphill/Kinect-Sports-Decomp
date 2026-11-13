#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_210;
extern unsigned int *auStack_230;
extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_2d0;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_300;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_350;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822EA758();
extern int fn_822EA7D8();
extern int fn_822FB078();
extern int fn_822FB4C0();
extern int fn_822FEC40();
extern int fn_822FED38();
extern int fn_822FF2F0();
extern int fn_822FF3A8();
extern int fn_82303038();
extern int fn_82303E68();
extern int fn_82359BB0();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int iStack_30c;
extern unsigned int iStack_314;
extern unsigned int iStack_31c;
extern unsigned int iStack_34c;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int uStack_310;
extern unsigned int uStack_318;
extern unsigned int uStack_320;


void fn_822FE028(int param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar8;
  int iVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar7;
  char cVar11;
  unsigned __int64 uVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  __int64 lVar15;
  unsigned int *puVar16;
  double dVar17;
  double dVar18;
  unsigned int *puStack00000034;
  unsigned int *puStack_360;
  unsigned int *puStack_35c;
  unsigned int *apuStack_358 [2];
  float fStack_350;
  int iStack_34c;
  unsigned int *puStack_348;
  unsigned int *puStack_344;
  unsigned int *apuStack_340 [2];
  unsigned int *puStack_338;
  unsigned int *puStack_334;
  unsigned int *puStack_330;
  unsigned int *puStack_32c;
  unsigned int *puStack_328;
  unsigned int *puStack_324;
  unsigned int uStack_320;
  int iStack_31c;
  unsigned int uStack_318;
  int iStack_314;
  unsigned int uStack_310;
  int iStack_30c;
  unsigned char auStack_300 [32];
  unsigned char auStack_2e0 [16];
  unsigned char auStack_2d0 [32];
  unsigned char auStack_2b0 [32];
  unsigned char auStack_290 [32];
  unsigned char auStack_270 [32];
  unsigned char auStack_250 [32];
  unsigned char auStack_230 [32];
  unsigned char auStack_210 [32];
  unsigned char auStack_1f0 [32];
  unsigned char auStack_1d0 [32];
  unsigned char auStack_1b0 [32];
  unsigned char auStack_190 [32];
  unsigned char auStack_170 [32];
  unsigned char auStack_150 [32];
  unsigned char auStack_130 [32];
  unsigned char auStack_110 [32];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [208];
  
  puStack_360 = (unsigned int *)0x0;
  puStack00000034 = param_5;
  fn_82230110(auStack_300,0xffffffff821aead8);
  fn_82230110(auStack_290,0xffffffff821aeaec);
  fn_82230110(auStack_2d0,0xffffffff821aeb00);
  uVar1 = **(unsigned int **)(param_2 + 0x50);
  puStack_32c = (unsigned int *)fn_8265C9E0(0x120);
  if (puStack_32c == (unsigned int *)0x0) {
    puStack_32c = (unsigned int *)0x0;
  }
  else {
    puStack_32c[1] = 1;
    puStack_32c[2] = 1;
    *puStack_32c = &lbl_821A8D8C;
    if (puStack_32c + 4 != (unsigned int *)0x0) {
      fn_82230110(auStack_130,0xffffffff821aeb14);
      fn_82303038(puStack_32c + 4,param_3,auStack_130,uVar1,param_2 + 0x4c);
      fn_82230300(auStack_130,1,0);
    }
  }
  puStack_330 = puStack_32c + 4;
  fn_822C8B40(param_1,&puStack_330);
  fn_82230110(auStack_230,0xffffffff821aeb2c);
  lVar15 = ZEXT48(puStack_330) + 0x40;
  uVar2 = *param_4;
  uVar6 = fn_822C7578(lVar15,auStack_230);
  fn_82230218(uVar6,(unsigned __int64)uVar2 + 4,0,0xffffffffffffffff);
  fn_82230300(auStack_230,1,0);
  fn_82230110(auStack_170,0xffffffff821aeb3c);
  uVar6 = fn_822C7578(lVar15,auStack_170);
  fn_82230218(uVar6,auStack_290,0,0xffffffffffffffff);
  fn_82230300(auStack_170,1,0);
  fn_82230110(auStack_f0,0xffffffff821aeb48);
  fn_82230110(auStack_1f0,0xffffffff821aeb58);
  uVar6 = fn_822C7578(lVar15,auStack_1f0);
  fn_82230218(uVar6,auStack_f0,0,0xffffffffffffffff);
  fn_82230300(auStack_1f0,1,0);
  fn_82230300(auStack_f0,1,0);
  uVar1 = **(unsigned int **)(param_2 + 0x50);
  puStack_324 = (unsigned int *)fn_8265C9E0(0xd0);
  if (puStack_324 == (unsigned int *)0x0) {
    puStack_324 = (unsigned int *)0x0;
  }
  else {
    puStack_324[1] = 1;
    puStack_324[2] = 1;
    *puStack_324 = &lbl_821AD588;
    if (puStack_324 + 3 != (unsigned int *)0x0) {
      fn_82230110(auStack_1b0,0xffffffff821aeb14);
      fn_82303E68(puStack_324 + 3,param_3,auStack_1b0,uVar1,param_2 + 0x4c);
      fn_82230300(auStack_1b0,1,0);
    }
  }
  puStack_328 = puStack_324 + 3;
  fn_822C8B40(param_1,&puStack_328);
  fn_82230110(auStack_270,0xffffffff821aeb2c);
  uVar12 = ZEXT48(puStack_328);
  uVar2 = *param_4;
  uVar6 = fn_822C7578(uVar12 + 0x40,auStack_270);
  fn_82230218(uVar6,(unsigned __int64)uVar2 + 4,0,0xffffffffffffffff);
  fn_82230300(auStack_270,1,0);
  fn_82230110(auStack_210,0xffffffff821aeb48);
  fn_82230110(auStack_250,0xffffffff821aeb58);
  uVar6 = fn_822C7578(uVar12 + 0x40,auStack_250);
  fn_82230218(uVar6,auStack_210,0,0xffffffffffffffff);
  fn_82230300(auStack_250,1,0);
  fn_82230300(auStack_210,1,0);
  dVar18 = (double)(float)lbl_821917D4;
  dVar17 = (double)(float)lbl_82193AF0;
  apuStack_358[0] = lbl_821917D4;
  apuStack_340[0] = lbl_82193AF0;
  fn_822EA758(&uStack_310,*(unsigned int *)(param_1 + 0x48),apuStack_340,apuStack_358);
  apuStack_358[0] = (unsigned int *)(unsigned int)(float)dVar17;
  fn_822EA7D8(&uStack_318,apuStack_358);
  uVar1 = *(unsigned int *)(param_1 + 0x80);
  puVar8 = (unsigned int *)fn_8265C9E0(0xac);
  if (puVar8 == (unsigned int *)0x0) {
    puVar8 = (unsigned int *)0x0;
  }
  else {
    *puVar8 = &lbl_821AD588;
    puVar8[1] = 1;
    puVar8[2] = 1;
    if (puVar8 + 3 != (unsigned int *)0x0) {
      fn_82230110(auStack_1d0,0xffffffff821aeb60);
      fn_822FB078(puVar8 + 3,auStack_300,param_3,uVar1,auStack_1d0);
      fn_82230300(auStack_1d0,1,0);
    }
  }
  puStack_338 = puVar8 + 3;
  apuStack_358[0] = puVar8;
  puStack_334 = puVar8;
  fn_82365BD8(&puStack_348,&puStack_338);
  fn_822C8B40(param_1,&puStack_348);
  if (puStack_344 != (unsigned int *)0x0) {
    fn_822315A0();
  }
  puVar13 = puVar8 + 0x13;
  uVar6 = fn_822C7578(puVar13,(unsigned __int64)uStack_318 + 4);
  fn_82230218(uVar6,auStack_2d0,0,0xffffffffffffffff);
  iVar9 = fn_82365BD8(&uStack_320,&uStack_318);
  fn_82376640(puVar8 + 0xf,iVar9);
  if (*(int *)(iVar9 + 4) != 0) {
    fn_822315A0();
  }
  uVar2 = *(unsigned int *)(param_1 + 0xc0);
  puVar14 = (unsigned int *)(param_1 + 0xc0);
  uVar6 = fn_822C7578(puVar13,(unsigned __int64)uVar2 + 4);
  fn_82230218(uVar6,(unsigned __int64)uVar2 + 4,0,0xffffffffffffffff);
  uVar2 = *param_4;
  uVar6 = fn_822C7578(puVar13,(unsigned __int64)uVar2 + 4);
  fn_82230218(uVar6,(unsigned __int64)uVar2 + 4,0,0xffffffffffffffff);
  uVar1 = *(unsigned int *)(param_1 + 0x80);
  puVar10 = (unsigned int *)fn_8265C9E0(0xac);
  if (puVar10 == (unsigned int *)0x0) {
    puVar10 = (unsigned int *)0x0;
  }
  else {
    *puVar10 = &lbl_821AD588;
    puVar10[1] = 1;
    puVar10[2] = 1;
    if (puVar10 + 3 != (unsigned int *)0x0) {
      fn_82230110(auStack_190,0xffffffff821aeaec);
      fn_822FB078(puVar10 + 3,auStack_290,param_3,uVar1,auStack_190);
      fn_82230300(auStack_190,1,0);
    }
  }
  puStack_360 = puVar10 + 3;
  puStack_35c = puVar10;
  apuStack_340[0] = puVar10;
  fn_82365BD8(&puStack_348,&puStack_360);
  fn_822C8B40(param_1,&puStack_348);
  if (puStack_344 != (unsigned int *)0x0) {
    fn_822315A0();
  }
  fn_82230110(auStack_2b0,0xffffffff821aeb78);
  fn_82365BD8(&fStack_350,&puStack_360);
  fn_82365BD8(&puStack_348,&puStack_360);
  puVar5 = puStack00000034;
  fn_822FED38(&uStack_320,param_1,*(unsigned int *)(param_1 + 0x80),param_3,auStack_2b0,param_4,
                    &puStack_348,puStack00000034);
  if (puStack_344 != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (iStack_34c != 0) {
    fn_822315A0();
  }
  uVar2 = *puVar14;
  uVar6 = fn_822C7578((unsigned __int64)uStack_320 + 0x40,(unsigned __int64)*puVar5 + 4);
  fn_82230218(uVar6,(unsigned __int64)uVar2 + 4,0,0xffffffffffffffff);
  fn_82230110(auStack_150,0xffffffff821aeb8c);
  uVar6 = fn_822C7578(puVar10 + 0x13,auStack_150);
  fn_82230218(uVar6,auStack_2b0,0,0xffffffffffffffff);
  fn_82230300(auStack_150,1,0);
  fn_82230110(auStack_110,0xffffffff821aeb8c);
  uVar6 = fn_822C7578((unsigned __int64)*puVar14 + 0x40,auStack_110);
  fn_82230218(uVar6,auStack_2b0,0,0xffffffffffffffff);
  fn_82230300(auStack_110,1,0);
  uVar1 = *(unsigned int *)(param_1 + 0x80);
  uVar3 = *(unsigned int *)(param_1 + 0x48);
  uVar4 = *(unsigned int *)(param_1 + 0x44);
  puVar10 = (unsigned int *)fn_8265C9E0(0xa8);
  if (puVar10 == (unsigned int *)0x0) {
    puVar10 = (unsigned int *)0x0;
  }
  else {
    puVar10[1] = 1;
    puVar10[2] = 1;
    *puVar10 = &lbl_821AD588;
    if (puVar10 + 3 != (unsigned int *)0x0) {
      fn_82230110(auStack_d0,0xffffffff821aeb9c);
      fn_822FB4C0(puVar10 + 3,auStack_2d0,param_3,auStack_d0,uVar4,uVar3,uVar1);
      fn_82230300(auStack_d0,1,0);
    }
  }
  puStack_348 = puVar10 + 3;
  puStack_344 = puVar10;
  fn_82365BD8(&puStack_360,&puStack_348);
  fn_822C8B40(param_1,&puStack_360);
  if (puStack_35c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  puVar16 = puVar10 + 0x13;
  uVar6 = fn_822C7578(puVar16,(unsigned __int64)uStack_310 + 4);
  fn_82230218(uVar6,auStack_300,0,0xffffffffffffffff);
  iVar9 = fn_82365BD8(&puStack_360,&uStack_310);
  fn_82376640(puVar10 + 0xf,iVar9);
  if (*(int *)(iVar9 + 4) != 0) {
    fn_822315A0();
  }
  uVar2 = *puVar14;
  uVar6 = fn_822C7578(puVar16,(unsigned __int64)uVar2 + 4);
  fn_82230218(uVar6,(unsigned __int64)uVar2 + 4,0,0xffffffffffffffff);
  uVar2 = *param_4;
  uVar6 = fn_822C7578(puVar16,(unsigned __int64)uVar2 + 4);
  fn_82230218(uVar6,(unsigned __int64)uVar2 + 4,0,0xffffffffffffffff);
  fStack_350 = (float)dVar18;
  uVar12 = fn_8265C9E0(0x34);
  if ((uVar12 & 0xffffffff) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = fn_822FF2F0(uVar12,&fStack_350,param_2 + 0x44);
  }
  fStack_350 = (float)dVar18;
  puStack_360 = lbl_82192D74;
  uVar2 = **(unsigned int **)(param_2 + 0x50);
  uVar1 = *(unsigned int *)(*(int *)(param_2 + 0x48) + 4);
  uVar7 = fn_8265C9E0(0xe4);
  if ((uVar7 & 0xffffffff) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = fn_822FF3A8(uVar7,0xffffffff821aebb8,param_3,(unsigned __int64)uVar2 + 0x80,uVar1,
                              0xffffffff821aebb8,&puStack_360,&fStack_350);
  }
  lVar15 = uVar7 + 0x4c;
  uVar6 = fn_822C7578(lVar15,puVar10 + 4);
  fn_82230218(uVar6,puVar10 + 4,0,0xffffffffffffffff);
  uVar6 = fn_822C7578(lVar15,puVar8 + 4);
  fn_82230218(uVar6,puVar8 + 4,0,0xffffffffffffffff);
  uVar2 = *puVar14;
  uVar6 = fn_822C7578(lVar15,(unsigned __int64)uVar2 + 4);
  fn_82230218(uVar6,(unsigned __int64)uVar2 + 4,0,0xffffffffffffffff);
  uVar2 = *param_4;
  uVar6 = fn_822C7578(lVar15,(unsigned __int64)uVar2 + 4);
  fn_82230218(uVar6,(unsigned __int64)uVar2 + 4,0,0xffffffffffffffff);
  puStack_360 = (unsigned int *)0x0;
  puStack_35c = (unsigned int *)0x0;
  if (((uVar7 & 0xffffffff) != 0) && (cVar11 = fn_8223AAC0(uVar7), cVar11 != '\0')) {
    puStack_360 = (unsigned int *)((int)uVar7 + 0xc);
    puStack_35c = (unsigned int *)(int)uVar7;
  }
  fn_822C8B40(param_1,&puStack_360);
  if (puStack_35c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  uVar6 = fn_822C7578(puVar13,uVar12 + 0x10);
  fn_82230218(uVar6,uVar7 + 0x10,0,0xffffffffffffffff);
  puStack_360 = (unsigned int *)0x0;
  puStack_35c = (unsigned int *)0x0;
  if (((uVar12 & 0xffffffff) != 0) && (cVar11 = fn_8223AAC0(uVar12), cVar11 != '\0')) {
    puStack_360 = (unsigned int *)((int)uVar12 + 0xc);
    puStack_35c = (unsigned int *)(int)uVar12;
  }
  fn_82376640(puVar8 + 0xf,&puStack_360);
  if (puStack_35c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  uVar6 = fn_822C7578((unsigned __int64)*puVar14 + 0x40,auStack_300);
  fn_82230218(uVar6,auStack_300,0,0xffffffffffffffff);
  uVar6 = fn_822C7578((unsigned __int64)*param_4 + 0x40,auStack_300);
  fn_82230218(uVar6,auStack_300,0,0xffffffffffffffff);
  uVar6 = fn_822C7578((unsigned __int64)*param_4 + 0x40,auStack_2d0);
  fn_82230218(uVar6,auStack_2d0,0,0xffffffffffffffff);
  fn_82365BD8(&fStack_350,puVar14);
  fn_82365BD8(&puStack_360,puVar14);
  puVar14 = puStack00000034;
  fn_822FEC40(auStack_2e0,0xffffffff821aebd0,param_1,*(unsigned int *)(param_1 + 0x80),param_3,
                    param_4,&puStack_360,puStack00000034);
  fn_82359BB0(auStack_2e0);
  if (puStack_35c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (iStack_34c != 0) {
    fn_822315A0();
  }
  fn_82365BD8(&fStack_350,&puStack_338);
  fn_82365BD8(&puStack_360,&puStack_338);
  fn_82365BD8(&puStack_338,&puStack_348);
  fn_822FEC40(auStack_2e0,0xffffffff821aebd8,param_1,*(unsigned int *)(param_1 + 0x80),param_3,
                    &puStack_338,&puStack_360,puVar14);
  fn_82359BB0(auStack_2e0);
  if (puStack_334 != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (puStack_35c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (iStack_34c != 0) {
    fn_822315A0();
  }
  if ((uVar7 & 0xffffffff) != 0) {
    fn_822315A0(uVar7);
  }
  if ((uVar12 & 0xffffffff) != 0) {
    fn_822315A0(uVar12);
  }
  if (puVar10 != (unsigned int *)0x0) {
    fn_822315A0(puVar10);
  }
  if (iStack_31c != 0) {
    fn_822315A0();
  }
  fn_82230300(auStack_2b0,1,0);
  if (apuStack_340[0] != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (apuStack_358[0] != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (iStack_314 != 0) {
    fn_822315A0();
  }
  if (iStack_30c != 0) {
    fn_822315A0();
  }
  if (puStack_324 != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (puStack_32c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  fn_82230300(auStack_2d0,1,0);
  fn_82230300(auStack_290,1,0);
  fn_82230300(auStack_300,1,0);
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  if (puVar14[1] != 0) {
    fn_822315A0();
  }
  return;
}

