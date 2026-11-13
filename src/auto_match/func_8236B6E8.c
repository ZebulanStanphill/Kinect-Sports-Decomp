extern int fn_822ABA88();
extern int fn_82528EE0();


unsigned __int64 fn_8236B6E8(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  param_2 = param_2 * 4;
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + param_2);
  uVar2 = piVar1[1] - *piVar1 >> 2;
  uVar4 = (unsigned __int64)(int)uVar2;
  if (1 < uVar2) {
    piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2);
    fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),1,uVar4,param_2,0);
  }
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2);
  lVar3 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0);
  lVar5 = lVar3 + 0x30;
  if (lVar3 + 0x30 == 0) {
    lVar5 = -0x7de4d1ac;
  }
  if ((uVar4 & 0xffffffff) == 2) {
    fn_82528EE0(param_3,0x60,0xffffffff821b2e60,lVar5);
  }
  else {
    fn_82528EE0(param_3,0x60,0xffffffff821a9944,lVar5);
  }
  return 1;
}

