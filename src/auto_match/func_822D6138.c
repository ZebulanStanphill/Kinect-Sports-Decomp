extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822CAA28();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_822D6138(int param_1)

{
  unsigned int uVar1;
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  fn_822CAA28();
  fn_82230110(auStack_a0,0xffffffff821ad7fc);
  fn_82897DF8(param_1 + 0x20c,param_1,auStack_a0);
  fn_82230300(auStack_a0,1,0);
  fn_82230110(auStack_80,0xffffffff821ad808);
  *(unsigned char *)(param_1 + 0x270) = 0;
  fn_82897DF8(param_1 + 0x264,param_1,auStack_80);
  fn_82230300(auStack_80,1,0);
  fn_82230110(auStack_60,0xffffffff821ad814);
  *(unsigned char *)(param_1 + 0x2c8) = 0;
  fn_82897DF8(param_1 + 700,param_1,auStack_60);
  fn_82230300(auStack_60,1,0);
  fn_82230110(auStack_40,0xffffffff821ad824);
  *(unsigned int *)(param_1 + 800) = 0;
  *(unsigned int *)(param_1 + 0x370) = 0;
  *(unsigned int *)(param_1 + 0x374) = 0xffffffff;
  *(unsigned char *)(param_1 + 0x36c) = 1;
  uVar1 = fn_828EA268();
  *(unsigned int *)(param_1 + 0x378) = uVar1;
  fn_82897DF8(param_1 + 0x314,param_1,auStack_40);
  fn_82230300(auStack_40,1,0);
  return;
}

