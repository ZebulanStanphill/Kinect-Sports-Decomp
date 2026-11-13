extern unsigned int *auStack_110;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82897BD8();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_823BB328(int param_1)

{
  unsigned int uVar1;
  unsigned char auStack_110 [32];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  fn_82230110(auStack_90,0xffffffff821b5cd0);
  *(unsigned char *)(param_1 + 0x40) = 0;
  fn_82897DF8(param_1 + 0x34,param_1,auStack_90);
  fn_82230300(auStack_90,1,0);
  fn_82230110(auStack_d0,0xffffffff821b5cf0);
  fn_82897DF8(param_1 + 0x8c,param_1,auStack_d0);
  fn_82230300(auStack_d0,1,0);
  fn_82230110(auStack_110,0xffffffff821b5d0c);
  fn_82897DF8(param_1 + 0xe4,param_1,auStack_110);
  fn_82230300(auStack_110,1,0);
  fn_82230110(auStack_f0,0xffffffff821b5d24);
  *(unsigned char *)(param_1 + 0x148) = 0;
  fn_82897DF8(param_1 + 0x13c,param_1,auStack_f0);
  fn_82230300(auStack_f0,1,0);
  fn_82230110(auStack_b0,0xffffffff821b5d40);
  *(unsigned char *)(param_1 + 0x1a0) = 0;
  fn_82897DF8(param_1 + 0x194,param_1,auStack_b0);
  fn_82230300(auStack_b0,1,0);
  fn_82230110(auStack_70,0xffffffff821b5d60);
  *(unsigned int *)(param_1 + 0x1f8) = 0;
  *(unsigned int *)(param_1 + 0x24c) = 0xffffffff;
  *(unsigned char *)(param_1 + 0x244) = 1;
  *(unsigned int *)(param_1 + 0x248) = 0;
  uVar1 = fn_828EA268();
  *(unsigned int *)(param_1 + 0x250) = uVar1;
  fn_82897DF8(param_1 + 0x1ec,param_1,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82897BD8(param_1 + 0x34,1);
  fn_82897BD8(param_1 + 0x8c,1);
  fn_82897BD8(param_1 + 0xe4,1);
  fn_82897BD8(param_1 + 0x13c,1);
  fn_82897BD8(param_1 + 0x194,1);
  fn_82897BD8(param_1 + 0x1ec,1);
  return;
}

