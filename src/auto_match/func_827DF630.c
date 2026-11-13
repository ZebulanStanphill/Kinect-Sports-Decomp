extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_6e;
extern int fn_827DC918();
extern int fn_827DE048();
extern int fn_827E0DD8();
extern unsigned int iStack00000014;
extern unsigned int uStack_6f;
extern unsigned int uStack_70;


int fn_827DF630(int param_1)

{
  unsigned __int64 uVar1;
  int iStack00000014;
  unsigned char uStack_70;
  unsigned char uStack_6f;
  unsigned char auStack_6e [1];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  iStack00000014 = param_1;
  uVar1 = fn_827DE048(auStack_60);
  fn_827E0DD8(param_1,&uStack_70,uVar1);
  uVar1 = fn_827DE048(auStack_40);
  fn_827E0DD8(param_1 + 0x78,&uStack_6f,uVar1);
  uVar1 = fn_827DE048(auStack_60);
  fn_827E0DD8(param_1 + 0xf0,auStack_6e,uVar1);
  uVar1 = fn_827DE048(auStack_40);
  fn_827DC918(param_1 + 0x168,uVar1);
  *(unsigned int *)(param_1 + 0x1ac) = 0;
  *(unsigned int *)(param_1 + 0x1b0) = 0;
  RtlInitializeCriticalSection(param_1 + 400);
  return param_1;
}

