extern int fn_82695DA0();
extern int fn_826C3378();


int * fn_826C0080(int *param_1,unsigned int *param_2)

{
  unsigned int iVar1;
  
  *(unsigned char *)(param_1 + 2) = 0;
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  param_1[1] = 0;
  if (param_2[1] != 0) {
    fn_826C3378(param_1,param_2[1],*(unsigned char *)(param_2 + 2) & 1);
  }
  fn_82695DA0(param_1 + 4,param_2 + 4);
  return param_1;
}

