extern int fn_826A9280();
extern int fn_826AA460();
extern int fn_826E1970();
extern int fn_826F6870();


void fn_826E2F08(int param_1)

{
  int iVar1;
  int aiStack_20 [2];
  
  iVar1 = fn_826E1970();
  fn_826F6870(iVar1,param_1);
  fn_826A9280(param_1 + 0x14,"  RemoveObject(%d, %d)\n",*(unsigned short *)(iVar1 + 4),
                    *(unsigned short *)(iVar1 + 6));
  aiStack_20[0] = iVar1;
  fn_826AA460(*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0,aiStack_20);
  return;
}

