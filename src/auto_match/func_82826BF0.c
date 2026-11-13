extern int fn_8282D0E0();
extern int strncpy();


void fn_82826BF0(int param_1,unsigned int param_2,int param_3,int param_4)

{
  
  if ((*(unsigned char *)(param_1 + 0x134) & 0x20) == 0) {
    fn_8282D0E0(*(unsigned int *)(param_1 + 0xcc),1,&param_1);
  }
  strncpy(param_3,
                       *(unsigned int *)((param_2 & 0xff) * 0x21 + *(int *)(param_1 + 0x114) + -0x21)
                       + *(unsigned int *)(param_1 + 200),param_4);
  *(unsigned char *)(param_3 + param_4 + -1) = 0;
  return;
}

