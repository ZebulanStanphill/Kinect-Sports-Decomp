typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int iStack00000020;


void fn_82FF7EB0(int *param_1,int *param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iStack00000020;
  
  piVar1 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  *param_1 = (int)piVar1;
  if (piVar1 == piVar2) {
    return;
  }
  iStack00000020 = (int)(param_3 >> 0x20);
  while( true ) {
    piVar1 = (int *)*param_1;
    if ((*piVar1 != iStack00000020) ||
       (bVar3 = true, (unsigned __int64)(unsigned int)piVar1[1] != (param_3 & 0xffffffff))) {
      bVar3 = false;
    }
    if (bVar3) break;
    *param_1 = (int)(piVar1 + 3);
    if (piVar1 + 3 == piVar2) {
      return;
    }
  }
  return;
}

