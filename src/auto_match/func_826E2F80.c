extern int fn_826A9280();
extern int fn_826AA460();
extern int fn_826E19E8();
extern int fn_826F68F8();


void fn_826E2F80(int param_1)

{
  int iVar1;
  int aiStack_20 [2];
  
  iVar1 = fn_826E19E8();
  fn_826F68F8(iVar1,param_1);
  fn_826A9280(param_1 + 0x14,"  RemoveObject2(%d)\n",*(unsigned short *)(iVar1 + 4));
  aiStack_20[0] = iVar1;
  fn_826AA460(*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0,aiStack_20);
  return;
}

