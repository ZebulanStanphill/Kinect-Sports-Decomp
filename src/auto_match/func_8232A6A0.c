extern unsigned int *auStack_58;
extern int fn_828B5580();
extern int fn_828B55B0();


void fn_8232A6A0(unsigned __int64 param_1,int param_2)

{
  unsigned __int64 in_r7;
  unsigned __int64 uVar1;
  int (**pcStack_60)();
  unsigned char auStack_58 [88];
  
  uVar1 = *(unsigned __int64 *)(param_2 + 8);
  fn_828B5580(auStack_58,in_r7);
  pcStack_60 = (int (**)())(uVar1 >> 0x20);
  (*pcStack_60)(param_1,(unsigned __int64)*(unsigned int *)(param_2 + 0x10) + (uVar1 & 0xffffffff));
  fn_828B55B0(in_r7);
  return;
}

