extern int fn_822315A0();
extern int fn_8248F8E8();
extern int fn_8265CA20();
extern int fn_82F63CA0();
extern unsigned int lbl_821CA460;
extern int (*lbl_8327677C)();
extern unsigned int lbl_8329618C;


void fn_824910D0(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar3 = lbl_821CA460;
  *(unsigned int *)(param_1 + 0x54) = lbl_821CA460;
  if (lbl_8329618C == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lbl_8329618C + 4);
  }
  *(unsigned int *)(iVar4 + 0x820) = uVar3;
  iVar4 = *(int *)(param_1 + 0x5c);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 4) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar4);
  }
  *(unsigned int *)(param_1 + 0x5c) = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    if (lbl_8327677C != (int (**)())0x0) {
      (*lbl_8327677C)(0xffffffff821beb88,0xffffffff821beb18,0x5a8);
    }
    *(unsigned int *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 100) != 0) {
    if (lbl_8327677C != (int (**)())0x0) {
      (*lbl_8327677C)(0xffffffff821beb88,0xffffffff821beb18,0x5ae);
    }
    *(unsigned int *)(param_1 + 100) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != *(int **)(param_1 + 0x24)) {
    do {
      puVar2 = (unsigned int *)*piVar1;
      if (puVar2 != (unsigned int *)0x0) {
        (**(int (***)())*puVar2)(puVar2,1);
      }
      fn_82F63CA0(piVar1,piVar1 + 1,(*(int *)(param_1 + 0x24) - (int)(piVar1 + 1) >> 2) << 2);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -4;
    } while (piVar1 != *(int **)(param_1 + 0x24));
  }
  puVar2 = *(unsigned int **)(param_1 + 0x1c);
  if (puVar2 != (unsigned int *)0x0) {
    (**(int (***)())*puVar2)(puVar2,1);
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_8248F8E8();
  }
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    for (; iVar4 != *(int *)(param_1 + 8); iVar4 = iVar4 + 8) {
    }
    fn_8248F8E8();
  }
  *(int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

