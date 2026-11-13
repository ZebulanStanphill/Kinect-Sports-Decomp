extern int fn_82A28568();
extern int fn_82A2A360();



unsigned __int64 fn_82E741E0(unsigned int *param_1,int *param_2)
{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  int *piVar4;
  if (*param_1 == 0) {
    uVar3 = param_1[2];
    uVar1 = fn_82A2A360();
    piVar2 = (int *)fn_82A28568(uVar1,0,((unsigned int)uVar3 - 1) * 0x18 + 0x20);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff8007000e;
    }
    for (uVar3 = 0; uVar3 < param_1[2]; uVar3++) {
      piVar4 = piVar2 + 2 + uVar3*6;
      piVar4[3] = *param_1;
      *param_1 = (int)piVar4;
    }
    *piVar2 = param_1[1];
    param_1[1] = (int)piVar2;
  }
  *param_2 = *param_1;
  *param_1 = *(int *)(*param_1 + 0xc);
  return 0;
}
