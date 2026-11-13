extern int fn_826944C8();
extern int fn_82695370();
extern int fn_82696D38();
extern int fn_826A98D8();
extern int fn_826ADE60();


unsigned __int64 fn_826AE1D8(unsigned __int64 param_1,char *param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int aiStack_20 [4];
  
  if (*param_2 == '\a') {
    uVar1 = fn_82695370(param_2,param_1);
  }
  else if (*param_2 == '\x05') {
    fn_82696D38(aiStack_20,param_2,param_1,0xffffffffffffffff,0);
    uVar1 = fn_826A98D8(param_1,aiStack_20,0);
    lVar2 = (unsigned __int64)*(unsigned int *)(aiStack_20[0] + 8) - 1;
    *(int *)(aiStack_20[0] + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8(aiStack_20[0]);
    }
  }
  else {
    fn_826ADE60(param_1,0xffffffff820075a8);
    uVar1 = 0;
  }
  return uVar1;
}

