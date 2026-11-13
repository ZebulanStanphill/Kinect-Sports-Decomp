extern int fn_822B70F0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_822B7178(double param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  
  if (*(int *)(param_2 + 300) == 0) {
    fn_822B70F0(param_1,param_2,param_3,0);
  }
  else {
    piVar1 = *(int **)(*(int *)(param_2 + 0x14) + 0x8c0);
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 0x7c))(piVar1,param_3,0);
    }
    iVar2 = *(int *)(param_2 + 0x14);
    if ((double)lbl_821CA460 <= param_1) {
      *(unsigned int *)(iVar2 + 0x1e0) = *(unsigned int *)(iVar2 + 0x1e0) & 0xffffffdf;
      *(unsigned int *)(*(int *)(param_2 + 0x14) + 0x1e0) =
           *(unsigned int *)(*(int *)(param_2 + 0x14) + 0x1e0) & 0xfffffff7;
      *(unsigned int *)(param_2 + 0x138) = 0;
    }
    else {
      *(unsigned int *)(iVar2 + 0x1e0) = *(unsigned int *)(iVar2 + 0x1e0) | 0x20;
      dVar3 = (double)ltcg_pool_0_0f;
      *(unsigned int *)(*(int *)(param_2 + 0x14) + 0x1e0) = *(unsigned int *)(*(int *)(param_2 + 0x14) + 0x1e0) | 8;
      *(unsigned int *)(param_2 + 0x138) = 1;
      *(unsigned int *)(param_2 + 0x124) = 0;
      (**(int (***)())(*piVar1 + 0x78))(dVar3,piVar1,0);
    }
  }
  return;
}

