extern unsigned int *auStack_20;
extern int fn_8265C818();
extern int fn_8265CA20();
extern unsigned int iStack00000014;


void fn_8265C8B8(int param_1)

{
  int iStack00000014;
  unsigned char auStack_20 [8];
  
  iStack00000014 = param_1;
  fn_8265C818(auStack_20,param_1,**(unsigned int **)(param_1 + 4));
  fn_8265CA20(*(unsigned int *)(param_1 + 4));
  return;
}

