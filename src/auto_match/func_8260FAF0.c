typedef unsigned char bool;
#define false 0


void fn_8260FAF0(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  
  if (param_5 == 3) {
    return;
  }
  piVar1 = (int *)(param_2 + 0x10);
  if (piVar1 == (int *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *piVar1 != 0;
  }
  if (bVar2) {
    *piVar1 = 0;
  }
  *piVar1 = *(int *)(param_3 + 0x10);
  return;
}

