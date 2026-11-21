typedef unsigned char bool;
#define true 1
#define false 0

void fn_827AF0F8(int *param_1)

{
  bool bVar1;
  
  if ((*(unsigned int *)(*param_1 + 4) <= (unsigned int)param_1[2]) || (bVar1 = false, param_1[7] == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
  fn_827AEE78();
  return;
}
