extern int fn_825C3060();
extern int fn_825C3108();
extern int fn_825C31F0();
extern int fn_825C32D0();
extern int fn_825C3488();
extern int fn_825C3A68();
extern unsigned int iStack_18;


/* WARNING: Removing unreachable block (ram,0x82573c7c) */

void fn_82573C00(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iStack_18;
  
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 == 1) {
    fn_825C32D0();
    if (7 < *param_4) {
      return;
    }
    if (iStack_18 == 0) {
      return;
    }
    param_4[*param_4 + 1] = iStack_18;
  }
  else {
    if (sVar1 == 4) {
      iVar2 = fn_825C3060();
    }
    else if (sVar1 == 5) {
      iVar2 = fn_825C3108();
    }
    else {
      if (sVar1 != 6) {
        if (sVar1 != 10) {
          fn_825C3A68();
          return;
        }
        fn_825C3488();
        return;
      }
      iVar2 = fn_825C31F0();
    }
    if (7 < *param_4) {
      return;
    }
    if (iVar2 == 0) {
      return;
    }
    param_4[*param_4 + 1] = iVar2;
  }
  *param_4 = *param_4 + 1;
  return;
}

