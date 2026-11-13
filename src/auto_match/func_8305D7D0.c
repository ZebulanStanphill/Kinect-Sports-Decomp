extern unsigned int *auStack_30;
extern int fn_8305F778();
extern int fn_83066658();


unsigned __int64 fn_8305D7D0(int param_1,unsigned __int64 param_2)

{
  unsigned char auStack_30 [24];
  
  fn_8305F778(*(unsigned int *)(param_1 + 0x28),**(unsigned int **)(param_1 + 0x2c),auStack_30);
  fn_83066658(param_2,param_1 + 0x34,auStack_30);
  return 1;
}

