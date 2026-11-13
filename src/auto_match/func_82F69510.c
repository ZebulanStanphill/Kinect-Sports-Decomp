extern int _getptd();
extern int __InternalCxxFrameHandler();


unsigned __int64
fn_82F69510(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned int *param_7)

{
  int iVar1;
  
  iVar1 = _getptd();
  *(unsigned int *)(iVar1 + 0xb0) = param_2;
  __InternalCxxFrameHandler(*param_1,param_3,param_4,param_5,param_6,0,0,1);
  iVar1 = _getptd();
  *(unsigned int *)(iVar1 + 0xb0) = 0;
  *param_7 = 1;
  return 1;
}

