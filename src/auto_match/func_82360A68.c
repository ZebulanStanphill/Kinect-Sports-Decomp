extern int fn_822ABA88();
extern int fn_8234B0C8();
extern int fn_827F5708();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82360A68(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = 0;
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(int *)(iVar2 + 8) != 0) {
    dVar4 = (double)ltcg_pool_0_0f;
    dVar5 = (double)lbl_821CA460;
    do {
      iVar2 = fn_822ABA88(iVar2,uVar3);
      if (*(int *)(*(int *)(iVar2 + 0x118) + 0x2e4) != 0) {
        fn_827F5708(dVar5);
      }
      fn_8234B0C8(dVar4,(unsigned __int64)*(unsigned int *)(iVar2 + 0x118) + 0x2c0,param_3);
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 8));
  }
  return;
}

