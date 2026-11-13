extern unsigned int *auStack_30;
extern int fn_828176F0();
extern int fn_82817930();


void fn_82817778(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  unsigned int auStack_30;
  
  iVar1 = fn_828176F0(param_1,param_2,&auStack_30);
  *(int *)(*(int *)(iVar1 * 8 + *param_1) + 0x14) = (int)param_5;
  fn_82817930(auStack_30,param_3,param_4,param_5);
  return;
}

