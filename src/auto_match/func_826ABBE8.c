extern int fn_826C3378();


int * fn_826ABBE8(int *param_1,int param_2)

{
  unsigned int iVar1;
  
  *(unsigned char *)(param_1 + 2) = 0;
  iVar1 = *(int *)(param_2 + 0x2c);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  param_1[1] = 0;
  if (*(unsigned int *)(param_2 + 0x30) != 0) {
    fn_826C3378(param_1,*(int *)(param_2 + 0x30),*(unsigned char *)(param_2 + 0x34) & 1);
  }
  return param_1;
}

