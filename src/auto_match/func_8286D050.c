extern int fn_8286D418();


unsigned __int64 fn_8286D050(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned char auStack_20 [8];
  
  if (*(unsigned int *)(param_1 + 0x1c) != 0) {
    puVar2 = (unsigned int *)(param_1 + 0x18);
    do {
      piVar1 = *(int **)(*(unsigned int *)*puVar2 + 8);
      if (piVar1 != (unsigned int *)0x0) {
        (*(int (**)())(*piVar1 + 0x14))(piVar1,1);
      }
      fn_8286D418(auStack_20,puVar2,*(unsigned int *)*puVar2);
    } while (*(unsigned int *)(param_1 + 0x1c) != 0);
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  return 0x20310000;
}

