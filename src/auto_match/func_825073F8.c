extern int fn_82507590();
extern int fn_82507668();
extern int fn_82592430();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern unsigned int lbl_821922D0;
extern unsigned int ltcg_pool_0_0f;
extern float lbl_8327F894;


void fn_825073F8(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  double dVar4;
  
  *(unsigned int *)(param_1 + 0x2b0) = lbl_821922D0;
  if (*(char *)(param_1 + 0xb6d) == '\0') {
    if (*(char *)(param_1 + 0xb6c) == '\0') {
      piVar1 = *(int **)(param_1 + 0x8c0);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(int (***)())(*piVar1 + 0x14))(piVar1);
        if (iVar2 == 0) {
          (**(int (***)())(*piVar1 + 0xc))(piVar1);
        }
        iVar2 = (**(int (***)())(*piVar1 + 0x14))(piVar1);
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x18c) == 0) {
            uVar3 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x4c))();
            *(unsigned int *)(param_1 + 0x18c) = uVar3;
          }
          *(unsigned char *)(param_1 + 0xb6c) = 1;
          *(unsigned int *)(param_1 + 0xb68) = *(unsigned int *)(param_1 + 0x18c);
          if (*(int *)(param_1 + 0xfec) != 0) {
            fn_82507668(param_1,param_1 + 0xfec);
          }
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0xf58) != 0x3e5) {
    fn_82507590(param_1,param_1 + 0xb6f);
    *(unsigned char *)(param_1 + 0xb6d) = 0;
  }
  if (*(char *)(param_1 + 0xb6c) != '\0') {
    dVar4 = (double)ltcg_pool_0_0f;
    if ((double)*(float *)(*(int *)(param_1 + 0x4c) + 0x838) <= dVar4) {
      dVar4 = (double)(*(float *)(*(int *)(param_1 + 0x4c) + 0x820) * lbl_8327F894);
    }
    fn_827EF828(dVar4,*(unsigned int *)(param_1 + 0xb68));
    fn_827EFFE8(*(unsigned int *)(param_1 + 0xb68));
    if (*(int *)(param_1 + 0x8c0) != 0) {
      fn_827F0180(*(unsigned int *)(param_1 + 0xb68),
                        **(unsigned int **)
                          ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 +
                          *(int *)(param_1 + 0x8c0)),1,0,0);
    }
  }
  fn_82592430(param_1,param_2);
  return;
}

