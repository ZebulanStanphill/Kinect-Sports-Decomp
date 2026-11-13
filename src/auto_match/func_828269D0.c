extern int fn_8282D0E0();


void fn_828269D0(int param_1,int param_2,unsigned char *param_3)

{
  
  if ((*(unsigned char *)(param_1 + 0x134) & 0x10) == 0) {
    fn_8282D0E0(*(unsigned int *)(param_1 + 0xcc),2,&param_1);
    param_1 = param_1;
  }
  *param_3 = *(unsigned char *)(*(int *)(param_1 + 0xe8) + param_2 * 0xe + -2);
  return;
}

