extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;


unsigned int * fn_8268C818(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  uVar3 = (unsigned __int64)*param_2;
  uVar1 = param_2[1];
  if (uVar3 == 0) {
    uVar3 = 0xffffffff82196582;
  }
  lVar2 = fn_8268B368(param_1,lbl_831E7E64,uVar1,0);
  fn_82F68CC0(lVar2 + 8,uVar3,uVar1);
  *param_1 = (int)lVar2;
  return param_1;
}

