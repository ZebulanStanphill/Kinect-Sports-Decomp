unsigned int * fn_8255BFC0(int *param_1,unsigned short param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  if (param_2 < 0x2711) {
    puVar1 = (unsigned int *)*param_1;
    if (puVar1 == (unsigned int *)0x0) {
      return (unsigned int *)0x0;
    }
    puVar3 = puVar1 + 2;
    uVar2 = 0;
    if (*puVar1 != 0) {
      do {
        if (*(unsigned short *)((int)puVar3 + 6) == param_2) {
          return puVar3;
        }
        uVar2 = uVar2 + 1;
        puVar3 = (unsigned int *)(*puVar3 + (int)puVar3);
      } while (uVar2 < *puVar1);
    }
  }
  else {
    puVar1 = (unsigned int *)param_1[1];
    if (puVar1 == (unsigned int *)0x0) {
      return (unsigned int *)0x0;
    }
    puVar3 = puVar1 + 2;
    uVar2 = 0;
    if (*puVar1 != 0) {
      do {
        if (*(unsigned short *)((int)puVar3 + 6) == param_2) {
          return puVar3;
        }
        uVar2 = uVar2 + 1;
        puVar3 = (unsigned int *)(*puVar3 + (int)puVar3);
      } while (uVar2 < *puVar1);
    }
  }
  return (unsigned int *)0x0;
}

