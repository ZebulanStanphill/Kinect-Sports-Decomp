extern unsigned int *auStack_30;
extern int fn_82D8CD68();


void fn_82E016D8(int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_30 [32];
  
  (*(int (**)())(*param_1 + 0x34))(param_1,param_2,auStack_30);
  fn_82D8CD68(param_1[4],auStack_30);
  return;
}

