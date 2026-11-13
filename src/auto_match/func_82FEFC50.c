extern int fn_82F68B5C();
extern unsigned int lbl_832642FC;


void fn_82FEFC50(int param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  
  if (*(int *)(param_1 + 0x128) == param_2) {
    uVar1 = *(unsigned int *)(param_1 + 300);
  }
  else {
    uVar1 = *(unsigned int *)(param_3 * 0x10 + param_1 + 0xec);
  }
  fn_82F68B5C(lbl_832642FC,uVar1,param_4,param_5,0);
  return;
}

