extern int fn_82ACA920();


unsigned int fn_82AD1978(unsigned int *param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_2 + 0x10) != 0) {
    param_2 = fn_82ACA920(*(unsigned int *)(*(int *)(param_2 & 0xfffff000) + 0x94),param_2,
                            *(unsigned int *)(param_2 + 0xc));
  }
  *(unsigned int **)(param_2 + 0x10) = param_1;
  *(unsigned int *)(param_2 + 4) = *param_1;
  *param_1 = param_2;
  return param_2;
}

