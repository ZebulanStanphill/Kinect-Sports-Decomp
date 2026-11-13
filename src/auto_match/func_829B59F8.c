extern int fn_829B57C0();
extern int fn_829B5830();
extern int fn_829B5960();
extern int fn_829B59E0();


void fn_829B59F8(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)((int (*)())**(unsigned int **)(param_1 + 4))(param_1,0,0x1c);
  *(unsigned int **)(param_1 + 0x1b8) = puVar1;
  *puVar1 = fn_829B5830;
  puVar1[1] = fn_829B5960;
  puVar1[4] = 0;
  puVar1[2] = fn_829B57C0;
  puVar1[3] = fn_829B59E0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  return;
}

