extern int fn_82815268();
extern int fn_82816480();
extern int fn_82820970();
extern int (*lbl_8320A5D4)();
extern unsigned int lbl_8320A5D8;


void fn_82820A80(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  
  if (param_3 != 0) {
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 0x10000;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_2 + 0x10) | 0x20000;
    fn_82820970(param_2);
    if ((*(unsigned int *)(param_2 + 0x10) & 2) == 0) {
      if ((lbl_8320A5D4 != (int (**)())0x0) &&
         (iVar2 = (*lbl_8320A5D4)(*(unsigned int *)(param_2 + 0x18)), iVar2 != 0)) {
        *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 0x400;
      }
      lbl_8320A5D8 = lbl_8320A5D8 + -1;
    }
    else {
      if (*(int (***)())(param_1 + 0x10) != (int (**)())0x0) {
        (**(int (***)())(param_1 + 0x10))(*(unsigned int *)(param_2 + 0x18));
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_2 + 0x10) | 0x801;
      *(unsigned int *)(*(int *)(param_2 + 0x20) + 0x24) = 0;
      puVar1 = *(unsigned int **)(param_2 + 0x20);
      fn_82816480(param_1,*puVar1,puVar1[5],puVar1[6],param_2 + 0x20,puVar1[4],puVar1[1],1);
      return;
    }
  }
  fn_82815268(param_1,param_2,*(unsigned int *)(param_2 + 0x14));
  return;
}

