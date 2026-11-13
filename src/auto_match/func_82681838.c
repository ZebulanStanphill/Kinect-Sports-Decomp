extern int fn_826959C8();


void fn_82681838(unsigned char *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_1 >= 5) {
    fn_826959C8();
  }
  *param_1 = 5;
  iVar1 = *param_2;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  return;
}

