extern int fn_82FF8358();
extern unsigned int lbl_832642E8;


char fn_82FA96A8(int param_1)

{
  int iVar1;
  int aiStack_20 [8];
  
  aiStack_20[0] = param_1 + 4;
  if (param_1 == 0) {
    aiStack_20[0] = 0;
  }
  aiStack_20[2] = *(unsigned int *)(param_1 + 0x28);
  aiStack_20[1] = 0;
  iVar1 = fn_82FF8358((unsigned __int64)lbl_832642E8 + 0x30,aiStack_20);
  return (iVar1 == 0) + '\x01';
}

