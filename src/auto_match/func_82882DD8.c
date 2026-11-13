extern unsigned int *auStack_28;
extern int fn_82881290();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82882DD8(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puStack_2c;
  unsigned int auStack_28 [4];
  
  puVar3 = (unsigned int *)(param_1 + 8);
  auStack_28[0] = *puVar3;
  puStack_2c = puVar3;
  fn_82881290(auStack_28,&puStack_2c,0);
  puVar2 = (unsigned int *)*puVar3;
  while (puVar2 != puVar3) {
    puVar1 = (unsigned int *)*puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar1;
  }
  *(unsigned int **)(param_1 + 0xc) = puVar3;
  *puVar3 = puVar3;
  return;
}

