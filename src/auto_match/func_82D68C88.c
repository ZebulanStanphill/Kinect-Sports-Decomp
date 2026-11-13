extern int fn_82D69A68();


void fn_82D68C88(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned char bVar1;
  
  fn_82D69A68();
  bVar1 = *(unsigned char *)(param_3 + 0xb) & 0xf0;
  *(unsigned char *)(param_3 + 0xb) = bVar1;
  if (*(int *)(*(int *)*param_1 + 0xc) == 2) {
    *(unsigned char *)(param_3 + 0xb) = bVar1 | 5;
  }
  if (*(int *)(*(int *)param_1[1] + 0xc) == 2) {
    *(unsigned char *)(param_3 + 0xb) = *(unsigned char *)(param_3 + 0xb) | 10;
  }
  return;
}

