typedef unsigned char bool;
#define true 1
#define false 0


void fn_83016F60(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *param_2;
  param_1[1] = 0;
  *param_1 = iVar1;
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *param_3;
  while( true ) {
    piVar2 = (int *)*param_1;
    if ((iVar1 != piVar2[1]) || (bVar4 = true, param_3[1] != piVar2[2])) {
      bVar4 = false;
    }
    if (bVar4) break;
    iVar3 = *piVar2;
    param_1[1] = (int)piVar2;
    *param_1 = iVar3;
    if (iVar3 == 0) {
      return;
    }
  }
  return;
}

