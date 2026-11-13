extern int fn_82FA5358();
extern int fn_82FA57F0();


void fn_82877520(unsigned int *param_1)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar1 = param_1[9];
  iVar2 = param_1[10];
  (*(int (**)())*param_1)(param_1,0);
  if (iVar1 != -1) {
    if (iVar2 != 0) {
      fn_82FA5358(iVar1,iVar2);
    }
    fn_82FA57F0(iVar1);
  }
  return;
}

