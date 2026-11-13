extern int fn_8282D0E0();


void fn_82826CF0(int param_1,int param_2,unsigned int *param_3)

{
  
  if ((*(unsigned char *)(param_1 + 0x134) & 0x10) == 0) {
    fn_8282D0E0(*(unsigned int *)(param_1 + 0xcc),2,&param_1);
    param_1 = param_1;
  }
  param_2 = param_2 * 0xe;
  *param_3 = *(unsigned int *)(param_2 + *(int *)(param_1 + 0xe8) + -0xe);
  param_3[1] = *(unsigned int *)(param_2 + *(int *)(param_1 + 0xe8) + -6);
  *(unsigned char *)(param_3 + 2) = *(unsigned char *)(param_2 + *(int *)(param_1 + 0xe8) + -2);
  return;
}

