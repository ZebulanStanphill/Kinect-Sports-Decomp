#define true 1


unsigned int * fn_83016FD0(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0x6a0);
  while( true ) {
    if (puVar1 == (unsigned int *)0x0) {
      return (unsigned int *)0x0;
    }
    if ((puVar1[1] == param_2) && (puVar1[2] == param_3)) break;
    puVar1 = (unsigned int *)*puVar1;
  }
  return puVar1 + 1;
}

