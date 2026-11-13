extern int fn_8267C4F0();
extern int fn_826E4608();
extern int fn_826E47B0();
extern int fn_826F3458();


unsigned __int64 fn_826E4A58(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int aiStack_30;
  
  if ((param_2 & 0xffffffff) != 0) {
    fn_826F3458();
  }
  aiStack_30 = 0;
  uVar2 = fn_826E47B0(param_1,param_2,param_3,&aiStack_30,0,0,param_4,0);
  iVar1 = aiStack_30;
  if ((uVar2 & 0xffffffff) == 0) {
    if (aiStack_30 != 0) {
      fn_8267C4F0();
    }
    uVar3 = 0;
  }
  else {
    uVar3 = fn_826E4608(uVar2,aiStack_30,param_1,param_3,0);
    if (iVar1 != 0) {
      fn_8267C4F0(iVar1);
    }
  }
  return uVar3;
}

