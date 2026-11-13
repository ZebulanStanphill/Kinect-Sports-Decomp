typedef unsigned char bool;
#define false 0
extern int fn_8255B1E0();
extern unsigned int ltcg_pool_0_0f;


bool fn_82435E88(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if ((*param_2 == 0) || (**(char **)(**(int **)(param_1 + 0x40) + 0x174) == '\0')) {
    bVar3 = false;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x40);
    iVar2 = fn_8255B1E0((double)ltcg_pool_0_0f,
                              *(unsigned int *)(*(int *)(*(int *)(*piVar1 + 0x174) + 0x9c) + 0x844),
                              param_2,1,0,0,0,0);
    piVar1[0x3c] = iVar2;
    bVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0xf0) != 0;
  }
  return bVar3;
}

