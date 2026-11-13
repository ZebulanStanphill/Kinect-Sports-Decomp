extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_cc;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_82897B40();
extern int fn_82897D70();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_824CD610(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_1d0 [32];
  unsigned char auStack_1b0 [32];
  unsigned char auStack_190 [32];
  unsigned char auStack_170 [32];
  unsigned char auStack_150 [32];
  unsigned char auStack_130 [32];
  unsigned char auStack_110 [32];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [4];
  unsigned char auStack_cc [140];
  
  fn_82230110(auStack_1b0,0xffffffff821c0b64);
  fn_82897DF8(param_1 + 0x34,param_1,auStack_1b0);
  fn_82230300(auStack_1b0,1,0);
  fn_82897D70(param_1 + 0x34);
  fn_82230110(auStack_130,0xffffffff821c0b70);
  fn_82897DF8(param_1 + 0x8c,param_1,auStack_130);
  fn_82230300(auStack_130,1,0);
  fn_82897D70(param_1 + 0x8c);
  iVar3 = param_1 + 0xe4;
  uVar4 = 0;
  do {
    fn_8223CFC0(auStack_d0,2,1);
    uVar1 = fn_82240158(auStack_d0,0xffffffff821c0b80);
    fn_82520AC8(uVar1,uVar4);
    fn_822403C8(auStack_170,auStack_cc);
    fn_82897DF8(iVar3,param_1,auStack_170);
    fn_82230300(auStack_170,1,0);
    fn_82897D70(iVar3);
    fn_8223DCC8(auStack_d0);
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x58;
  } while ((uVar4 & 0xffffffff) < 0x14);
  fn_82230110(auStack_f0,0xffffffff821c0b8c);
  *(unsigned int *)(param_1 + 0x880) = 0;
  *(unsigned int *)(param_1 + 0x8d4) = 0xffffffff;
  *(unsigned char *)(param_1 + 0x8cc) = 1;
  *(unsigned int *)(param_1 + 0x8d0) = 0;
  uVar2 = fn_828EA268(0xffffffffffffffff);
  *(unsigned int *)(param_1 + 0x8d8) = uVar2;
  fn_82897DF8(param_1 + 0x874,param_1,auStack_f0);
  fn_82230300(auStack_f0,1,0);
  fn_82897B40(param_1 + 0x874);
  fn_82230110(auStack_1d0,0xffffffff821c0b98);
  *(unsigned int *)(param_1 + 0x93c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x8e8) = 0;
  *(unsigned char *)(param_1 + 0x934) = 1;
  *(unsigned int *)(param_1 + 0x938) = 0;
  uVar2 = fn_828EA268(0xffffffffffffffff);
  *(unsigned int *)(param_1 + 0x940) = uVar2;
  fn_82897DF8(param_1 + 0x8dc,param_1,auStack_1d0);
  fn_82230300(auStack_1d0,1,0);
  fn_82897B40(param_1 + 0x8dc);
  fn_82230110(auStack_190,0xffffffff821c0ba4);
  *(unsigned char *)(param_1 + 2000) = 1;
  fn_82897DF8(param_1 + 0x7c4,param_1,auStack_190);
  fn_82230300(auStack_190,1,0);
  fn_82897D70(param_1 + 0x7c4);
  fn_82230110(auStack_150,0xffffffff821c0bb0);
  *(unsigned char *)(param_1 + 0x828) = 1;
  fn_82897DF8(param_1 + 0x81c,param_1,auStack_150);
  fn_82230300(auStack_150,1,0);
  fn_82230110(auStack_110,0xffffffff821c0bc4);
  fn_82897DF8(param_1 + 0x944,param_1,auStack_110);
  fn_82230300(auStack_110,1,0);
  fn_82897D70(param_1 + 0x944);
  return;
}

