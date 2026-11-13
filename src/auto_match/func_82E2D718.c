extern int fn_82E57548();


__int64 fn_82E2D718(int param_1,unsigned int *param_2)

{
  int *piVar1;
  __int64 lVar2;
  int iVar3;
  int *piStack_30;
  int *piStack_2c;
  int * apiStack_28;
  
  piStack_30 = (int *)0x0;
  piStack_2c = (int *)0x0;
  apiStack_28 = (int *)0x0;
  lVar2 = (**(int (***)())*param_2)(param_2,0xffffffff82154c18,&piStack_30);
  if (-1 < lVar2) {
    iVar3 = (**(int (***)())(*piStack_30 + 0x10))(piStack_30,0xffffffff82154a98,0,&piStack_2c);
    if (iVar3 < 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = fn_82E57548(piStack_2c,&apiStack_28);
      if (-1 < lVar2) {
        if (*(int **)(param_1 + 0x1d8) != (int *)0x0) {
          (**(int (***)())(**(int **)(param_1 + 0x1d8) + 8))();
          *(unsigned int *)(param_1 + 0x1d8) = 0;
        }
        piVar1 = apiStack_28;
        apiStack_28 = (int *)0x0;
        *(int **)(param_1 + 0x1d8) = piVar1;
      }
    }
  }
  if (piStack_30 != (int *)0x0) {
    (**(int (***)())(*piStack_30 + 8))();
    piStack_30 = (int *)0x0;
  }
  if (piStack_2c != (int *)0x0) {
    (**(int (***)())(*piStack_2c + 8))();
    piStack_2c = (int *)0x0;
  }
  if (apiStack_28 != (int *)0x0) {
    (**(int (***)())(*apiStack_28 + 8))();
  }
  return lVar2;
}

