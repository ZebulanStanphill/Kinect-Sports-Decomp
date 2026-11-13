extern int fn_82A40B38();
extern int fn_82A4F4E0();
extern int fn_82A5C960();


void fn_82A5C9E0(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int *piVar3;
  
  fn_82A5C960();
  puVar1 = *(unsigned int **)(param_1 + 0xd4);
  while (puVar2 = puVar1, puVar2 != (unsigned int *)0x0) {
    if (puVar2 == (unsigned int *)0x0) {
      piVar3 = (int *)0x0;
      puVar1 = puVar2;
    }
    else {
      piVar3 = (int *)*puVar2;
      puVar1 = (unsigned int *)puVar2[1];
    }
    if (((piVar3[3] == param_2) ||
        ((*piVar3 == 2 && ((piVar3[5] == param_2 || (piVar3[4] == param_2)))))) &&
       (fn_82A40B38(param_1 + 8,puVar2), piVar3[2] != 5)) {
      fn_82A4F4E0(piVar3);
    }
  }
  return;
}

