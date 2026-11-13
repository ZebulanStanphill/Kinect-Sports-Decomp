extern int fn_825735B8();


void fn_824FFDC8(int param_1,int param_2,char param_3)

{
  __int64 lVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     (lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x8c0) + 0x128, lVar1 != 0)) {
    if (param_2 == 0) {
      uVar3 = 0xffffffff821c21e4;
    }
    else {
      if (param_2 != 1) {
        return;
      }
      uVar3 = 0xffffffff821c21f8;
    }
    piVar2 = (int *)fn_825735B8(lVar1,uVar3);
    if (piVar2 != (int *)0x0) {
      if (param_3 == '\0') {
        *(unsigned int *)(piVar2[1] + 400) = 0;
      }
      else {
        (**(int (***)())(*piVar2 + 8))(piVar2,5,0);
      }
    }
  }
  return;
}

