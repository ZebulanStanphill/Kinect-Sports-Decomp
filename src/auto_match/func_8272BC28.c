typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_8268C210();
extern int fn_8269A190();
extern int fn_8269A458();
extern int fn_8269AE88();
extern int fn_8269B888();
extern int fn_826B1560();
extern int fn_82705498();
extern int fn_8271FCF8();
extern int fn_8271FDB0();
extern int fn_827224E0();
extern int fn_827228C8();
extern int fn_82722B00();
extern int fn_82725328();
extern int fn_82727520();
extern int fn_82799B80();
extern int fn_82799BA8();
extern int fn_82799BD0();
extern int fn_8279B2C8();
extern int fn_827A22A8();
extern unsigned int lbl_82011418;
extern unsigned int lbl_8201146C;
extern unsigned int lbl_82011478;


unsigned int *
fn_8272BC28(unsigned int *param_1,int param_2,int param_3,int *param_4,unsigned int *param_5)

{
  bool bVar1;
  int iVar5;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar6;
  __int64 lVar4;
  unsigned int uVar7;
  unsigned char bVar8;
  unsigned short uVar9;
  unsigned int *puVar10;
  unsigned int auStack_50 [20];
  
  auStack_50[0] = *param_5;
  fn_827224E0(param_1,param_3,param_4,auStack_50);
  param_1[0x27] = param_2;
  *param_1 = &lbl_82011478;
  bVar1 = false;
  param_1[3] = &lbl_8201146C;
  param_1[0x1a] = &lbl_82011418;
  param_1[0x28] = 0;
  puVar10 = param_1 + 0x1a;
  iVar5 = (**(int (***)())(*param_4 + 0x5c))(param_4);
  fn_8269A190(param_1 + 0x2d,(unsigned __int64)*(unsigned int *)(iVar5 + 0x78) + 0x254,param_2 + 0x4c);
  *(unsigned char *)(param_1 + 0x2e) = 0;
  fn_8268C210(param_1 + 0x33);
  param_1[0x34] = 0;
  *(unsigned char *)(param_1 + 0x35) = 1;
  fn_82725328(param_1 + 0x36);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x29] = *(int *)(param_3 + 0x1c) + 0x18;
  *(unsigned short *)(param_1 + 0x32) = 0;
  param_1[0x2a] = *(unsigned int *)(param_2 + 0x54);
  *(unsigned short *)(param_1 + 0x32) = *(unsigned short *)(param_2 + 0x50) & 4;
  if ((*(unsigned short *)(param_2 + 0x50) >> 7 & 1) == 0) {
    uVar9 = *(unsigned short *)(param_1 + 0x32) & 0xfffd;
  }
  else {
    uVar9 = *(unsigned short *)(param_1 + 0x32) | 2;
  }
  *(unsigned short *)(param_1 + 0x32) = uVar9;
  auStack_50[0] = 0xffffff;
  *(unsigned short *)(param_1 + 0x32) = *(unsigned short *)(param_1 + 0x32) | 0x80;
  param_1[0x39] = 0;
  param_1[0x2b] = 0xffffff;
  param_1[0x2c] = 0;
  if ((*(unsigned short *)(param_2 + 0x50) >> 6 & 1) != 0) {
    *(unsigned char *)(param_1 + 0x2b) = 0xff;
    *(unsigned char *)(param_1 + 0x2c) = 0xff;
  }
  iVar5 = (**(int (***)())(*param_4 + 0x40))(param_4);
  uVar2 = fn_8269A458(param_1);
  uVar3 = fn_8269AE88(param_1);
  iVar6 = fn_826B1560(uVar3,uVar2,10);
  if (iVar6 != 0) {
    *(unsigned int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1U & 0x8fffffff;
  }
  if (param_1[0x1b] != 0) {
    fn_826824B0();
  }
  param_1[0x1b] = iVar6;
  lVar4 = (**(int (***)())(*param_4 + 0x5c))(param_4);
  fn_8271FCF8(lVar4 + 0x78,puVar10);
  uVar2 = (**(int (***)())(*param_4 + 0x5c))(param_4);
  fn_8271FDB0(uVar2,puVar10,puVar10);
  iVar6 = fn_82705498(iVar5);
  if (iVar6 != 0) {
    *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
  }
  lVar4 = fn_8267B890(*(unsigned int *)(iVar5 + 0x14),0x140,0);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar2 = fn_8269B888(param_1);
    uVar3 = (**(int (***)())(*param_4 + 0x4c))(param_4);
    uVar7 = fn_827A22A8(lVar4,iVar6,uVar3,uVar2);
  }
  if (param_1[0x28] != 0) {
    fn_8267C498();
  }
  param_1[0x28] = uVar7;
  fn_827228C8(uVar7,param_1 + 0x36);
  *(unsigned char *)(*(int *)(param_1[0x28] + 8) + 0x20) = *(unsigned char *)(*(int *)(param_1[0x28] + 8) + 0x20) | 2;
  fn_82727520(param_1);
  if (0 < *(int *)(param_2 + 0x34)) {
    *(int *)(param_1[0x28] + 0x108) = *(int *)(param_2 + 0x34);
  }
  fn_8279B2C8(param_1[0x28],param_2 + 0x1c,1);
  if ((*(unsigned char *)(param_2 + 0x50) & 1) != 0) {
    *(unsigned char *)(param_1[0x28] + 0x13d) = *(unsigned char *)(param_1[0x28] + 0x13d) | 0x20;
    *(unsigned char *)(param_1[0x28] + 0x13d) = *(unsigned char *)(param_1[0x28] + 0x13d) | 0x40;
  }
  iVar5 = param_1[0x28];
  if ((*(unsigned short *)(param_2 + 0x50) >> 1 & 1) == 0) {
    bVar8 = *(unsigned char *)(iVar5 + 0x13d) & 0xfb;
  }
  else {
    bVar8 = *(unsigned char *)(iVar5 + 0x13d) | 4;
  }
  *(unsigned char *)(iVar5 + 0x13d) = bVar8;
  uVar9 = *(unsigned short *)(param_2 + 0x50);
  if ((uVar9 >> 4 & 1) != 0) {
    if (((uVar9 & 1) == 0) || ((uVar9 >> 1 & 1) == 0)) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    fn_82799B80(param_1[0x28]);
  }
  if ((uVar9 >> 4 & 1) != 0) {
    fn_82799BA8(param_1[0x28]);
  }
  if ((*(unsigned short *)(param_2 + 0x50) & 1) != 0) {
    fn_82799BD0(param_1[0x28]);
  }
  if ((*(unsigned short *)(param_1 + 0x32) >> 2 & 1) != 0) {
    *(unsigned char *)(param_1[0x28] + 0x13d) = *(unsigned char *)(param_1[0x28] + 0x13d) | 0x10;
  }
  if ((*(unsigned short *)(param_1[0x27] + 0x50) >> 10 & 1) != 0) {
    *(unsigned char *)(param_1[0x28] + 0x13d) = *(unsigned char *)(param_1[0x28] + 0x13d) | 0x40;
  }
  if (*(int *)(param_1[0x28] + 0x114) == 0) {
    uVar9 = *(unsigned short *)(param_1[0x27] + 0x50) >> 3;
  }
  else {
    uVar9 = *(unsigned short *)(*(int *)(param_1[0x28] + 0x114) + 0x68);
  }
  if (((uVar9 & 1) == 0) || ((*(unsigned short *)(param_1[0x27] + 0x50) >> 5 & 1) != 0)) {
    fn_82722B00(param_1);
  }
  if (iVar6 != 0) {
    fn_8267C498(iVar6);
  }
  return param_1;
}

