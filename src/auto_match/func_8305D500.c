typedef unsigned char bool;
#define true 1
#define false 0


void fn_8305D500(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  param_1[1] = param_2;
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0x20) != 0) || (bVar1 = true, *(int *)(param_2 + 0x24) != 0)) {
      bVar1 = false;
    }
    param_1[2] = param_2;
    if (!bVar1) {
      iVar2 = (**(int (***)())(*param_1 + 4))(param_1);
      param_1[2] = iVar2;
    }
  }
  return;
}

