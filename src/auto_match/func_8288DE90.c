extern int fn_8243DD58();
extern int fn_828C6480();


void fn_8288DE90(int param_1)

{
  *(unsigned char *)(param_1 + 0xd0) = 0;
  fn_828C6480(param_1 + 0xa4,param_1 + 0xc0,0);
  fn_8243DD58(param_1 + 0xc0,*(unsigned int *)(*(int *)(param_1 + 0xc4) + 4));
  *(int *)(*(int *)(param_1 + 0xc4) + 4) = *(int *)(param_1 + 0xc4);
  *(unsigned int *)*(unsigned int *)(param_1 + 0xc4) = *(unsigned int *)(param_1 + 0xc4);
  *(int *)(*(int *)(param_1 + 0xc4) + 8) = *(int *)(param_1 + 0xc4);
  *(unsigned int *)(param_1 + 200) = 0;
  return;
}

