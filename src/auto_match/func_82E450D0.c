extern int fn_82E44D20();
extern int fn_82E44DA0();
extern int fn_82F64CE0();
extern int fn_82F700E0();


unsigned __int64 fn_82E450D0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar3;
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  iVar3 = fn_82E44DA0(param_1,(unsigned __int64)param_1[1] + 0x20);
  if (iVar3 < 0) {
    uVar1 = -(unsigned __int64)((*param_1 & 0x8000000) != 0) & 0xffffffff8007000e;
  }
  else {
    fn_82F700E0(param_2,(unsigned __int64)param_1[3] + ((unsigned __int64)param_1[1] & 0x7fffffff) * 2,
                      param_3);
    lVar2 = fn_82F64CE0();
    fn_82E44D20(param_1,lVar2 + (unsigned __int64)param_1[1]);
    uVar1 = 0;
  }
  return uVar1;
}

