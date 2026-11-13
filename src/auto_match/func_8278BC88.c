extern int fn_8267B890();
extern int fn_8267BE38();
extern unsigned int lbl_831E7E64;


void fn_8278BC88(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  
  fn_8267BE38(*(unsigned int *)(param_1 + 8));
  *(unsigned int *)(param_1 + 8) = 0;
  puVar1 = (unsigned int *)fn_8267B890(lbl_831E7E64,(param_2 + 1U & 0x3fffffff) << 2,0);
  *(unsigned int **)(param_1 + 8) = puVar1;
  *puVar1 = (int)param_2;
  return;
}

