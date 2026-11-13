extern int fn_822315A0();
extern int fn_82522ED8();
extern int fn_8265CA20();


void fn_82501CC8(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  fn_8265CA20(*(unsigned int *)(param_1 + 0xb6c));
  puVar1 = *(unsigned int **)(param_1 + 0xb64);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  puVar1 = *(unsigned int **)(param_1 + 0xb68);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  iVar3 = *(int *)(param_1 + 0xc74);
  *(unsigned int *)(param_1 + 0xb68) = 0;
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + 0x14);
    if (iVar5 != 0) {
      iVar2 = *(int *)(iVar3 + 0x18);
      for (; iVar5 != iVar2; iVar5 = iVar5 + 8) {
        if (*(int *)(iVar5 + 4) != 0) {
          fn_822315A0();
        }
      }
      fn_8265CA20(*(unsigned int *)(iVar3 + 0x14));
    }
    *(unsigned int *)(iVar3 + 0x14) = 0;
    *(unsigned int *)(iVar3 + 0x18) = 0;
    *(unsigned int *)(iVar3 + 0x1c) = 0;
    fn_8265CA20(iVar3);
  }
  *(unsigned int *)(param_1 + 0xc74) = 0;
  if (*(int *)(param_1 + 0xc64) != 0) {
    fn_82522ED8();
    *(unsigned int *)(param_1 + 0xc64) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xc6c);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0xc6c) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xc78);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0xc78) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xc80);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0xc80) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xc84);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0xc84) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xc7c);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0xc7c) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xc88);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0xc88) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xc8c);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0xc8c) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xc90);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0xc90) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xc94);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0xc94) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xc9c);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  puVar1 = *(unsigned int **)(param_1 + 0xca4);
  *(unsigned int *)(param_1 + 0xc9c) = 0;
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  puVar1 = *(unsigned int **)(param_1 + 0xcac);
  *(unsigned int *)(param_1 + 0xca4) = 0;
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  puVar1 = *(unsigned int **)(param_1 + 0xcb8);
  *(unsigned int *)(param_1 + 0xcac) = 0;
  *(unsigned int *)(param_1 + 0xca8) = 0;
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  puVar1 = *(unsigned int **)(param_1 + 0xcbc);
  *(unsigned int *)(param_1 + 0xcb8) = 0;
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  iVar3 = 0x335;
  *(unsigned int *)(param_1 + 0xcbc) = 0;
  piVar4 = (int *)(param_1 + 0xcc8);
  do {
    puVar1 = (unsigned int *)piVar4[-1];
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    puVar1 = (unsigned int *)*piVar4;
    piVar4[-1] = 0;
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    iVar5 = 0;
    *piVar4 = 0;
    do {
      iVar2 = (iVar5 + iVar3) * 4;
      puVar1 = *(unsigned int **)(iVar2 + param_1);
      if (puVar1 != (unsigned int *)0x0) {
        (**(int (***)())*puVar1)(puVar1,1);
      }
      iVar5 = iVar5 + 1;
      *(unsigned int *)(iVar2 + param_1) = 0;
    } while (iVar5 < 6);
    iVar3 = iVar3 + 0x10;
    piVar4 = piVar4 + 0x10;
  } while (iVar3 < 0x355);
  return;
}

