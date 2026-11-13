extern int fn_82D00450();


void fn_82E14778(__int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int *piVar1;
  unsigned int uVar2;
  
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = 0;
  }
  piVar1 = (int *)fn_82D00450(param_1 + 4,param_2,0);
  if (piVar1 != (int *)0x0) {
    if (param_3 != (unsigned int *)0x0) {
      uVar2 = (**(int (***)())(*piVar1 + 0x1c))(piVar1);
      *param_3 = uVar2;
    }
    (**(int (***)())(*piVar1 + 0x18))(piVar1);
  }
  return;
}

