extern int fn_8236CE28();
extern int fn_823C2230();


void fn_823C06A0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  __int64 lVar1;
  int *piVar2;
  
  if (param_4 != 0) {
    fn_823C2230(param_2,*(unsigned int *)(param_2 + 0xe10));
    if (*(int *)(param_2 + 0x4c0) == 0) {
      fn_8236CE28(param_1,param_2);
    }
    else {
      piVar2 = (int *)(param_2 + 0xe14);
      lVar1 = 3;
      do {
        if (*piVar2 != *(int *)(param_2 + 0xe10)) {
          fn_823C2230(param_2);
        }
        lVar1 = lVar1 + -1;
        piVar2 = piVar2 + 1;
      } while (lVar1 != 0);
    }
  }
  return;
}

