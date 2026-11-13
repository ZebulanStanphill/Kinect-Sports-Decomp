extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_82243200(int param_1)

{
  unsigned int uVar1;
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [32];
  int sub,sub2;
  
  fn_82230110(auStack_90,"Session");
  fn_82897DF8(param_1 + 0x34,param_1,auStack_90);
  fn_82230300(auStack_90,1,0);
  fn_82230110(auStack_70,"Session Request");
  sub=param_1+0x8c;
  *(unsigned int *)(sub + 0xc) = 0;
  *(unsigned int *)(sub + 0x60) = 0xffffffff;
  *(unsigned char *)(sub + 0x58) = 1;
  *(unsigned int *)(sub + 0x5c) = 0;
  uVar1 = fn_828EA268(0xffffffff);
  *(unsigned int *)(sub + 0x64) = uVar1;
  fn_82897DF8(sub,param_1,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82230110(auStack_50,"Session Reply");
  sub2=param_1+0xf4;
  *(unsigned int *)(sub2 + 0x60) = 0xffffffff;
  *(unsigned int *)(sub2 + 0xc) = 0;
  *(unsigned char *)(sub2 + 0x58) = 1;
  *(unsigned int *)(sub2 + 0x5c) = 0;
  uVar1 = fn_828EA268(0xffffffff);
  *(unsigned int *)(sub2 + 0x64) = uVar1;
  fn_82897DF8(sub2,param_1,auStack_50);
  fn_82230300(auStack_50,1,0);
  return;
}

