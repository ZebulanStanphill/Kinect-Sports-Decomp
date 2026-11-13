extern int fn_8267D7C8();
extern int fn_8267EC58();
extern int fn_8267ECD0();
extern int fn_82A2A618();
extern int fn_82A2A790();


void fn_8267D840(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_20 [2];
  
  aiStack_20[0] = 0;
  param_1[2] = param_1[2] + -1;
  iVar1 = param_1[2];
  fn_8267D7C8(param_2,aiStack_20);
  if (*(char *)(param_1 + 1) == '\0') {
    iVar3 = fn_82A2A618(*param_1,1,0);
  }
  else {
    iVar3 = fn_82A2A790();
  }
  iVar2 = aiStack_20[0];
  if ((iVar3 != 0) && (iVar1 == 0)) {
    if (aiStack_20[0] == 0) {
      return;
    }
    fn_8267ECD0(aiStack_20[0]);
  }
  if (iVar2 != 0) {
    fn_8267EC58(iVar2);
  }
  return;
}

