extern int fn_82FAC610();
extern int fn_82FAC850();
extern int fn_82FAE140();


void fn_82FACC70(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x5c);
  lVar2 = fn_82FAE140(*(unsigned int *)(param_1 + 0x60));
  fn_82FAC850(param_1,lVar2 + (unsigned __int64)uVar1,param_2,param_3);
  *(unsigned short *)(param_1 + 0x78) = *(unsigned short *)(param_1 + 0x78) & 0x7fff;
  fn_82FAC610(param_1,param_2,param_3);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - (int)param_3;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)param_3;
  return;
}

