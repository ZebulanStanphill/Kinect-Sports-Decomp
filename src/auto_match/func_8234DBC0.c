extern int fn_827EFC90();
extern unsigned int lbl_82195680;
extern unsigned int lbl_821B1D28;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_8234DBC0(unsigned int *param_1,float *param_2,unsigned __int64 param_3,int param_4)

{
  float fVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned short uVar4;
  double dVar5;
  
  *param_1 = &lbl_821B1D28;
  uVar3 = ltcg_pool_0_0f;
  param_1[1] = *param_2;
  param_1[2] = uVar3;
  param_1[3] = &lbl_821B1D28;
  fVar1 = param_2[1];
  param_1[5] = uVar3;
  param_1[4] = fVar1;
  dVar5 = (double)lbl_82195680;
  param_1[6] = &lbl_821B1D28;
  fVar1 = param_2[2];
  param_1[8] = uVar3;
  param_1[7] = fVar1;
  param_1[9] = uVar3;
  piVar2 = *(int **)(param_4 + 0x1b4);
  if (dVar5 < ABS((double)*param_2)) {
    uVar4 = (**(int (***)())(*piVar2 + 0x14))(piVar2,0);
    fn_827EFC90(param_3,uVar4,param_1,0);
  }
  if (dVar5 < ABS((double)param_2[1])) {
    uVar4 = (**(int (***)())(*piVar2 + 0x14))(piVar2,1);
    fn_827EFC90(param_3,uVar4,param_1 + 3,0);
  }
  if (dVar5 < ABS((double)param_2[2])) {
    uVar4 = (**(int (***)())(*piVar2 + 0x14))(piVar2,2);
    fn_827EFC90(param_3,uVar4,param_1 + 6,0);
  }
  return param_1;
}

