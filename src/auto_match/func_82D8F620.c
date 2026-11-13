extern int fn_82D8ED88();
extern int fn_82DAF780();


void fn_82D8F620(int param_1,int param_2)

{
  int *puVar1;
  
  puVar1 = *(unsigned int **)(param_2 + 0xcc);
  *(unsigned int *)(param_2 + 8) = 0;
  fn_82DAF780(puVar1);
  if (((*(short *)(puVar1 + 8) != -1) && (puVar1[0x13] == 0)) && (*(char *)(param_1 + 200) != '\0'))
  {
    fn_82D8ED88(param_1,puVar1);
    (*(int (**)())*puVar1)(puVar1,1);
  }
  return;
}

