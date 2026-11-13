extern int fn_826CD508();
void *memmove(void *d, const void *s, unsigned int n);


void fn_826FE888(int *param_1,unsigned int param_2,int *param_3)

{
  unsigned int iVar1;
  int *piVar2;
  
  fn_826CD508(param_1,(unsigned __int64)(unsigned int)param_1[1] + 1);
  if (param_2 < param_1[1] - 1U) {
    iVar1 = param_2 * 4 + *param_1;
    memmove((void*)(iVar1 + 4),(void*)iVar1,((param_1[1] - param_2) - 1) * 4);
  }
  piVar2 = (int *)(param_2 * 4 + *param_1);
  if (piVar2 != (int *)0x0) {
    iVar1 = *param_3;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    *piVar2 = *param_3;
  }
  return;
}

