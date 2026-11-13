extern int fn_823B4970();
extern int fn_828DFDB8();
extern int fn_828E9D40();
extern int fn_828E9D60();
extern int fn_828E9D90();


void fn_828E5C70(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = fn_828E9D90(*(unsigned int *)(param_1 + 0x88));
  fn_828E9D40(*(unsigned int *)(param_1 + 0x88));
  fn_828DFDB8(*(unsigned int *)(param_1 + 0x80),param_2,1);
  fn_823B4970(param_2,*(unsigned int *)(param_1 + 0x88),uVar1,0);
  fn_828E9D60(*(unsigned int *)(param_1 + 0x88),uVar1);
  return;
}

