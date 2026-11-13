extern int fn_822B4148();
extern int fn_823D29A8();
extern int fn_823E7870();
extern int fn_823E7B20();


void fn_823E6A28(int param_1,int param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  
  param_3[1] = *(unsigned int *)(param_2 + 0x2c);
  *param_3 = *(unsigned int *)(param_2 + 0x28);
  fn_822B4148(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 8),param_3[1]);
  uVar1 = fn_823D29A8();
  fn_823E7870(uVar1,*(unsigned int *)(param_3[1] * 4 + **(int **)(param_1 + 8)),0,0,param_3 + 2)
  ;
  fn_823E7B20(*(unsigned int *)(param_3[1] * 4 + **(int **)(param_1 + 8)),
                    *(unsigned int *)(((unsigned int)LZCOUNT(param_3[1]) >> 3 & 4) + **(int **)(param_1 + 8)),
                    0,0,0xffffffffffffffff,param_3 + 2,0xffffffff831d18a8,param_3 + 10);
  return;
}

