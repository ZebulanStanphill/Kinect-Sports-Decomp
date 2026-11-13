extern unsigned int *auStack_20;
extern int fn_8251F720();
extern int fn_82520158();
extern unsigned int lbl_821CAD0C;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_826192B0(unsigned int *param_1,unsigned int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_20 [8];
  
  param_1[1] = param_2;
  param_1[0x3f2] = param_3;
  param_1[0x3ed] = 0;
  param_1[0x3f3] = ltcg_pool_0_0f;
  *param_1 = &lbl_821CAD0C;
  param_1[0x3ee] = 0;
  param_1[0x3ef] = 0;
  param_1[0x3f0] = 0;
  param_1[0x3f4] = 0xffffffff;
  if (param_3 == 0) {
    param_1[0x3f5] = 0;
  }
  else {
    iVar1 = fn_82520158(0xffffffff821c9120,auStack_20,0);
    if (iVar1 == 0) {
      param_1[0x3f5] = 0;
    }
    else {
      uVar2 = fn_8251F720(auStack_20,0);
      param_1[0x3f5] = uVar2;
    }
    iVar1 = fn_82520158(0xffffffff821c53d4,auStack_20,0);
    if (iVar1 != 0) {
      uVar2 = fn_8251F720(auStack_20,0);
      param_1[0x3f6] = uVar2;
      return param_1;
    }
  }
  param_1[0x3f6] = 0;
  return param_1;
}

