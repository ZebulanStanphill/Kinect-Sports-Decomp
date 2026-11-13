extern unsigned int *auStack_50;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern int fn_82F64988();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_822A4830(int *param_1,unsigned int param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned char *puStack_58;
  unsigned char auStack_50 [64];
  
  *(unsigned int *)(*param_1 + 0x50) = param_2;
  if (*(int *)(*param_1 + 0x28) == 0) {
    return;
  }
  uStack_60 = 0;
  uStack_5c = 0;
  if (param_3 == 1) {
    uVar1 = 0xffffffff821ac1e0;
  }
  else if (param_3 == 2) {
    uVar1 = 0xffffffff821ac1d0;
  }
  else if (param_3 == 3) {
    uVar1 = 0xffffffff821ac1f8;
  }
  else if (param_3 == 4) {
    uVar1 = 0xffffffff821ac1b0;
  }
  else {
    if (param_3 != 5) goto LAB_822a48d4;
    uVar1 = 0xffffffff821ac1c0;
  }
  fn_82F64988(auStack_50,0x20,uVar1);
LAB_822a48d4:
  fn_82273CD8(&uStack_60,5);
  puStack_58 = auStack_50;
  fn_82672C20(*(unsigned int *)(*param_1 + 0x28),0xffffffff821ac2b8,&uStack_60,1);
  fn_82273C88(&uStack_60);
  return;
}

