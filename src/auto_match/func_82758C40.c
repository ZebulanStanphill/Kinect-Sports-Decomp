extern int fn_82758958();
extern int fn_827594F8();


void fn_82758C40(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  fn_827594F8(param_1 + 0x44,0);
  *(unsigned int *)(param_1 + 0x48) = param_2;
  iVar1 = *(int *)(param_1 + 8);
  fn_82758958(iVar1 + 0x50,param_1 + 0x44);
  uVar2 = *(unsigned int *)(iVar1 + 0x54);
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0xc) = uVar2;
  return;
}

