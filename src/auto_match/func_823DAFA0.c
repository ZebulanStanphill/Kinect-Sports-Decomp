extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B27E8();
extern int fn_82897DF8();
extern int fn_828EA268();


void fn_823DAFA0(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [32];
  
  fn_82230110(auStack_60,0xffffffff821b653c);
  uVar1 = fn_822B27E8(auStack_40,auStack_60,0xffffffff821ac898);
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned char *)(param_1 + 0x8c) = 0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  *(unsigned int *)(param_1 + 0x94) = 0x16;
  uVar2 = fn_828EA268(0x16);
  *(unsigned int *)(param_1 + 0x98) = uVar2;
  fn_82897DF8(param_1 + 0x34,param_1,uVar1);
  fn_82230300(auStack_40,1,0);
  fn_82230300(auStack_60,1,0);
  return;
}

