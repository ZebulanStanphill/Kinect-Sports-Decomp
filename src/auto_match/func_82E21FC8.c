extern int fn_82230300();


void fn_82E21FC8(int param_1)

{
  unsigned int uVar2;
  int lVar1;
  
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    fn_82230300(*(unsigned int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4),1,0);
    uVar2 = *(int *)(param_1 + 0xc) + 1;
    *(unsigned int *)(param_1 + 0xc) = uVar2;
    if (*(unsigned int *)(param_1 + 8) <= uVar2) {
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
    lVar1 = *(int *)(param_1 + 0x10) - 1;
    *(int *)(param_1 + 0x10) = (int)lVar1;
    if (lVar1 == 0) {
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

