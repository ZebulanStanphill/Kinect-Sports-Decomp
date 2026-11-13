extern int fn_82FEFF00();
extern int fn_82FF0A80();
extern unsigned int lbl_83264574;
extern unsigned int lbl_83264578;
extern unsigned int lbl_8326457C;


void fn_82FF2B48(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  
  RtlEnterCriticalSection(0xffffffff83264580);
  *(unsigned int *)(param_1 + 0x10) = 0;
  iVar1 = param_1;
  if (lbl_83264578 != 0) {
    *(int *)(lbl_83264578 + 0x10) = param_1;
    iVar1 = lbl_83264574;
  }
  lbl_83264574 = iVar1;
  lbl_8326457C = lbl_8326457C + 1;
  lbl_83264578 = param_1;
  RtlLeaveCriticalSection(0xffffffff83264580);
  fn_82FEFF00(param_1);
  fn_82FF0A80(param_1,param_2,param_3 == 1,0);
  return;
}

