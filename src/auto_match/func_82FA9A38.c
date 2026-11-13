extern int fn_82FAE490();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


unsigned __int64
fn_82FA9A38(int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5
             ,unsigned __int64 param_6,unsigned __int64 param_7,char param_8)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uStack00000024;
  int *in_stack_00000054;
  int aiStack_30;
  
  piVar1 = in_stack_00000054;
  iVar2 = param_1[0x10];
  param_4 = ((param_4 & 0xffffffff) >> 0x1f) - 1 & param_4;
  if (iVar2 == 0) {
    uVar3 = -(unsigned __int64)(unsigned int)param_1[3];
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x5c);
  }
  if ((int)uVar3 < (int)param_5) {
    uVar3 = param_5;
  }
  if ((int)uVar3 < param_1[0x11]) {
    uVar3 = (unsigned __int64)(unsigned int)param_1[0x11];
  }
  if (((param_7 & 0xff) == 0) || (0 < (int)uVar3)) {
    param_4 = uVar3 + param_4;
  }
  uVar4 = 2;
  uStack00000024 = param_3;
  if (iVar2 == 0) {
    if ((param_8 != '\0') || ((int)param_6 == 0)) {
      *in_stack_00000054 = (int)param_4;
      uVar4 = 1;
    }
  }
  else {
    uVar4 = fn_82FAE490(*(unsigned int *)(iVar2 + 0x60),param_4,param_6,param_7,
                              in_stack_00000054);
  }
  *piVar1 = *piVar1 - param_1[0x11];
  if (((int)uVar4 == 1) &&
     (iVar2 = (**(int (***)())(*param_1 + 0xc))(param_1,param_2,&stack0x00000024,&aiStack_30), iVar2 != 0
     )) {
    iVar2 = *piVar1;
    if (param_1[3] < 0) {
      iVar2 = param_1[3] + iVar2;
    }
    if (aiStack_30 < iVar2) {
      return 2;
    }
  }
  return uVar4;
}

