extern int fn_82554260();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern unsigned int ltcg_pool_0_0f;


void fn_822A8108(int param_1)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  
  if (*(int *)(param_1 + 0x5cc) == 0) {
    piVar1 = *(int **)(param_1 + 0x550);
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(int (***)())(*piVar1 + 0x50))(piVar1,(unsigned int *)(param_1 + 0x5d4));
      *(int *)(param_1 + 0x5cc) = iVar3;
      if (iVar3 != 0) {
        uVar2 = fn_827F04B0(0x1a0);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = fn_82554260(uVar2,*(unsigned int *)(param_1 + 0x5cc),1);
        }
        *(unsigned int *)(param_1 + 0x5d0) = uVar4;
        fn_827F2DD0((double)ltcg_pool_0_0f,*(unsigned int *)(param_1 + 0x5cc));
        (**(int (***)())(**(int **)(param_1 + 0x550) + 0x9c))
                  (*(int **)(param_1 + 0x550),*(unsigned int *)(param_1 + 0x5d4));
      }
    }
  }
  return;
}

