extern int fn_82F655D8();
extern int fn_82FEF6D0();
extern int fn_82FEF868();
extern int fn_82FF4AE8();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_8217D2F8;
extern unsigned int lbl_83264304;


void fn_8303A720(int *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(**(int (***)())(*param_1 + 0x2c))();
  dVar2 = (double)(**(int (***)())(*(int *)param_1[2] + 0x28))();
  dVar2 = (double)fn_82F655D8(lbl_82002C40,(double)(float)(dVar2 * (double)lbl_8217D2F8));
  dVar2 = (double)(float)(dVar1 / (double)(float)dVar2);
  fn_82FEF868(dVar2,param_1[2]);
  fn_82FEF6D0(param_1[2]);
  fn_82FF4AE8(dVar1,dVar2,lbl_83264304,*(unsigned int *)(param_1[2] + 0x50));
  return;
}

