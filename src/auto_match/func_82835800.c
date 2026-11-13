extern unsigned int *auStack_30;
extern int fn_828252D0();
extern int fn_828252D8();
extern int fn_82835308();
extern int fn_82835420();
extern int fn_82835688();


void fn_82835800(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int auStack_30;
  
  auStack_30 = 0;
  uVar1 = fn_828252D0(*(int *)(param_2 + 0xa0) << 2);
  *(unsigned int *)(param_1 + 0x3c8) = uVar1;
  fn_82835420(param_1,param_2,&auStack_30);
  fn_82835688(param_1,param_2,auStack_30);
  fn_82835308(param_1,param_2,param_3);
  fn_828252D8(*(unsigned int *)(param_1 + 0x3c8));
  return;
}

