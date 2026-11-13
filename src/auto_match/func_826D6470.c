extern int fn_8267B890();


unsigned int * fn_826D6470(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = (unsigned int *)fn_8267B890(*(unsigned int *)(param_1 + 0xc),param_2 + 4,0);
  if (puVar1 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = *(unsigned int *)(param_1 + 8);
    *(unsigned int **)(param_1 + 8) = puVar1;
  }
  return puVar2;
}

