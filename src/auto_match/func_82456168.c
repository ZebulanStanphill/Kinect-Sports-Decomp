extern int fn_82535298();
extern int fn_82536288();


void fn_82456168(double param_1,int *param_2)

{
  float fVar1;
  unsigned int uVar2;
  int *piVar3;
  int aiStack_10 [4];
  
  if (param_2[0xf] != 2) {
    return;
  }
  fVar1 = (float)param_2[0x16];
  param_2[0x16] = (int)(float)(param_1 + (double)fVar1);
  if ((float)(param_1 + (double)fVar1) <= (float)param_2[0x14]) {
    return;
  }
  if (param_2[0x15] != 0) {
    return;
  }
  param_2[0x15] = 1;
  if (param_2[0x10] != 0) {
    uVar2 = param_2[0x12];
    if (param_2[0x13] == 0) {
      uVar2 = (unsigned int)LZCOUNT(uVar2) >> 5;
    }
    if (uVar2 == 0) {
      piVar3 = param_2 + 0x1a;
      if (param_2[0x11] == 0) {
        piVar3 = param_2 + 0x18;
      }
      goto LAB_82456204;
    }
  }
  piVar3 = param_2 + 0x19;
  if (param_2[0x11] == 0) {
    piVar3 = param_2 + 0x17;
  }
LAB_82456204:
  aiStack_10[0] = *piVar3;
  aiStack_10[0] =
       fn_82535298(aiStack_10,*(unsigned int *)(*(int *)(*param_2 + 0x4c) + 0x84c),
                         0xffffffff83296bc0,0xffffffff83296bd0);
  fn_82536288(aiStack_10);
  return;
}

