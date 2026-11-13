extern int fn_82CE4118();
extern int fn_82CEAC20();
extern int fn_82CFBC28();
extern int fn_82E04770();
extern int fn_83082610();


int fn_82E04828(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int aiStack_20 [2];
  
  if (((param_2 & 0xffffffff) == 0) ||
     (fn_82E04770(aiStack_20,param_1,param_2), aiStack_20[0] == 0)) {
LAB_82e048bc:
    iVar4 = 0;
  }
  else {
    iVar4 = aiStack_20[0];
    if ((param_3 & 0xffffffff) != 0) {
      fn_83082610(aiStack_20);
      uVar1 = fn_82CEAC20();
      uVar2 = fn_82CEAC20(param_3);
      iVar3 = fn_82CFBC28(uVar2,uVar1);
      iVar4 = aiStack_20[0];
      if (iVar3 != 0) {
        if (aiStack_20[0] != 0) {
          fn_82CE4118();
        }
        goto LAB_82e048bc;
      }
    }
    if (iVar4 != 0) {
      fn_82CE4118();
    }
  }
  return iVar4;
}

