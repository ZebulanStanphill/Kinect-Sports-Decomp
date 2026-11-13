extern int fn_82AB7FD0();
extern int fn_82B7C438();
extern int fn_82BA02A8();


void fn_82B7C6B0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned int param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  
  uVar2 = fn_82BA02A8(param_4,0xffffffff820db4ec,param_2,param_3);
  puVar3 = (unsigned int *)fn_82B7C438(uVar2,0x20);
  puVar3[1] = (int)param_2;
  *puVar3 = 0;
  puVar3[2] = (int)param_3;
  puVar3[3] = param_5;
  puVar3[4] = 0;
  puVar3[5] = 1;
  puVar3[6] = 2;
  puVar3[7] = 3;
  if (*(char *)(param_4 + 0x564) == '\0') {
    uVar1 = *(unsigned int *)(param_1 + 8);
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 4);
  }
  fn_82AB7FD0(uVar1,puVar3);
  (**(int (***)())(param_4 + 0x59c))(*(unsigned int *)(param_4 + 0x5a4),puVar3);
  return;
}

