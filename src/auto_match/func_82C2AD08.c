extern int fn_82C10B28();
extern int fn_82C2A670();
extern int fn_82C2A938();


void fn_82C2AD08(int param_1)

{
  int iVar1;
  int aiStack_20 [4];
  
  aiStack_20[0] = *(int *)(param_1 + 0x2c);
  iVar1 = fn_82C2A670(param_1);
  if (iVar1 < 0) return;
  iVar1 = fn_82C2A938(param_1);
  if (iVar1 < 0) return;
  iVar1 = fn_82C10B28(*(unsigned int *)(aiStack_20[0] + 0x30),0x1f,aiStack_20[0] + 0x10);
  if (iVar1 < 0) return;
  fn_82C10B28(*(unsigned int *)(aiStack_20[0] + 0x30),0x1f,aiStack_20);
}
