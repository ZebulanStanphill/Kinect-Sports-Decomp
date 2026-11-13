extern int fn_82554260();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern unsigned int ltcg_pool_0_0f;


void fn_8228B270(int param_1,int param_2)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  
  param_1 = param_2 * 0x18 + param_1;
  if (*(int *)(param_1 + 0x620) == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x61c) + 0xb4);
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(int (***)())(*piVar1 + 0x50))(piVar1,(unsigned int *)(param_1 + 0x628));
      *(int *)(param_1 + 0x620) = iVar3;
      if (iVar3 != 0) {
        uVar2 = fn_827F04B0(0x1a0);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = fn_82554260(uVar2,*(unsigned int *)(param_1 + 0x620),1);
        }
        *(unsigned int *)(param_1 + 0x624) = uVar4;
        fn_827F2DD0((double)ltcg_pool_0_0f,*(unsigned int *)(param_1 + 0x620));
        (**(int (***)())(*piVar1 + 0x9c))(piVar1,*(unsigned int *)(param_1 + 0x628));
      }
    }
  }
  return;
}

