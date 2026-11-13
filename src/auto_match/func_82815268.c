extern int fn_82814F70();
extern int (*lbl_8320A5D4)();
extern unsigned int lbl_8320A5D8;


unsigned int fn_82815268(int param_1,int param_2,int (**param_3)())

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  if (param_2 == 0) {
    uVar3 = 2;
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x24);
    uVar3 = *(unsigned int *)(param_2 + 0xc);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 0x18);
    }
  }
  if (param_2 != 0) {
    if ((*(unsigned int *)(param_2 + 0x10) & 2) == 0) {
      if ((((uVar3 & 0x10) == 0) && (lbl_8320A5D4 != (int (**)())0x0)) &&
         (iVar1 = (*lbl_8320A5D4)(*(unsigned int *)(param_2 + 0x18)), iVar1 != 0)) {
        uVar3 = uVar3 | 0x400;
      }
      lbl_8320A5D8 = lbl_8320A5D8 + -1;
    }
    else {
      if (*(int (***)())(param_1 + 0x10) != (int (**)())0x0) {
        (**(int (***)())(param_1 + 0x10))(*(unsigned int *)(param_2 + 0x18));
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
    fn_82814F70(param_2);
  }
  if (param_3 != (int (**)())0x0) {
    (*param_3)(0,iVar2,uVar3);
  }
  return uVar3;
}

