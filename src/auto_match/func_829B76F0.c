extern int fn_829B7138();
extern int fn_829B7480();
extern int fn_829B76A0();


void fn_829B76F0(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)((int (*)())**(unsigned int **)(param_1 + 4))(param_1,1,0x1c);
  *(unsigned int **)(param_1 + 0x1a8) = puVar1;
  *puVar1 = fn_829B7480;
  puVar1[1] = fn_829B76A0;
  puVar1[2] = 0;
  fn_829B7138(param_1);
  return;
}

