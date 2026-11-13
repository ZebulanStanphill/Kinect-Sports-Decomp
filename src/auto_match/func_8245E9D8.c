extern unsigned int *auStack_84e;
extern unsigned int *auStack_968;
extern unsigned int *auStack_a88;
extern unsigned int fStack_858;
extern unsigned int fStack_85c;
extern unsigned int fStack_860;
extern unsigned int fStack_96c;
extern unsigned int fStack_978;
extern unsigned int fStack_97c;
extern unsigned int fStack_980;
extern unsigned int fStack_a8c;
extern int fn_8225BD88();
extern int fn_8225BE20();
extern int fn_8225F160();
extern int fn_82270B70();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_82460610();
extern int fn_82460D38();
extern int fn_82460F58();
extern int fn_82466418();
extern int fn_8246C798();
extern int fn_82471AC0();
extern int fn_824BC7E8();
extern int fn_82512B08();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520D38();
extern int fn_82528B78();
extern int fn_82561778();
extern int fn_8265C9E0();
extern int fn_8266C6D8();
extern int fn_8266C708();
extern int fn_8266EC60();
extern int fn_82F64988();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_82192A40;
extern unsigned int lbl_821BBD08;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D12D4;
extern unsigned int lbl_832765B8;
extern unsigned int lbl_832765BC;
extern unsigned int lbl_832766D0;
extern unsigned int lbl_832810E8;
extern unsigned int uStack_850;
extern unsigned int uStack_864;
extern unsigned int uStack_868;
extern unsigned int uStack_970;
extern unsigned int uStack_984;
extern unsigned int uStack_988;
extern unsigned int uStack_a90;


unsigned int * fn_8245E9D8(unsigned int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar6;
  int iVar7;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  __int64 lVar11;
  double dVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_a90;
  float fStack_a8c;
  unsigned char auStack_a88 [256];
  unsigned int uStack_988;
  unsigned int uStack_984;
  float fStack_980;
  float fStack_97c;
  float fStack_978;
  unsigned int uStack_970;
  float fStack_96c;
  unsigned char auStack_968 [256];
  unsigned int uStack_868;
  unsigned int uStack_864;
  float fStack_860;
  float fStack_85c;
  float fStack_858;
  unsigned short uStack_850;
  unsigned char auStack_84e [2126];
  
  fn_82520D38();
  param_1[0xb] = 0;
  *param_1 = &lbl_821BBD08;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 1;
  param_1[0x2e] = 1;
  param_1[0x2f] = 0xffffffff;
  param_1[0x30] = 0xffffffff;
  uVar6 = fn_82512B08(0,1);
  param_1[0x31] = uVar6;
  uStack_850 = lbl_820E975C;
  fn_82F691F0(auStack_84e,0,0x7fe);
  iVar7 = fn_8225F160();
  param_1[0x2b] = *(unsigned int *)(iVar7 + 8);
  iVar7 = fn_8225F160();
  param_1[0x2c] = *(unsigned int *)(iVar7 + 0x40);
  iVar7 = fn_8225F160();
  *(unsigned int *)(iVar7 + 4) = 5;
  iVar7 = fn_8225BD88();
  *(unsigned int *)(iVar7 + 0x14) = 0;
  uVar4 = fn_8225BD88();
  fn_8225BE20(uVar4,2,1,0);
  puVar10 = (unsigned int *)(param_2 + 0x48);
  if ((puVar10 != (unsigned int *)0x0) &&
     (uVar8 = (unsigned __int64)*puVar10, uVar8 != (uVar8 - 1) + (unsigned __int64)(uVar8 == 0))) {
    uVar8 = fn_8265C9E0(0x24);
    if ((uVar8 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_82528B78(uVar8,puVar10,0xffffffff821bbca4);
    }
    param_1[0x26] = uVar6;
  }
  dVar12 = (double)ltcg_pool_0_0f;
  param_1[0x16] = ltcg_pool_0_0f;
  uVar8 = fn_8251F720(param_2 + 0x60,0);
  iVar7 = fn_8265C9E0(0x40);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    uVar6 = param_1[1];
    fn_82F68CC0(iVar7,uVar8,0x20);
    *(float *)(iVar7 + 0x2c) = (float)dVar12;
    *(float *)(iVar7 + 0x30) = (float)dVar12;
    *(unsigned int *)(iVar7 + 0x20) = uVar6;
    *(float *)(iVar7 + 0x34) = (float)dVar12;
    *(unsigned int *)(iVar7 + 0x24) = 0;
    *(float *)(iVar7 + 0x38) = (float)dVar12;
    *(unsigned int *)(iVar7 + 0x28) = 0;
    *(float *)(iVar7 + 0x3c) = (float)dVar12;
  }
  param_1[0x27] = iVar7;
  if ((uVar8 & 0xffffffff) != 0) {
    fn_8251FA58(uVar8);
  }
  uVar8 = fn_8251F720(param_2 + 0x50,0);
  uVar5 = fn_8265C9E0(0xf88);
  if ((uVar5 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_82471AC0(uVar5,param_1[1],uVar8);
  }
  param_1[0x13] = uVar6;
  if ((uVar8 & 0xffffffff) != 0) {
    fn_8251FA58(uVar8);
  }
  fn_82460D38(param_1,0xffffffff821bbcb0,&uStack_850,0x400);
  fStack_860 = (float)dVar12;
  fStack_85c = (float)dVar12;
  uStack_970 = 0;
  fStack_858 = (float)dVar12;
  fStack_96c = (float)dVar12;
  fn_82F64988(auStack_968,0x80,&uStack_850);
  uStack_868 = 0;
  uStack_864 = 0;
  fn_82460F58(param_1 + 0xf,&uStack_970);
  fn_82460D38(param_1,0xffffffff821bbcb8,&uStack_850,0x400);
  fStack_980 = (float)dVar12;
  fStack_97c = (float)dVar12;
  uStack_a90 = 1;
  fStack_978 = (float)dVar12;
  fStack_a8c = (float)dVar12;
  fn_82F64988(auStack_a88,0x80,&uStack_850);
  uStack_988 = 0;
  uStack_984 = 0;
  fn_82460F58(param_1 + 0xf,&uStack_a90);
  iVar7 = fn_82270B70();
  piVar1 = *(int **)(iVar7 + 0x5c);
  for (iVar7 = *piVar1; iVar7 != piVar1[1]; iVar7 = iVar7 + 0x30) {
    iVar2 = *(int *)(iVar7 + 0x24);
    if (iVar2 != 0) {
      puVar9 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
      uVar6 = *puVar9;
      uVar13 = puVar9[1];
      uVar14 = puVar9[2];
      uVar15 = puVar9[3];
      *(float *)(iVar2 + 0x520) = (float)dVar12;
      *(unsigned int *)(iVar2 + 0x544) = 1;
      *(unsigned int *)(iVar2 + 0x548) = 1;
      *(unsigned int *)(iVar2 + 0x534) = 0;
      puVar9 = (unsigned int *)(iVar2 + 0x510U & 0xfffffff0);
      *puVar9 = uVar6;
      puVar9[1] = uVar13;
      puVar9[2] = uVar14;
      puVar9[3] = uVar15;
    }
  }
  uVar8 = fn_8251F720(param_2 + 0x58,0);
  iVar7 = fn_8265C9E0(0xf0);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    uVar6 = param_1[1];
    *(unsigned int **)(iVar7 + 0x84) = param_1;
    *(unsigned int *)(iVar7 + 0x80) = uVar6;
    fn_82F68CC0(iVar7 + 0x88,uVar8,0x60);
    puVar9 = (unsigned int *)(iVar7 + 0x38);
    lVar11 = 2;
    lbl_832766D0 = iVar7;
    do {
      puVar9[-2] = (float)dVar12;
      puVar9[-1] = 0;
      *puVar9 = 0;
      puVar3 = (unsigned int *)((unsigned int)(puVar9 + -0xe) & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      puVar3 = (unsigned int *)((unsigned int)(puVar9 + -10) & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      puVar3 = (unsigned int *)((unsigned int)(puVar9 + -6) & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      puVar9 = puVar9 + 0x10;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  param_1[0x14] = iVar7;
  if ((uVar8 & 0xffffffff) != 0) {
    fn_8251FA58(uVar8);
  }
  iVar7 = fn_8265C9E0(0x1c0);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    puVar9 = (unsigned int *)(iVar7 + 400U & 0xfffffff0);
    *puVar9 = in_register_000104d0;
    puVar9[1] = in_register_000104d4;
    puVar9[2] = in_register_000104d8;
    puVar9[3] = in_vr77;
    *(unsigned int *)(iVar7 + 0x1b0) = lbl_82192A40;
    puVar9 = (unsigned int *)(iVar7 + 0x1a0U & 0xfffffff0);
    *puVar9 = in_register_000104d0;
    puVar9[1] = in_register_000104d4;
    puVar9[2] = in_register_000104d8;
    puVar9[3] = in_vr77;
    iVar7 = fn_82561778(iVar7,0xffffffff821bc02c,2);
    *(unsigned int *)(iVar7 + 0x180) = 0;
  }
  param_1[0x28] = iVar7;
  uVar8 = fn_8251F720(param_2 + 0x4c,0);
  uVar5 = fn_8265C9E0(0x688);
  if ((uVar5 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_8246C798(uVar5,param_1[1],param_1,param_1[0x26],uVar8,param_1[0x27]);
  }
  param_1[0xe] = uVar6;
  if ((uVar8 & 0xffffffff) != 0) {
    fn_8251FA58(uVar8);
  }
  uVar8 = fn_8251F720(param_2 + 0x54,0);
  uVar5 = fn_8265C9E0(0x4d0);
  if ((uVar5 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_82466418(uVar5,uVar8);
  }
  param_1[0xd] = uVar6;
  if ((uVar8 & 0xffffffff) != 0) {
    fn_8251FA58(uVar8);
  }
  param_1[10] = 0;
  param_1[0x18] = 0;
  *(unsigned int *)(param_1[1] + 0xd58) = 1;
  lbl_832810E8 = 1;
  uVar6 = fn_824BC7E8();
  param_1[0x32] = uVar6;
  fn_82292BC0(0,0,0);
  fn_82292C30(1);
  uVar4 = 3;
  lbl_831D12D4 = 1;
  param_1[0x15] = 10;
  if (lbl_832765B8 == 0) {
    uVar4 = 2;
  }
  fn_82460610(param_1,uVar4);
  lbl_832765B8 = 0;
  uVar4 = fn_8266EC60();
  fn_8266C6D8(uVar4,0x40,0);
  uVar4 = fn_8266EC60();
  fn_8266C708(uVar4,0x40,0);
  param_1[0x25] = 0;
  lbl_832765BC = param_1;
  return param_1;
}

