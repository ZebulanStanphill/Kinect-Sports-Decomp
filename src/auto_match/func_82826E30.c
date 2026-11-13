extern int fn_82826D90();
extern int fn_8282D0E0();


void fn_82826E30(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  
  if ((*(unsigned char *)(param_1 + 0x134) & 0x10) == 0) {
    fn_8282D0E0(*(unsigned int *)(param_1 + 0xcc),1,&param_1);
  }
  fn_82826D90(param_1,
                *(unsigned int *)(*(int *)(param_1 + 0xe8) + param_2 * 0xe + -0xe),param_3,
                param_4);
  return;
}

