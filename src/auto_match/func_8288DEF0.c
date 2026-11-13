extern int fn_8288BD68();


void fn_8288DEF0(int param_1)

{
  unsigned int *puVar1;
  unsigned int *apuStack_20 [4];
  
  puVar1 = *(unsigned int **)(param_1 + 0x98);
  apuStack_20[0] = (unsigned int *)*puVar1;
  while (apuStack_20[0] != puVar1) {
    fn_8288BD68(apuStack_20);
  }
  return;
}

