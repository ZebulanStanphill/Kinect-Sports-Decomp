extern int fn_82FB48E8();


void fn_82FB4D68(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  char cVar3;
  
  *(unsigned int *)(param_1 + 0x74) = **(unsigned int **)(param_1 + 0x74);
  if (**(int **)(param_1 + 0x74) == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = fn_82FB48E8();
    }
  }
  else {
    cVar3 = '\x01';
  }
  if (cVar3 == '\0') {
    for (puVar1 = *(unsigned int **)(param_1 + 0x54); puVar1 != (unsigned int *)0x0;
        puVar1 = (unsigned int *)*puVar1) {
      piVar2 = *(int **)(puVar1[1] + 0x1c);
      if ((piVar2 != (int *)0x0) && ((*(unsigned char *)(piVar2 + 0xd) & 0x80) != 0)) {
        (**(int (***)())(*piVar2 + 0x24))();
      }
    }
  }
  return;
}

