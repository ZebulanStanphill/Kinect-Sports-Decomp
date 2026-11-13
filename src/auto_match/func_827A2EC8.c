extern int fn_82790538();
extern int fn_82794EA0();
extern int fn_82795C78();
extern int fn_82795EE0();
extern int fn_827A2C28();
extern int fn_827A2E70();


void fn_827A2EC8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  fn_827A2C28();
  iVar1 = param_1 + 0x14;
  fn_82794EA0(iVar1);
  fn_82790538(iVar1,*(unsigned int *)(param_1 + 0x10),param_2,param_3);
  fn_82795C78(iVar1,*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 8),0,
                    *(unsigned int *)(param_1 + 0x18));
  fn_82795EE0(iVar1,*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 8));
  fn_827A2E70(param_1);
  return;
}

