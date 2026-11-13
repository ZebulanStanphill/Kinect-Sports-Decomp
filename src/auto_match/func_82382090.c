extern unsigned int *auStack_30;
extern int fn_82329730();
extern int fn_82359C18();
extern int fn_82383300();
extern int fn_8238EBF8();
extern unsigned int uStack_20;


void fn_82382090(int *param_1)

{
  __int64 lVar1;
  unsigned char auStack_30 [16];
  unsigned int uStack_20;
  
  uStack_20 = 0;
  lVar1 = (**(int (***)())(*param_1 + 0x4c))();
  fn_82329730(lVar1 + 0x348,auStack_30);
  fn_82359C18(auStack_30);
  uStack_20 = 0;
  lVar1 = (**(int (***)())(*param_1 + 0x4c))(param_1);
  fn_82329730(lVar1 + 0x3c0,auStack_30);
  fn_82359C18(auStack_30);
  uStack_20 = 0;
  lVar1 = (**(int (***)())(*param_1 + 0x4c))(param_1);
  fn_82383300(lVar1 + 0x430,auStack_30);
  fn_82359C18(auStack_30);
  fn_8238EBF8(param_1[0x22]);
  return;
}

