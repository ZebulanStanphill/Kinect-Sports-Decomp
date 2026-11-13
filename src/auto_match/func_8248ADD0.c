extern int fn_8265CA60();
extern int fn_82A1DD38();


unsigned __int64 fn_8248ADD0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  
  if (*(unsigned int *)(param_1 + 0xc) == 0) {
    uVar1 = fn_8265CA60(param_3);
    *(unsigned int *)(param_1 + 0xc) = uVar1;
    *(int *)(param_1 + 0x10) = (int)param_3;
  }
  fn_82A1DD38(*(unsigned int *)(param_1 + 0xc),param_2,*(unsigned int *)(param_1 + 0x10));
  return 1;
}

