extern int fn_82230300();
extern int fn_82359C18();
extern int fn_82518120();
extern int fn_82518470();


void fn_82233D58(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x50);
  uVar2 = fn_82518120();
  fn_82518470(uVar2,uVar1,param_1);
  fn_82359C18(param_1 + 0x38);
  fn_82230300(param_1,1,0);
  return;
}

