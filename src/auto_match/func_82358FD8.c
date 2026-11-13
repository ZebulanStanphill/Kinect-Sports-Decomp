extern int fn_82528BF8();
extern int fn_82528EE0();


__int64 fn_82358FD8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  
  if ((*(int *)(param_1 + 0x98) != 0) &&
     (lVar1 = fn_82528BF8(*(int *)(param_1 + 0x98),param_4,param_2,param_3,0,1), lVar1 != 0))
  {
    return lVar1;
  }
  lVar1 = 0;
  if ((*(int *)(param_1 + 0x9c) == 0) ||
     (lVar1 = fn_82528BF8(*(int *)(param_1 + 0x9c),param_4,param_2,param_3,0,1), lVar1 == 0))
  {
    fn_82528EE0(param_2,param_3,0xffffffff820e975c);
  }
  return lVar1;
}

