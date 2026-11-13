extern int fn_82522ED8();


void fn_8250B160(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0xc);
  (*(int (**)())*puVar1)(puVar1,0);
  fn_82522ED8(puVar1);
  return;
}

