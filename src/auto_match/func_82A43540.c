__int64 fn_82A43540(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  double dVar3;
  
  (**(int (***)())(*(int *)(*(int *)(param_2 + 0x34) + 0x2c) + 8))(*(int *)(param_2 + 0x34) + 0x2c);
  lVar2 = 0;
  dVar3 = (double)*(float *)(param_2 + 0x4c);
  if (param_1 != dVar3) {
    *(float *)(param_2 + 0x4c) = (float)param_1;
    if (*(unsigned int **)(param_2 + 0x38) == (unsigned int *)0x0) {
      uVar1 = *(unsigned int *)(param_2 + 0x40);
    }
    else {
      uVar1 = **(unsigned int **)(param_2 + 0x38);
    }
    lVar2 = (**(int (***)())(*(int *)(param_2 + 4) + 0x60))
                      ((int *)(param_2 + 4),uVar1,*(unsigned int *)(param_2 + 0x50),param_4);
    if (lVar2 < 0) {
      *(float *)(param_2 + 0x4c) = (float)dVar3;
    }
  }
  (**(int (***)())(*(int *)(*(int *)(param_2 + 0x34) + 0x2c) + 0x14))(*(int *)(param_2 + 0x34) + 0x2c);
  return lVar2;
}

