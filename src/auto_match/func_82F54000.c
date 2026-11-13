extern int fn_82231540();
extern int fn_8265CA20();
extern unsigned int uStack_20;


void fn_82F54000(unsigned int *param_1)

{
  unsigned char uStack_20;
  
  if (*param_1 != 0) {
    fn_82231540(*param_1,param_1[1],param_1 + 3,uStack_20);
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

