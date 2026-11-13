#define true 1
extern int fn_82F68B6C();


void fn_82BA7310(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  while( true ) {
    if (*piVar2 == param_2) {
      return;
    }
    if (*piVar2 == -1) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0x3f < iVar1) {
      fn_82F68B6C(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820defa8,0xd6);
      return;
    }
  }
  param_1[iVar1] = param_2;
  return;
}

