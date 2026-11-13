extern int fn_827D9ED0();
extern int fn_82A29D80();
extern unsigned int fn_82A1F470();


unsigned int  fn_827DD190(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = fn_827D9ED0(param_2);
  iVar2 = fn_82A29D80(uVar1,0);
  *param_3 = iVar2;
  if (iVar2 == -1) {
    uVar1 = fn_82A1F470();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

