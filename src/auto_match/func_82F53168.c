extern unsigned int *auStack_20;
extern int fn_8265CA20();
extern int fn_82F53090();
extern unsigned int lbl_82165B74;


void fn_82F53168(unsigned int *param_1)

{
  unsigned char auStack_20 [16];
  
  *param_1 = &lbl_82165B74;
  fn_82F53090(auStack_20,param_1 + 2,*(unsigned int *)param_1[3]);
  fn_8265CA20(param_1[3]);
  return;
}

