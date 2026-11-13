extern unsigned int *auStack_20;
extern int fn_82D34928();
extern int fn_82D34D98();


void fn_82D35890(int param_1,unsigned __int64 param_2)

{
  unsigned short auStack_20 [4];
  
  if ((*(unsigned short *)(*(int *)(param_1 + 0x10) + 0x10) & 0x8000) == 0) {
    fn_82D34928(param_1,param_2,auStack_20);
    fn_82D34D98(param_1 + 0x1c,auStack_20[0]);
  }
  else {
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned short *)(param_1 + 0x14) = 0x7fff;
  }
  fn_82D34D98(param_1 + 0x1c,param_2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  return;
}

