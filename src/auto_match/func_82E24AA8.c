extern unsigned int *auStack_2c;
extern int fn_82E242C8();


__int64 fn_82E24AA8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  __int64 lVar2;
  int iVar3;
  int *piStack_30;
  unsigned int auStack_2c;
  
  piVar1 = *(int **)(param_1 + 0x10c);
  auStack_2c = 0;
  piStack_30 = (int *)0x0;
  if ((param_2 & 0xffffffff) == 0) {
    lVar2 = (**(int (***)())(*piVar1 + 0x20))(piVar1,param_3);
  }
  else {
    lVar2 = (**(int (***)())(*piVar1 + 0x18))(piVar1,param_3,param_2,0);
  }
  if (-1 < lVar2) {
    while (iVar3 = (**(int (***)())(**(int **)(param_1 + 0x10c) + 0x1c))
                             (*(int **)(param_1 + 0x10c),&auStack_2c,&piStack_30), -1 < iVar3) {
      if (piStack_30 == (int *)0x0) {
        return lVar2;
      }
      lVar2 = fn_82E242C8(param_1);
      if ((lVar2 < 0) ||
         (lVar2 = (**(int (***)())(**(int **)(param_1 + 0x100) + 0x30))
                            (*(int **)(param_1 + 0x100),piStack_30), lVar2 < 0)) break;
      if (piStack_30 != (int *)0x0) {
        (**(int (***)())(*piStack_30 + 8))();
        piStack_30 = (int *)0x0;
      }
    }
  }
  if (piStack_30 != (int *)0x0) {
    (**(int (***)())(*piStack_30 + 8))();
  }
  return lVar2;
}

