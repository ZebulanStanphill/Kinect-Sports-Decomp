extern int fn_8265C9E0();
extern int fn_828A7138();
extern int fn_828A8008();
extern int fn_828E38D8();


void fn_828E9528(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int aiStack_20 [4];
  
  if ((param_1[1] == 0) || (*(int *)(param_1[1] + 4) != 1)) {
    uVar1 = fn_8265C9E0(0x10);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828A8008(uVar1,(unsigned int *)*param_1,*(unsigned int *)*param_1);
    }
    fn_828E38D8(param_1,uVar2);
    uVar2 = 0;
    aiStack_20[0] = *(int *)**(unsigned int **)*param_1;
  }
  else {
    aiStack_20[0] = param_1[2];
    if ((int *)aiStack_20[0] == (int *)**(unsigned int **)*param_1) {
      aiStack_20[0] = *(int *)**(unsigned int **)*param_1;
    }
    uVar2 = 1;
  }
  fn_828A7138(param_1,1,aiStack_20,uVar2);
  return;
}

