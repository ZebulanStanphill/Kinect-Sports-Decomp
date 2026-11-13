extern int fn_8302D408();


void fn_8302DFF0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x88);
  if ((param_3 & 0xff) != 0) {
    uVar2 = (**(int (***)())(*piVar1 + 0x28))(piVar1);
    if ((uVar2 & 0xff) != (param_3 & 0xff)) {
      (**(int (***)())(*piVar1 + 0x2c))(piVar1,param_2,param_3);
      *(unsigned char *)(param_1 + 0x11f) = *(unsigned char *)(param_1 + 0x11f) | 0x10;
      fn_8302D408(param_1);
    }
  }
  return;
}

