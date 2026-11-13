extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8252B8B0(int *param_1)

{
  int *piVar1;
  int iVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  piVar1 = (int *)param_1[0x230];
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 0xc))(piVar1);
    if ((((unsigned int *)param_1)[99] == 0) && (iVar2 = (*(int (**)())(*piVar1 + 0x18))(piVar1), iVar2 != 0)) {
      iVar2 = (*(int (**)())(*piVar1 + 0x4c))(piVar1);
      param_1[99] = iVar2;
    }
    if ((param_1[0x24b] == 0) && (iVar2 = (*(int (**)())(*piVar1 + 0x14))(piVar1), iVar2 != 0)) {
      stack_pair_20.first = 0x40;
      stack_pair_20.second = 8;
      (*(int (**)())(*param_1 + 0xc))(param_1,&stack_pair_20.first);
      param_1[0x24b] = 1;
    }
  }
  return;
}

