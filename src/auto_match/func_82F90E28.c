extern unsigned int *auStack_20;
extern int fn_82A1F2F8();
extern int fn_82F90628();
extern int fn_82F90680();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;


void fn_82F90E28(int param_1,int param_2)

{
  unsigned int uVar1;
  int iStack00000014;
  int iStack0000001c;
  unsigned char auStack_20 [1];
  
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  fn_82F90628(auStack_20,param_1 + 0xc);
  (**(int (***)())(*(int *)(iStack00000014 + 8) + 0x18))
            (iStack00000014 + 8,iStack0000001c,0xffffffff8216bda0);
  if (iStack0000001c != -0x7fabffd4) {
    uVar1 = fn_82A1F2F8();
    *(unsigned int *)(iStack00000014 + 0x60) = uVar1;
  }
  *(unsigned int *)(iStack00000014 + 0x58) = 2;
  fn_82F90680(auStack_20);
  return;
}

