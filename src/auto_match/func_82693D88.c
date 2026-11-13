extern int fn_8267B890();
extern int fn_82693D18();


unsigned int * fn_82693D88(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  if ((param_2 & 0xffffffff) < 0xc) {
    if (*(unsigned int *)(param_1 + 0x10) == 0) {
      fn_82693D18();
    }
    puVar1 = *(unsigned int **)(param_1 + 0x10);
    puVar2 = (unsigned int *)0x0;
    if (puVar1 != (unsigned int *)0x0) {
      *(unsigned int *)(param_1 + 0x10) = *puVar1;
      puVar2 = puVar1;
    }
  }
  else {
    puVar2 = (unsigned int *)fn_8267B890(*(unsigned int *)(param_1 + 4),param_2 + 1,0);
  }
  return puVar2;
}

