extern int fn_8253F898();
extern int fn_825A8768();
extern unsigned int ltcg_pool_0_0f;
extern float lbl_8327F894;


void fn_825D2D60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  
  fn_8253F898();
  dVar4 = (double)ltcg_pool_0_0f;
  dVar3 = (double)*(float *)(param_2 + 0x828);
  if ((double)*(float *)(param_2 + 0x838) <= dVar4) {
    dVar4 = (double)(*(float *)(param_2 + 0x820) * lbl_8327F894);
  }
  iVar1 = *(int *)(param_2 + 0x93c);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0x84);
    if (piVar2 != (int *)0x0) {
      (**(int (***)())(*piVar2 + 0x10))(dVar3,dVar4,piVar2,param_2);
    }
    piVar2 = *(int **)(iVar1 + 0x9c);
    if (piVar2 != (int *)0x0) {
      (**(int (***)())(*piVar2 + 0x10))(dVar3,dVar4,piVar2,param_2);
    }
  }
  if (*(int *)(param_1 + 0xb74) != 0) {
    fn_825A8768(param_1);
    *(unsigned int *)(param_1 + 0xb74) = 0;
  }
  return;
}

