extern int fn_8267BE38();
extern int fn_82715C98();
extern int fn_82716F98();
extern unsigned int lbl_8200BD80;
extern unsigned int lbl_8200F99C;


void fn_82719758(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[4];
  *param_1 = &lbl_8200F99C;
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  fn_8267BE38(param_1[0xc]);
  fn_82716F98(param_1[9],param_1[10]);
  fn_8267BE38(param_1[9]);
  fn_82715C98(param_1[6],param_1[7]);
  fn_8267BE38(param_1[6]);
  *param_1 = &lbl_8200BD80;
  return;
}

