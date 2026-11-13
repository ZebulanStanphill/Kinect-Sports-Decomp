#define true 1


unsigned int * fn_82FFE098(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)((param_2 % 0xc1 + 1) * 4 + param_1);
  while( true ) {
    if (puVar1 == (unsigned int *)0x0) {
      return (unsigned int *)0x0;
    }
    if (puVar1[1] == param_2) break;
    puVar1 = (unsigned int *)*puVar1;
  }
  return puVar1 + 2;
}

