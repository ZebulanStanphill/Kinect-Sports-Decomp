extern unsigned int *auStack_28;
extern int fn_82A1EFC0();


void fn_8257CD70(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned char auStack_28 [8];

  if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(auStack_28,0,4);
  }
  puVar3 = *(unsigned int **)(param_1 + 0x28);
  for (puVar1 = (unsigned int *)*puVar3; puVar1 != puVar3; puVar1 = (unsigned int *)*puVar1) {
    piVar2 = (int *)puVar1[2];
    if (piVar2[2] == 0) {
      piVar2[2] = 1;
      (**(int (***)())(*piVar2 + 4))();
    }
    puVar3 = *(unsigned int **)(param_1 + 0x28);
  }
  return;
}
