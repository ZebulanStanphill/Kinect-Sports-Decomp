extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82E07730();
extern int fn_83082568();
extern unsigned int uStack_24;
extern unsigned int uStack_28;


int * fn_82E077A0(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  int aiStack_30;
  struct { unsigned int first; unsigned int second; } stack_pair_28;

  
  aiStack_30 = 0;
  iVar1 = fn_82E07730(param_2,param_3);
  stack_pair_28.first = 0;
  stack_pair_28.second = 0;
  if (-1 < iVar1) {
    piVar2 = (int *)(iVar1 * 8 + *(int *)(param_2 + 4) + 4);
  }
  else {
    piVar2 = (int *)fn_83082568(&aiStack_30,&stack_pair_28.first);
  }
  if (*piVar2 != 0) {
    fn_82CE4040();
  }
  *param_1 = *piVar2;
  if ((-1 >= iVar1) && (aiStack_30 != 0)) {
    fn_82CE4118();
  }
  return param_1;
}

