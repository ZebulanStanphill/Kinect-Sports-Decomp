extern unsigned int *auStack_30;
extern int fn_82D8CD68();


void fn_82E016D8(int *self,unsigned __int64 param_2)

{
  unsigned char auStack_30 [32];
  
  (*(int (**)())(*self + 0x34))(self,param_2,auStack_30);
  fn_82D8CD68(self[4],auStack_30);
  return;
}

