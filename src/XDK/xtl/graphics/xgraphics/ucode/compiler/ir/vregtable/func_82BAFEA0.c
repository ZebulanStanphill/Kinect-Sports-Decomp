extern int fn_82BAF5B0();
extern int fn_82BC0340();


void fn_82BAFEA0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int iVar1;
  
  *(int *)(*(int *)(param_1 + 0x18) + 0xc) = (int)param_3;
  *(int *)(*(int *)(param_1 + 0x18) + 0x20) = (int)param_2;
  iVar1 = fn_82BC0340(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 0x18));
  if (iVar1 == 0) {
    fn_82BAF5B0(param_1,param_2,param_3,param_4);
  }
  return;
}

