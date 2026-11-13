void fn_8284C5C8(int param_1,unsigned int *param_2)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar2 = 0;
  piVar1 = (int *)0x83157148;
  do {
    if (param_1 == *piVar1) {
      iVar3 = uVar2 * 0x10;
      *param_2 = *(unsigned int *)(iVar3 + -0x7cea8eb8);
      param_2[1] = *(unsigned int *)(iVar3 + -0x7cea8eb4);
      param_2[2] = *(unsigned int *)(iVar3 + -0x7cea8eb0);
      param_2[3] = *(unsigned int *)(iVar3 + -0x7cea8eac);
      return;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
  } while (uVar2 < 0x24);
  return;
}

