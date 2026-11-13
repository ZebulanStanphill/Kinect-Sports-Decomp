extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_822447E8(int param_1)

{
  unsigned int uVar1;
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  fn_82230110(auStack_b0,0xffffffff821975f0);
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned char *)(param_1 + 0x8c) = 0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  *(unsigned int *)(param_1 + 0x94) = 6;
  uVar1 = fn_828EA268(6);
  *(unsigned int *)(param_1 + 0x98) = uVar1;
  fn_82897DF8(param_1 + 0x34,param_1,auStack_b0);
  fn_82230300(auStack_b0,1,0);
  fn_82230110(auStack_90,0xffffffff82197604);
  *(unsigned int *)(param_1 + 0xa8) = 0;
  *(unsigned char *)(param_1 + 0xf4) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  *(unsigned int *)(param_1 + 0xfc) = 6;
  uVar1 = fn_828EA268(6);
  *(unsigned int *)(param_1 + 0x100) = uVar1;
  fn_82897DF8(param_1 + 0x9c,param_1,auStack_90);
  fn_82230300(auStack_90,1,0);
  fn_82230110(auStack_70,0xffffffff8219761c);
  *(unsigned int *)(param_1 + 0x110) = 0;
  *(unsigned char *)(param_1 + 0x15c) = 0;
  *(unsigned int *)(param_1 + 0x160) = 0;
  *(unsigned int *)(param_1 + 0x164) = 0x3fffffff;
  uVar1 = fn_828EA268();
  *(unsigned int *)(param_1 + 0x168) = uVar1;
  fn_82897DF8(param_1 + 0x104,param_1,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82230110(auStack_50,0xffffffff8219762c);
  *(unsigned char *)(param_1 + 0x178) = 0;
  fn_82897DF8(param_1 + 0x16c,param_1,auStack_50);
  fn_82230300(auStack_50,1,0);
  return;
}

