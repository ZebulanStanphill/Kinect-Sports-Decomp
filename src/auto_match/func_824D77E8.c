extern int fn_824CCFC8();
extern unsigned int ltcg_pool_0_0f;


double fn_824D77E8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(param_1 + 0x10c);
    piVar2 = *(int **)(param_1 + 0x114);
  }
  else {
    piVar1 = *(int **)(param_1 + 0x108);
    piVar2 = *(int **)(param_1 + 0x110);
  }
  fVar3 = ltcg_pool_0_0f;
  if (((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) &&
     (iVar4 = fn_824CCFC8(), fVar3 = ltcg_pool_0_0f, iVar4 != 0)) {
    dVar5 = (double)(**(int (***)())(*piVar1 + 0x14))(piVar1);
    dVar6 = (double)(**(int (***)())(*piVar2 + 0x14))(piVar2);
    fVar3 = (float)(dVar5 - dVar6);
  }
  return (double)fVar3;
}

