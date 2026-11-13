extern int fn_826E96C8();
extern int fn_82F67CF8();
extern int fn_82F6BE90();


unsigned int  fn_826E9A48(int param_1,unsigned __int64 param_2,int param_3)

{
  int uVar1;
  unsigned int uVar2;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x1c) != 2)) {
    fn_82F6BE90(*(unsigned int *)(param_1 + 0x10));
  }
  *(unsigned int *)(param_1 + 0x1c) = 2;
  uVar1 = fn_82F67CF8(param_2,1,param_3,*(unsigned int *)(param_1 + 0x10));
  if ((int)uVar1 < (__int64)param_3) {
    uVar2 = fn_826E96C8();
    *(unsigned int *)(param_1 + 0x18) = uVar2;
  }
  return uVar1;
}

