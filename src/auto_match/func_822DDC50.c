extern unsigned int *auStack_20;
extern int fn_822C7490();
extern int fn_82365BD8();
extern int fn_825114C8();


void fn_822DDC50(int param_1)

{
  unsigned int uVar1;
  unsigned char auStack_20 [16];
  
  uVar1 = fn_82365BD8(auStack_20,param_1 + 0x78);
  fn_822C7490(param_1,uVar1);
  fn_825114C8((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x54) + 0x118) + 0x14,0x14);
  *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x300) = 0;
  return;
}

