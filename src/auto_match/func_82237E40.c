typedef unsigned char bool;
#define true 1
#define false 0


bool fn_82237E40(int *param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != param_1) {
    if ((int *)*piVar1 != param_1) {
      return false;
    }
    puVar2 = (unsigned int *)param_1[1];
    if (puVar2 == (unsigned int *)0x0) {
      return false;
    }
    if (piVar1 != puVar2) {
      return (int *)*puVar2 != param_1;
    }
  }
  return true;
}

