extern int fn_82AB7FD0();
extern int fn_82B7C438();
extern int fn_82BA02A8();


void fn_82B7CB40(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned int param_5)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  
  uVar1 = fn_82BA02A8(param_4,0xffffffff820db4ec,param_2,param_3);
  puVar2 = (unsigned int *)fn_82B7C438(uVar1,0x20);
  puVar2[1] = (int)param_2;
  *puVar2 = 0;
  puVar2[2] = (int)param_3;
  puVar2[3] = param_5;
  puVar2[4] = 0;
  puVar2[5] = 1;
  puVar2[6] = 2;
  puVar2[7] = 3;
  fn_82AB7FD0(*(unsigned int *)(param_1 + 4),puVar2);
  (**(int (***)())(param_4 + 0x59c))(*(unsigned int *)(param_4 + 0x5a4),puVar2);
  return;
}

