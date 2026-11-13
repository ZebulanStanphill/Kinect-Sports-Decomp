extern int fn_82231540();
extern unsigned int uStack_20;


void fn_827D8D58(int *param_1)

{
  unsigned char uStack_20;
  
  if (*param_1 != 0) {
    fn_82231540(*param_1,param_1[1],param_1 + 3,uStack_20);
    (**(int (***)())(*(int *)param_1[3] + 0x18))((int *)param_1[3],*param_1,param_1 + 4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

